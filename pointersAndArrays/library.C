#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int myStrcmp(const char *lhs, const char *rhs){
    int i =0;
    while (i++, lhs[i]==rhs[i] && lhs[i] && rhs[i]);
        return lhs[i]-rhs[i];
        
    
    
}

const char myStrlen(const char* firstChar){

    //const char* lastChar = firstChar;
    int value=0;
    while(firstChar++ !=0){
        value +=1;
    }
    //while (*lastChar++ != 0);
    return value;  
}

int main(){

//cout<<" enter two words\n";
const char firstWord[] = "you";
//cin>>firstWord;

//cout<<myStrcmp(firstWord.c_str(),secondWord.c_str());
cout<<myStrlen(firstWord);

}