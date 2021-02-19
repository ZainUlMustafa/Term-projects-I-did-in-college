#include<iostream>
#include<vector>
using namespace std;

void main(){
	//vector<DataType> nameOfVector
	//myVector.push_back(value) ==> adds in element (also resizes it)
	//myVector.at(index) ==> return element at specified index number
	//myVector.size() ==> returns an unsigned int equat to the number of elements
	//myVector.begin() ==> reads vector from beginning
	//myVector.insert(myVector.begin() + integer, new_value) ==> adds element before specified index
	//myVector.erase(myVector.begin() + integer) ==> removes integer at specified index
	//myVector.clear() ==> removes all element
	//myVector.empty() ==> returns boolean if empty or not

	vector<int> myVector;
	myVector.push_back(3);
	myVector.push_back(5);
	myVector.push_back(7);
	myVector.push_back(9);
	cout<<"Vector: ";

	for(unsigned int i=0; i<myVector.size(); i++){
		cout<< myVector[i]<<" ";
	}

	cout<<"Vector: ";

	myVector.insert(myVector.begin() + 3, 5);

	for(unsigned int i=0; i<myVector.size(); i++){
		cout<< myVector[i]<<" ";
	}

	cout<<"Vector: ";

	myVector.erase(myVector.begin() + 4);

	for(unsigned int i=0; i<myVector.size(); i++){
		cout<< myVector[i]<<" ";
	}

	myVector.clear();

	if(myVector.empty()){
		cout<< "Is empty!";
	}
	else{
		cout<< "full!";
	}

	cout<<endl;

}