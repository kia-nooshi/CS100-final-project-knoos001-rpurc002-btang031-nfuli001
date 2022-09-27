#include "scan.hpp"
#include "display.hpp"
#include "menu.hpp"
#include <iostream>
#include <string>
#include <map>

using namespace std;

void intro() {
    cout << "=================================================" << endl;
    cout << "Movie Recommender" << endl;
    cout << "=================================================" << endl;
}

void menu() {
    cout << endl;
    cout << "Movie Recommender Menu:" << endl;
    cout << "Enter the number of the menu option you want (i.e. 1 or q to quit)" << endl;
    cout << endl;
    cout << "1. Recommend by Title" << endl;
    cout << "2. Recommend by Genre" << endl;
    cout << "3. Recommend by Rating" << endl;
    cout << "4. Recommend by Director" << endl;
        cout << "5. Recommend by Date" << endl;
    cout << "Q. Quit" << endl << endl;
    cout << "Enter option: ";
}
void option1(Scan* title) {
        string movieTitle;
    cout << "Enter movie title to find recommended movies: " << endl;
    cin.ignore();
    getline(cin, movieTitle);

    if (title->isMovie(movieTitle)) {
                cout << "=======================================================";
        recommend(title->getMovies(), movieTitle, title->getMovMap());
                cout << "=======================================================" << endl;
    } else {
        cout << "The movie you entered does not exist in the database.\nTry again with one that does."
   ; }
}

void option2(Scan* title) {
    string movieGenre = "";
    cout << endl << "Enter the genre below: " << endl;
    cin >> movieGenre;
    title->setFilters(new SortGenre(movieGenre));
    title->sort();
}

void option3(Scan* title) {
    title->setFilters(new ListTen());
    title->sort();
}

void option4(Scan* title) {
    string directorName = "";
    cout << endl << "Enter director's full name below: " << endl;
    cin.ignore();
    getline(cin, directorName);
    title->setFilters(new SortDirector(directorName));
    title->sort();
}

void option5(Scan* title) {
    int releaseDate = 0;
    cout << endl << "Enter release date below: " << endl;
    cin >> releaseDate;
    title->setFilters(new ListTenRecent(releaseDate));
    title->sort();
}

int quit() {
    cout << "Goodbye, have a good day OWO" << endl;
        exit(0);
}

