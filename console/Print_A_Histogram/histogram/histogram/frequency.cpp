#include<iostream>
//#include"histogram.h"
using namespace std;


int frequency(int* alpha){
	int temp = 0;
	for(int i=0;i<100;i++)
    {
        if(alpha[i]>temp)
        temp=alpha[i];
    }
	return temp;
}