#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<fstream>
#include"files.h"
using namespace std;

void data_change(char* name_str, char* file_name, char* date_str){

	ofstream fileCHANGE1(file_name, ios::in);
	fileCHANGE1<<"\t\t\t\n\t\t\t\t\n";
	fileCHANGE1.close();


	ofstream fileCHANGE(file_name, ios::in);
	fileCHANGE<<"Name:: "<<name_str<<endl<<"Date:: "<<date_str<<endl<<endl;
	fileCHANGE.close();
}