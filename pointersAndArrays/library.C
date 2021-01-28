#include <iostream>
#include <cstring>
#include <string>
using namespace std;

// int myStrcmp(const char *lhs, const char *rhs){
//     int i =0;
//     while (i++, lhs[i]==rhs[i] && lhs[i] && rhs[i]);
//         return lhs[i]-rhs[i];
        
    
    
// }

// const char myStrlen(const char* firstChar){

//     //const char* lastChar = firstChar;
//     int value=0;
//     while(*firstChar++ !='\0'){
//         value +=1;
//     }
//     //while (*lastChar++ != 0);
//     return value;  
// }

char *mystrcat(char *dest, char *src){
    char *copyDest = dest;
    while(*dest)
        dest++;
    while(*dest++ = *src++);
    return copyDest;
}

// char *mystrcpy( char *dest, const char *src){
//     char *copyDest = dest;
//    //copy elements in src into dest and return when src is empty
//    while(*copyDest++ == *src++);//fails if length of dest is smaller than src
//    return dest;
// }
char *mystrcpy(char *copy, const char *src){
    int i, len = strlen(src);
    for (i = 0; i < len; i++)
    {
        copy[i] = src[i];
    }
    copy[i]='\0';
    return copy;
    
}

int main(){

//cout<<" enter two words\n";
char firstWord[10];
char secondWord[]{"mehs"};
//cin>>firstWord;

//cout<<myStrcmp(firstWord.c_str(),secondWord.c_str());
cout<<mystrcpy(firstWord,secondWord);

}