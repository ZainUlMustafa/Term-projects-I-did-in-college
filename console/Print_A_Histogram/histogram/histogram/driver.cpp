#include<iostream>
#include<string.h>
#include<fstream>
#include"histogram.h"
using namespace std;


//int main(int argc, char* argv[]){
int main(){
	int count[100] = {'\0'};
	int  alpha[100] = {'\0'};
	char character;
	int counter = 0;
	int j = 0;

	//////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////

	ifstream ENCRYPT("test.txt"); //for normal running
	//ifstream ENCRYPT(argv[1]);		//for CMD running
	while(!ENCRYPT.eof()){
		char word[500];
		ENCRYPT.getline(word, 500);
		for(int i = 0; word[i]; i++){
			
			character = word[i];
			character = tolower(character);
			counter = count[character-97];
			
			if(character == array_of_alpha[character-97]){
				counter++;
				alpha[character-97] = counter;
				count[character-97] = counter;
			}
			j = i;
		}
	}
	
	//////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////

	cout<<"Largest Frequency is: "<<*alpha<<" "<<frequency(alpha)<<endl<<endl;
	
	//////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////

	int temp = frequency(alpha);
	int hi = temp;
	cout<<"\t\t\t\tHISTOGRAM\n\n";
	for(int first_loop = 0; first_loop<hi; first_loop++){
		cout<<"\t";
		for(int sec_loop = 0; sec_loop<27; sec_loop++){
			cout<<"|";
			if(alpha[sec_loop] < temp){
			cout<<" ";
			}
			else if(alpha[sec_loop] >= temp){
				cout<<"*";
			}
		}
		temp = temp - 1;
		cout<<endl;
	}
	cout<<endl<<"\t_____________________________________________________"<<endl;
	cout<<endl<<"\t|a|b|c|d|e|f|g|h|i|j|k|l|m|n|o|p|q|r|s|t|u|v|w|x|y|z| "<<endl<<endl;

	//////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////

	return 0;
}