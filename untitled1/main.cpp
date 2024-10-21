#include <iostream>
#include "FilmDB.h"

using namespace std;

int main() {
    FilmDB db;

    // Добавление фильмов
    db.addFilm("beef", "food", 9, 148);
    db.addFilm("friedd eggs", "breakfast", 9, 175);
    db.addFilm("chair", "home", 8, 81);
    db.addFilm("documents", "work", 9, 152);
    db.addFilm("table", "home", 8, 100);

    // Демонстрация работы методов
    cout << "Good Food Films (Rating >= 8):" << endl;
    auto goodFilms = db.get_good_films_of_genre(8, "food");
    for (const auto& title : goodFilms) {
        cout << "- " << title << endl;
    }

    cout << "\nHome Films (Duration <= 100 minutes):" << endl;
    auto shortAnimFilms = db.get_films_of_genre_less_than(100, "home");
    for (const auto& title : shortAnimFilms) {
        cout << "- " << title << endl;
    }

    cout << "\nFilms (Duration <= 120 minutes):" << endl;
    auto shortFilms = db.get_films_less_than(120);
    for (const auto& title : shortFilms) {
        cout << "- " << title << endl;
    }

    cout << "\nCount of Home Films: " << db.count_genre("home") << endl;

    return 0;
}
