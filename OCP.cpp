// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Vehicle{
    protected:
    Vehicle(){}
};
class Car:public Vehicle{
    public: void start(){
        cout<<"Car Push Button Start"<<endl;
    }
     void drive(){
        cout<<"FWD Drive"<<endl;
    }
    void stop(){
        cout<<"Stop"<<endl;
    }
};
class Truck:public Vehicle{
    public: void start(){
        cout<<"Key Start"<<endl;
    }
    void drive(){
        cout<<"RWD Drive"<<endl;
    }
    void stop(){
        cout<<"Stop"<<endl;
    }
};
class Bus:public Vehicle{
    public: void start(){
        cout<<"Key  Start"<<endl;
    }
    void drive(){
        cout<<"RWD Drive"<<endl;
    }
    void stop(){
        cout<<"Stop"<<endl;
    }
};

class VehicleDrivingSimulator{
  public :
  void startSimulation(Vehicle* vehicleAddress){
      vehicleAddress->start();
      vehicleAddress->drive();
      vehicleAddres->halt();
  }
 
 };

int main(){
Car carObj;
Truck truckObj;
Bus busObj;
VehicleDrivingSimulator simulator;

simulator.startSimulation(&carObj); // "Car Push Button Start,FWD Drive , Stopped
simulator.startSimulation(&truckObj)// "Key Start,RWD Drive , Stopped;
simulator.startSimulation(&busObj);// "Key Start,RWD Drive , Stopped;

}
