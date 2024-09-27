// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <exception>

using namespace std;
// Custom terminate handler function
void myTerminateHandler() {
    std::cout << "Unhandled exception occurred. Terminating program." << std::endl;
 
}
int divOperation(int n, int d) {
    try {
        if (d == 0) {
            // std::exception information("denominator cannot be Zero");
            std::string information = "Attempted To Diveide By Zero Exception";
            // throw information;
        }
        int result = 0;
        return result = n / d;
    }
    catch(const std::runtime_error ref_information) {
        cout << ref_information.what() << endl;
        throw ref_information;
    }
    catch (...) {
        cout << "Exception in Div" << endl;
    }
    
}
void test() {
  
    try {
        cout << divOperation(10, 2) << endl;

        cout << divOperation(10, 0) << endl;
        cout << divOperation(10, 2) << endl;
    }
    catch (const std::exception ref_information) {
        cout << ref_information.what() << endl;
    }
    catch (...) {
        cout << "Exception in Div" << endl;
    }
        cout << "End OF Test" << endl;

}
int main() {
    std::set_terminate(myTerminateHandler);
    try {
        test();
    }
    catch(const std::string& ex)
    {
        cout << "Main Exception Handling " << ex << endl;
    }

    return 0;
}
