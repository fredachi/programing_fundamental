#include <iostream>
#include <cstring>
using namespace std;

int main(){
	cout<<"print enter hyphenated word eg. word-go-okay\n\n";
	char words[200];
	cin.get(words,200);
	char delimeter[]= "-";
	char *word = strtok(words,delimeter);
	while(word){
		cout<<"["<< strlen(word)<<"]"<<word<<endl;
		word = strtok(NULL,delimeter);
	}

	return 0;

}

// char* ptr =

// v = "hello'\0'world"

// char* w = strtok(v,d)



// char * strtok(char *source, char delim){ 
//         int i = 0;
//         while( source[i] != delim && source[i] != '\0' ) i++;
//         ptr = &source[i+1];
//         source[i] = '\0';
//         return source;

// }
