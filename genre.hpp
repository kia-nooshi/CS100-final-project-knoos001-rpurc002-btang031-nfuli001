#ifndef __GENRE_HPP__
#define __GENRE_HPP__

#include "movie.hpp"
#include "base.hpp" 

#include <vector> 
#include <string>

using namespace std;

class Category : public Base{
private:
   vector<Movie *> movies;
   vector<Category *> cats;

public:
   Category() : Base() {};
   Category(string title, vector<string> genres) : Base(title, genres) {};

   string getTitle();
   vector<string> getGenres();
   void setTitle(string tit);

   void addMovie(Movie* mov);
   void addCategory(Category* newCat);

};

#endif
