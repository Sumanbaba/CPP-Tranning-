// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;


void foo(string input){
    input="hi";
    cout<<"foo "<<input<<endl;
}

void foo_ptr(string* input){
    *input="hiPtr";
    cout<<"foo* "<<*input<<endl;
}
void foo_ref(string& input){
    input="hiRef";
    cout<<"foo&"<<input<<endl;
}
int main() {
    // Write C++ code here
    string data="hello";
    foo(data);
    cout<<data<<endl;
    foo_ptr(&data);
    cout<<data<<endl;
    foo_ref(data);
    cout<<data<<endl;
    
    return 0;
}
