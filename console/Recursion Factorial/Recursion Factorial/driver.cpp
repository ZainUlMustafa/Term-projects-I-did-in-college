#include<iostream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int factorial( int number);
void main(){
	int number = 0;
	cout<<"Number: ";
	cin>>number;

	cout<<"factorial is: "<<factorial(number)<<endl;
}
int factorial( int number){
	if(number<=1){
		return 1;
	}
	return number*(factorial(number-1));
}