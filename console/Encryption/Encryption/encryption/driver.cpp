#include<iostream>
#include<fstream>
#include<conio.h>
#include<cstdio>
#include<string.h>
#include"initialize.h"
using namespace std;

main(){
	cout<<"Enter a NUMERIC DIGIT pin: ";

	
	char GetCharNoEcho;
	while((GetCharNoEcho = getch())!='\r'){
		system("cls");
		if(GetCharNoEcho == '\b'){
			cout<<"\b";
			cout<<" ";
			str_star[temp] = 0;
			str[temp] = 0;	
			cout<<"\b";
			temp--;
			
		}
		else{
			str_star[temp];
			str_star[temp] = star;
			str[temp] = GetCharNoEcho;
			temp++;
		}
	
///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////
		str[temp] = 0;
		str_star[temp] = 0;
	

		cout<<"Enter a digit pin: "<<str_star;
	}
	checker(str);
}

void checker(char*str){
	for(int check=0; str[check]; check++){
		if(str[check]>='0' && str[check]<='9'){
			numeric_con++;
		}
		else{
			numeric_con = 0;
		}
	}

///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////

	if(numeric_con==strlen(str)){
		char file_name[50];

		cout<<endl<<"What's your file name? ";
		cin.getline(file_name,50);

		ifstream ENCRYPT(file_name);
		ofstream TEMP_ENCRYPT("data_files.ZAIN.txt");
		ifstream TEMP_ENCRYPTED("data_files.ZAIN.txt");
		ofstream ENCRYPTED(file_name, ios::in);
		
		
		int j = 0;
		while(!ENCRYPT.eof()){
			int i = 0;
			char material[50];
			ENCRYPT.getline(material, 50);
			while(material[i]){
				material[i] = material[i]^str[j];
				i++;
				if(str[j]=='\0'){
					j = 0;
				}
				j++;
			}
			TEMP_ENCRYPT<<material<<endl;
		}

///////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////

		
		while(!TEMP_ENCRYPTED.eof()){
			char mat[50];
			TEMP_ENCRYPTED.getline(mat, 50);
			ENCRYPTED<<mat<<endl;
		}
		TEMP_ENCRYPT.close();
		TEMP_ENCRYPTED.close();
		remove("data_files.ZAIN.txt");
	}
	else{
		cout<<endl<<"Pass is not NUMERIC!\a"<<endl;
	}
}
