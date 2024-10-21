#include "FilmDB.h"

FilmDB::FilmDB() {}

void FilmDB::addFilm(const std::string& title, const std::string& genre, int rating, int duration) {
    films.push_back({title, genre, rating, duration});
}

std::vector<std::string> FilmDB::get_good_films_of_genre(int rating, const std::string& genre) {
    std::vector<std::string> result;
    for (const auto& film : films) {
        if (film.genre == genre && film.rating >= rating) {
            result.push_back(film.title);
        }
    }
    return result;
}

std::vector<std::string> FilmDB::get_films_of_genre_less_than(int time, const std::string& genre) {
    return get_films_by_genre(genre, true, time);
}

std::vector<std::string> FilmDB::get_films_less_than(int time) {
    std::vector<std::string> result;
    for (const auto& film : films) {
        if (film.duration <= time) {
            result.push_back(film.title);
        }
    }
    return result;
}

int FilmDB::count_genre(const std::string& genre) {
    int count = 0;
    for (const auto& film : films) {
        if (film.genre == genre) {
            count++;
        }
    }
    return count;
}

std::vector<std::string> FilmDB::get_films_by_genre(const std::string& genre, bool less_than_duration, int time) {
    std::vector<std::string> result;
    for (const auto& film : films) {
        if (film.genre == genre && (!less_than_duration || film.duration <= time)) {
            result.push_back(film.title);
        }
    }
    return result;
}
