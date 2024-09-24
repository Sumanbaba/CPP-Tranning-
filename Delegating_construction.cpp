// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;
class BankCustomer{
    private:
        string name;
        string adharNumber;
        string panNumber;
        string emailId;
        string phoneNumber;
    
    public:
    BankCustomer() {
        name="";
        adharNumber="";
        panNumber="";
        emailId="";
        phoneNumber="";
    }
    //Compile Time Polymorphism , constructor Overloading
    BankCustomer(string nameArg,string adharNumberArg,string panNumberArg):BankCustomer(){
        this->name=nameArg;
        this->adharNumber=adharNumberArg;
        this->panNumber=panNumberArg;
   
        
    }
       BankCustomer(string nameArg,string adharNumberArg,string panNumberArg,string emailArg,string phoneArg): BankCustomer(nameArg,adharNumberArg,panNumberArg){
        
        this->emailId=emailArg;
        this->phoneNumber=phoneArg;
        
    }
 
    
    void printCustomerInfo(){
        cout << "Name: " << name << endl;
        cout << "Adhar Number: " << adharNumber << endl;
        cout << "PAN Number: " << panNumber << endl;
        cout << "Email ID: " << emailId << endl;
        cout << "Phone Number: " << phoneNumber << endl;
    }
    
};
void CustomerInfo()
{
    std::cout << "CustomerInfo" <<endl;
    
    //int a= 400;
     BankCustomer customer1("ABCD", "1234", "5678");
    cout << "Customer 1 Info:" << endl;
    customer1.printCustomerInfo();
    cout << endl;

    // Using constructor with name, adharNumber, panNumber, email, and phone
    BankCustomer customer2("EFGH", "9876", "6543", "abcd@eg.com", "1234567890");
    cout << "Customer 2 Info:" << endl;
    customer2.printCustomerInfo();

}
int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";
    CustomerInfo();
    return 0;
}