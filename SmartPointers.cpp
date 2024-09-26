// Online C++ compiler to run C++ program online
#include <iostream>
#include <memory>
using namespace std;

class A{
    public:
    A(){
        cout<<"A Constructed"<<endl;
    }
    ~A(){
        cout<<"A Destructed"<<endl;
    }
    void test(){
        cout<<"Test Method Invoked"<<endl;
    }
};

class B{
    public:
    B(){
        cout<<"B Constructed"<<endl;
    }
    ~B(){
        cout<<"B Destructed"<<endl;
    }
    void test(){
        cout<<"Test Method Invoked"<<endl;
    }
};

template<typename Target>
class SmartPointer{
  private:
  Target* rawPointer;
  public:
  SmartPointer(Target *ptr): rawPointer{ptr}{}
  ~SmartPointer(){
      delete rawPointer;
  }
  Target* operator->(){
      return rawPointer;
  }
};

void allocate(){
  // SmartPointer<B> smart_ptr{ new B()};
   //smart_ptr->test();
   unique_ptr<B> smart_ptr{new B()};
   smart_ptr->test();
   
   
   
}
int main() {
    for(int i=0;i<100;i++){
        allocate();
    }

    return 0;
}
