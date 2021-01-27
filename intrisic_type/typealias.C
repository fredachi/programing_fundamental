#include <iostream>
#include <string>



using namespace std;

// string largestString(string arr[]){

//     int largest = strlen(arr[0]);
//     string largeWord ="";
//     for (int i = 1; i < 10; i++)
//     {
//         if (strlen(arr[i])>largest)
//         {
//             largest = strlen(arr[i]);
//             largeWord = arr[i];
//         }
        
//     }
    
//     return largeWord;

// }
int main(){
    using  newType = string [5];
    newType names;

    cout<<"enter 5 words\n\n";
    for (int i = 0; i < 5; i++)
    {
        cin>>(names[i]);
    }

    int largest = names[0].length();
    int len =5;
    string largeWord;
    for (int i = 1; i < len; i++)
    {
        if (names[i].length()>largest)
        {
            largest = names[i].length();
            largeWord = names[i];
        }
        
    }
    cout<<"largest word is: "<<largeWord<<endl;


}

