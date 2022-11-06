#include <iostream>
#include <bits/stdc++.h>

using namespace std;

enum VehicleType{
CarType,
BikeType
};

class Vehicle{
  public:
  virtual void create() = 0;
};

class Bike:public Vehicle{
  public:
  void create(){
    cout<<"Bike is created";
  }
};

class Car:public Vehicle{
  public:
  void create(){
    cout<<"Car is created";
  }
};

class VehicleFactory{
  public:
  VehicleType* vehicleType;
  Vehicle* vehicle;

  void createVehicle(VehicleType* vt){
    vehicleType = vt;
    if(*vehicleType == CarType){
      vehicle = new Car();
    }else if(*vehicleType == BikeType){
      vehicle = new Bike();
    }
    vehicle->create();
  }

  Vehicle* showVehicle(){
    return vehicle;
  }

};




int main() {
  VehicleFactory* vehicleFactory;
  VehicleType vehicleType = CarType;
  vehicleFactory->createVehicle(&vehicleType);
  vehicleFactory->showVehicle();
  return 0;
}