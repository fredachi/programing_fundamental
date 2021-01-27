#include <iostream>

using namespace std;

int main(){
    cout<<"please enter two numbers\n\n";
    int firstNumber,secondNumber;
    cin>>firstNumber>>secondNumber;
    cout<<"please enter an operator eg. +,*,/,%\n\n";
    char inputOPerator;
    cin>>inputOPerator;
    
    switch(inputOPerator){
    case '*':
        cout<<"multiplying"<<firstNumber<<"and"<<secondNumber<<"="<<firstNumber<< inputOPerator<< secondNumber;
        break;
    case '+':
        cout<<"adding"<<firstNumber<<"and"<<secondNumber<<"="<<firstNumber+secondNumber;
        break;
     case '-':
        cout<<"subtracting"<<firstNumber<<"and"<<secondNumber<<"="<<firstNumber<< inputOPerator<< secondNumber;
        break;
    default:
        cout<<"enter a valid operator";
    }
}