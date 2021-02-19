#include<iostream>
using namespace std;

void main(){
	int a = 2;
	int b = 3;
	int res = 0;

	//AND --> &
	//OR ---> |    ////BINARY OPERATORS
	//XOR ---> ^

	//NOT ---> ~  ////UNARY OPERATOR

	//0000 0010
	//0000 0011
	//0000 0001

	res = ~a^~b;
	cout<<res;
}