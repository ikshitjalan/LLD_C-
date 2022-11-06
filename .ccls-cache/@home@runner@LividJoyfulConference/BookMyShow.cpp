#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//User - Website - Shows - movie - location - theater - payment - ticket - seat

class MovieController{
  public:
  unordered_map<City*,Movie*> cityToMovies;
  vector<Movie*> allMovies;

  void addMovieToCity(Movie* movie,City* city){
    cityToMovies.insert(city,movie);
  }

  vector<Movie*> listAllMovesInCity(){
    return allMovies;
  }

  

};


class Movie{
  public:
    string movieName;
    int durationinhrs;
  Movie(string movieName, int durationinhrs){
    this->movieName = movieName;
    this->durationinhrs = durationinhrs;
  }
    
  //getter and setter;
};


int main(){
  return 0;
}