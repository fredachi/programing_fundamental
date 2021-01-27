#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    cout<<"enter line of words\n";
    string words;
    getline(cin,words);
    //cin>>words;
    //cout<<words;
    const char * cstr = words.c_str();
    int length = strlen(cstr);
    for (int i = 0; i < length; i++)
    {
        cout<<cstr[i];
    }
    return 0;
}