#include <iostream>
using namespace std;
int main(){

	enum {RED,YELLOW,AMBER=YELLOW,GREEN };
	cout<<"value of RED is: "<<RED<<endl;
	cout<<"value of YELLOW is: "<<YELLOW<<endl;
	cout<<"value of AMBER is: "<<AMBER<<endl;
	cout<<"value of GREEN is: "<<GREEN<<endl;
}
