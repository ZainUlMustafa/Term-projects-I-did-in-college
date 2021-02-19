#include<iostream>
using namespace std;

int main(){
	// YOUR CODE WILL GO
	

	double num1, num2, res;
	char op;

	cin>> num1;
	cin>>num2;
	cin>>op;

	if ( op == 43){
		res = num1 + num2;
	}
	else if( op == 45){
		res = num1 - num2;
	}

	cout<<res;

	return 0;
}