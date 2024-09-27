// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

// Interface for Printer
class IPrinter {
public:
    virtual void print(string path) = 0; // Pure virtual function
};

// Interface for Scanner
class IScanner {
public:
    virtual void scan(string path) = 0; // Pure virtual function
};

class Printer : public IPrinter {

public:
    void print(string path) override {
        cout<<"Printing ....."<<path<<endl;
    }
};

class Scanner :public IScanner{

public:
    void scan(string path)override{
        cout<<"Scanning ....."<<path<<endl;
    }
};
// Deligation calls to Print and Scanner
// Printscanner is is implementing 2 interfaces 
class PrintScanner: public Printer, public Scanner {

};

// Dependency Inverstion  interface 
class TaskManager{
    public:
     static void executePrintTaskPrintTask(IPrinter *printer,string documentPath){
        printer->print(documentPath);
    }
     static void executePrintTaskScanTask(IScanner *scanner,string documentPath){
            scanner->scan(documentPath);
    }

};


    int main(){
        Printer printerObj;
        Scanner scannerObj;
        PrintScanner printScannerObj;

        TaskManager::executePrintTaskPrintTask(&printerObj,"Test.doc");
        TaskManager::executePrintTaskScanTask(&scannerObj,"MyImage.png");
        TaskManager::executePrintTaskPrintTask(&printScannerObj,"NewDoc.doc");
        TaskManager::executePrintTaskScanTask(&printScannerObj,"YourImage.png");
        
    }
