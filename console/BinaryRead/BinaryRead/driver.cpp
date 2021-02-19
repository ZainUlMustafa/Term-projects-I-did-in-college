#include<iostream>
#include<fstream>
using namespace std;

void main(){
	char filename[20];
	//cout<<"Your file name: ";
	//cin>>filename;

	ifstream file("new.txt");
	
	while(!file.eof()){
		char temp[40];
		file.getline(temp, 40);
		cout<<temp<<"\n";
	}

}
