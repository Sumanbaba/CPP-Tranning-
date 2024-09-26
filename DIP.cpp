// Online C++ compiler to run C++ program online
#include <iostream>
//interface -> Abstarction
using namespace std;
class ISpeedSensor{
    public:
    virtual int getSpeed()=0;
};
class ABSECU{
    private:
    ISpeedSensor* speedSensor;
    public :
    ABSECU(ISpeedSensor* speedSensorArg):speedSensor{speedSensorArg} {}
    void monitor(){
        int currentSpeed=speedSensor->getSpeed();
    }
};
class APECActiveABSSpeedSensor:public ISpeedSensor{
    public:
       int getCurrentSpeed(){ return 0;}
       int getSpeed(){
           cout<<"Using APECActiveABSSpeedSensor"<<endl;
           return this->getCurrentSpeed();
       }
};
class WalterActiveABSSpeedSensor:public ISpeedSensor{
    public:
    int getSpeed(){ 
        cout<<"Using WalterActiveABSSpeedSensor"<<endl;
        return 0;}
};

int main() {
    // Write C++ code here
    APECActiveABSSpeedSensor apecSensor;
    ABSECU ecu1{&apecSensor};
    ecu1.monitor();
    WalterActiveABSSpeedSensor walterSensor;
    ABSECU ecu2{&walterSensor};
    ecu2.monitor();
    
    
    
    std::cout << "Try programiz.pro";
        
    return 0;
}
