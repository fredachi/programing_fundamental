#include <iostream>
using namespace std;

int factorial(int number){
    if (number==0) return 1;
    return number*factorial(number-1);
    
    
}
int main(){
    cout<<"enter a number\n";
    int num;
    cin>>num;
    cout<<"the factorial of "<<num<<"is:"<<factorial(num);
    return 0;
}