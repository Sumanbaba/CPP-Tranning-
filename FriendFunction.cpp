#include <iostream>
using namespace std;


class A{
  private :
  int data=100;
  friend void friendOfA(const A& obj);
  friend std::ostream& operator<<(std::ostream& os, const A& operand2);
};

void friendOfA(const A& obj){
    cout<<obj.data;
}
std::ostream& operator<<(std::ostream& os, const A& operand2){
    os<<"A.Data"<<operand2.data<<endl;
    return os;
}
int main(){
		
 A obj;
 friendOfA(obj);
 cout<<obj;
 
	return 0;
}
