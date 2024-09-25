// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class TPMS{
    
};
class VeriCoreEngine{
    public:
    ~VeriCoreEngine(){
       cout<<"Engine Deleted"<<endl; 
    }
};
class TataCar{
    VeriCoreEngine* engineObj;
    TPMS* tpmsObj;
    public:
    TataCar(){
        engineObj=new VeriCoreEngine();
    
    }
    //Dependency Injection using Method (Method Injection)
    void setTPMS(TPMS* tpmsAddress){
        this->tpmsObj=tpmsAddress;
    }
    ~TataCar(){
       cout<<"TataCar Deleted"<<endl; 
       delete engineObj;
    }
};

int main() {
    // Write C++ code here
    TataCar hexa;
    TPMS bosch_tmps;
    hexa.setTPMS(&bosch_tmps);
    return 0;
}
