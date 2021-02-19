#include<iostream>
#include<conio.h>
#include<string.h>
#include"files.h"
using namespace std;

void main(){
	
	char name_str[60];
	char date_str[60];
	char file_name[100];
	char file_name_doc[100] = {'.','d','o','c'};
	char file_name_txt[100] = {'.','t','x','t'};

	cout<<"Name want to change: ";
	cin.getline(name_str, 60);

	cout<<"Date want to change: ";
	cin.getline(date_str, 60);


	cout<<"Press '1' to change file data logs or '0' to exit:: ";
	int check;
	while((check = getch()-48) == 1){
		cout<<"\nFile name: ";
		cin.getline(file_name, 100);

		cout<<"File Extension? \n1).doc\n2).txt";
		if (getch()-48 == 1){
			strcat(file_name, file_name_doc);
			data_change(name_str, file_name, date_str);
		}
		else if (getch()-48 == 2){
			strcat(file_name, file_name_txt);
			data_change(name_str, file_name, date_str);
		}
		system("cls");
		cout<<"Press '1' to change file data logs or '0' to exit:: ";
	}
}