#include<iostream>
#include<vector>
using namespace std;

void fill(vector<int>&);
void printVector(const vector<int>&);
void sum(vector<int>&);

void main(){

	vector<int> myVector;
	fill(myVector);
	printVector(myVector);

	for (auto rit = myVector.crbegin(); rit != myVector.crend(); ++rit)
    cout <<" "<< *rit;

	//printVector(myVector);
	sum(myVector);
	cout<<endl;
}

//                                      __            __
////////////////////////////////////// |__ |  | |\ | |   ///////////////////////////////////////
////////////////////////////////////// |   |__| | \| |__ ///////////////////////////////////////
																							  //

void fill(vector<int>&fillVector){
	int input;
	cin>>input;
	while(input!=100){
		fillVector.push_back(input);
		cin>>input;
	}
	cout<<endl;
}

void printVector(const vector<int>&PrintingVector){

	for(unsigned int i=0; i<PrintingVector.size(); i++){
		cout<<"Vector element "<<i+1<<": "<<PrintingVector[i]<<endl;
	}
	cout<<endl;
}

void sum(vector<int>&sumVector){
	int sum = 0;
	while(!sumVector.empty()){
		sum+=sumVector.back();
		sumVector.pop_back();
		
	}
	cout<<"Sum is: "<<sum<<endl;
}