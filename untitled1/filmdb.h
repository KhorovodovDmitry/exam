#ifndef FILMDB_H
#define FILMDB_H

#include <string>
#include <vector>

class FilmDB {
public:
    FilmDB(); // Конструктор
    void addFilm(const std::string& title, const std::string& genre, int rating, int duration);

    std::vector<std::string> get_good_films_of_genre(int rating, const std::string& genre);
    std::vector<std::string> get_films_of_genre_less_than(int time, const std::string& genre);
    std::vector<std::string> get_films_less_than(int time);
    int count_genre(const std::string& genre);

private:
    struct Film {
        std::string title;
        std::string genre;
        int rating;
        int duration;
    };

    std::vector<Film> films;

    std::vector<std::string> get_films_by_genre(const std::string& genre, bool less_than_duration, int time = -1);
};

#endif // FILMDB_H
