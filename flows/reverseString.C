#include <iostream>
#include <string>
using namespace std;

void reverseString(string word){
    for ( int i = word.length()-1; i>=0; i--)
    {
        cout<<word[i];
    }
    
}
int main(){
    cout<<"enter words\n\n";
        string words;
        cin.get(words);

        cout<<"reversed string is: ";
        reverseString(words);
    // char word[10];
    // int length =10;
    // cin.get(word,length);
    
    // for (int i = length-1; i>=0; i--)
    // {
    //     cout<<word[i];
    // }
    
    return 0;
}