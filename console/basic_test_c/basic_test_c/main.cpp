#include<stdio.h>
#include <string.h>

int main(){
	char strA[] = "red brown fox jumped over";

	for(int i = 0; i<strlen(strA); i++){
		if (strA[i] == 'a' || strA[i] == 'e' || strA[i] == 'i' || strA[i] == 'o' || strA[i] == 'u'){
			strA[i] = '.';
		}
	}

	for(int i = 0; i<strlen(strA); i++){
		printf("%c", strA[i]);
	}
}