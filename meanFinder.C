#include <iostream>
#include <bits/stdc++.h>
using namespace std;
float getMeanValue(float numbers[5]){
	float lengthOfArray = sizeof(numbers)/sizeof(numbers[0]);

	float sumOfNumbers;
	for(int i=0;i<lengthOfArray; i++){
		sumOfNumbers +=numbers[i];

		
	}
	return sumOfNumbers;
}
float getMedianValue(float numbers[5]){
	const int DIVIDER =2;
	int lengthOfArray =(int)sizeof(numbers)/(int)sizeof(numbers[0]);
	 sort(numbers,numbers+lengthOfArray);
	if(lengthOfArray % DIVIDER !=0){ 
		return numbers[lengthOfArray/DIVIDER];
	}else{
	return (numbers[(lengthOfArray-1)/DIVIDER]+numbers[lengthOfArray/DIVIDER])/DIVIDER;
	}
	
}

int main(){
	
	float numbers [5];
	cout<<"please enter five numbers\n\n";
	float lengthOfArray = sizeof(numbers)/sizeof(numbers[0]);

	for(int i=1; i<=lengthOfArray; i++){
		cout<<"number "<< i<<": ";
		cin>>numbers[i];
	}

	cout<<"mean value: "<< getMeanValue(numbers)<< endl;
	//cout<<"mode value: "<< getModeValue(numbers)<< endl;
	cout<<"Median value: "<< getMedianValue(numbers)<<endl;
}
