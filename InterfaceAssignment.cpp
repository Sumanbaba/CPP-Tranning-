class Printer{

    public:
     void print(string path){
        cout<<"Printing ....."<<path;
    }
};

class Scanner{

    public:
     void scan(string path){
        cout<<"Scanning ....."<<path;
    }
};

public class PrintScanner {

};
public  class TaskManager{
    public:
     static void execuctePrintTask(IPrinter *printer,string documentPath){
        printer->print(documentPath);
    }
     static void execucteScanTask(IScanner *scanner,string documentPath){
            scanner->scan(documentPath);
    }
};


    int main(){
        Printer printerObj;
        Scanner scannerObj;
        PrintScanner printScannerObj;

        TaskManager::execuctePrintTask(&printerObj,"Test.doc");
        TaskManager::execucteScanTask(&scannerObj,"MyImage.png");
        TaskManager::execuctePrintTask(&printScannerObj,"NewDoc.doc");
        TaskManager::execucteScanTask(&printScannerObj,"YourImage.png");
    }
