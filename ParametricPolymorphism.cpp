// Online C++ compiler to run C++ program online
#include <iostream>

template<typename OperandType>
OperandType add(OperandType operand1, OperandType operand2){
    OperandType result= operand1+operand2;
    return result;
}
int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro\n";
    
    int result = add<int>(10,2);
    std::cout<<result<<std::endl;
    
    float fresult = add<float>(10.3f,40.0f);
    std::cout<<fresult<<std::endl;
    return 0;
}
