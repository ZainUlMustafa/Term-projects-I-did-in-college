#ifndef __PALIN_H__
#define __PALIN_H__

#include<iostream>
using namespace std;

class Palindrome{
public:
	void palindrome(int num){ //Overload Constructor - declares and calls function
		setNum(num);
		checkit(NUM, num);
	}
	void setNum(int num){ //set input number to private member variable 'NUM'
		NUM = num;
	}
	void checkit(int NUM, int num){ //check if palindrome
		int arrayNUM[5];
		int mod = 10;
		int divider = 1;
		for(int i=0; i<5; i++){
			NUM = NUM % mod;
			NUM = NUM / divider;
			arrayNUM[i] = NUM;
			mod = mod * 10;
			divider = divider * 10;
			NUM = num;
		}
		display(arrayNUM);
	}
	void display(int * arrayNUM){ //Displays if Palindrome or not
		if ((arrayNUM[0]==arrayNUM[4]) && (arrayNUM[1]==arrayNUM[3])){
			cout<<"It's Palin!"<<endl;
		}
		else{
			cout<<"Not Palin!"<<endl;
		}
	}
private:
	int NUM;
};

#endif