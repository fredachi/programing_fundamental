#include <iostream>
using namespace std;


int main(){
	int number;
	int *numberPointer = &number;
	int &numberReference = number;
	const int number1 = 8;

	number = 5;
	++numberReference;
	++(*numberPointer);
	cout<<"value of integer is: "<<number;
	
}
