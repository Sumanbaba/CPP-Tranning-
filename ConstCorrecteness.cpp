#include <iostream>
using namespace std;
class Date{
	private:
		int day,month,year;
	public:

int* p;
p=&data;
*p=100;
p=&y;

const int *q;
q=&data;
*q=100;// error
q=&y;
*q=200;// error

const int const *r;
r=&data;// error
*r=100;// error
r=&y;// error
*r=200;// error

int const *s;
s=&data;// error
*s=100;// error
s=&y;// error
*s=200;// error
