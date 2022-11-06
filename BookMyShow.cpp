#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//User - Website - Shows - movie - location - theater - payment - ticket - seat

enum SeatType{
  PLATINUM,
  GOLD,
  SILVER
}

class Booking{
  public:
    vector<Seats*> bookedSeats;
    //Crud + getters + Setters
}

class City{
  public:
    string name;
    vector<Theater*> theaters;
    City(string name){
      this->name = name;
    }
    
  // Getters and Setters
}

class Seat{
  public:
    SeatType seatType;
    int seatNumber;
    bool booked;
    Seat(SeatType seatType,int seatNumber){
      this->seatType = seatType;
      this->seatNumber = seatNumber;
    }
// Getters and Setters
}

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

class Show{
  public:
    Movie* movie; 
    vector<Seat*> bookedSeats;
    Booking* booking;
    Show(Movie* movie){
      this->movie = movie;
    }
    void bookASeat(Seat* seat){
      
    }
  //getter setter;
}

class Theater{
  public:
    vector<Show*> shows;
    void addShow(Show* show){
      
    }
  //getter setter;
}


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

    void addMovie(Movie* movie){
      allMovies.push_back(movie);
    }
};


class TheaterController{
  public:
    unordered_map<City*,Movie*> cityToTheater;
    vector<Movie*> allTheaters;
  
    void addMovieToCity(Movie* movie,City* city){
      cityToMovies.insert(city,movie);
    }
  
    vector<Movie*> listAllMovesInCity(){
      return allMovies;
    }

    void addMovie(Movie* movie){
      allMovies.push_back(movie);
    }
};


int main(){
  return 0;
}