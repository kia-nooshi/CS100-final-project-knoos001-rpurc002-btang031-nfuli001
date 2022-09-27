#include <iostream>
#include <string>
#include <map>

#include "movie.hpp"
#include "base.hpp"
#include "genre.hpp"
#include "scan.hpp"
#include "display.hpp"

#include "menu.hpp"
#include "mainFunctions.hpp"

using namespace std;

class Movies;

int main() {
    char menuOption = ' ';

    Scan* findMovie = new Scan();
    findMovie -> scanMovies();
    vector<Movie*> var1 = findMovie->getMovies();
/*	for (int i = 0; i < var1.size(); i++){
	cout << var1.at(i) -> getMovieTitle() << endl; 
} */
   movieSort(var1);
    findMovie->setMovies(var1);
    intro();

	while (menuOption != 'Q' || menuOption != 'q') {
    	menu();
		cin >> menuOption;
		
		if (menuOption == '1') {
     		option1(findMovie);
    	} else if(menuOption == '2') {
        	option2(findMovie);
    	} else if(menuOption == '3') {
        	option3(findMovie);
    	} else if(menuOption == '4') {
        	option4(findMovie);
    	} else if(menuOption == '5') {
        	option5(findMovie);
		} else if(menuOption == 'Q' || menuOption == 'q') {
			quit();
    	} else {
        	cout << "Not a valid selection, please try again" << endl;
			menu();
    	}
    }
    delete findMovie;
/*	for(int i = 0; i < var1.size(); i++){
		delete var1.at(i);
} */
    return 0;
}
