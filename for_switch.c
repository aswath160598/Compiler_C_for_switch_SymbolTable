#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,j;

	int k=9;
	for (i=0; i != 12; i++)
	{
		j = 32*12;
		switch(j){
		case 1:k=k+3;
		       break;
		case 2:k=k+1; 
		       break;
		default:j=0;
				
		}
	}
}
