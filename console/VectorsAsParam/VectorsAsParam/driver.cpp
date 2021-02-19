#include<iostream>
#include<vector>
using namespace std;

void fillVector(vector<int>&);
//passing an array does not require to pass reference, in vectors we have to
//vectors are larger in memory

void printVector(const vector<int>&);
void printReverse(const vector<int>&);
void printEven(const vector<int>&);
void replace(vector<int>&);

void main(){
	
	vector<int> myVector;
	fillVector(myVector);
	printVector(myVector);
	printReverse(myVector);
	printEven(myVector);
	replace(myVector);
	printVector(myVector);
}

void fillVector(vector<int>& myNewVector){

	cout<<"Type in a list of numbers (-1 to stop)";
	int input;
	cin>>input;

	while(input!= -1){
		myNewVector.push_back(input);
		cin>>input;
	}
	cout<<endl;
}

void printVector(const vector<int>& myNewVector){

	for(unsigned i=0; i<myNewVector.size(); i++){
		cout<<myNewVector[i]<<" ";
	}
	cout<<endl;
}

void printReverse(const vector<int>& myNewVector){

	cout<<"Reverse: ";

	for(unsigned i=myNewVector.size(); i>0; i--){
		cout<< myNewVector[i-1] <<" ";

	}
	cout<<endl;
}

void printEven(const vector<int>&myNewVector){
	cout<<"Even: ";

	for(unsigned i=0; i<myNewVector.size(); i++){
		if(myNewVector[i]%2){
			cout<<"";
		}
		else{
			cout<<myNewVector[i]<<" ";
		}

	}
	cout<<endl;
}

void replace(vector<int>&myNewVector){

	int old, replace;
	cout<<"Which int to replace: ";
	cin>>old;
	cout<<"Type in new int: ";
	cin>>replace;

	for(unsigned i=0; i<myNewVector.size(); i++){
		if(myNewVector[i]==old){
			myNewVector[i]=replace;
		}

	}
	cout<<endl;
}