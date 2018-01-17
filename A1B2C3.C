/**************************************************
	C PROGRAM TO EXPAND STRING
	SAMPLE INPUT: A1B2C3
	      OUTPUT: ABBCCC

	      AUTHOR: DHEVENDHIRAN M
	      DATE: 18.01.2018
***************************************************/
#include<stdio.h>
#include<conio.h>
#include<string.h>
char exp[30],ans[30],i=0,j=0,k=0,len=0,temp;
void getInput();
void getExpand();
void printOutput();
void main(){
	clrscr();
	getInput();
	getExpand();
	printOutput();
	getch();
}
void getInput(){
	printf("\nEnter the expression:");
	gets(exp);
}
void getExpand(){
	len=strlen(exp);
	while(i<len){
		temp=exp[i+1]-48;
		while(j<temp){
			ans[k]=exp[i];
			k++;
			j++;
		}
		j=0;
		i+=2;
	}
	ans[k]='\0';
}
void printOutput(){
	puts(ans);
}