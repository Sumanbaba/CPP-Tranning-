#include <string>
#include <vector>
#include <utility>
using namespace std;

//Implement Dictionary

int main(){
    Dictionary<string,string> mapObj;
    mapObj.add("blr","Bangaluru");
    mapObj.add("chn","Chennai");
    mapObj.add("hyd","Hyderabad");
    std::cout<<mapObj.getValue("blr")<<std:endl;
    std::cout<<mapObj; 
/*
Expected Output
blr => Bangaluru
chn => Chennai
hyd => Hyderabad
*/
    

}
