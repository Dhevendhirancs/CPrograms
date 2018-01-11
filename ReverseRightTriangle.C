/************************************************************
	C PROGRAM TO PRINT REVERSE RIGHT SIDE TRIANGLE
	SAMPLE INPUT: 4
	      OUTPUT: * * * *
			* * *
			  * *
			    *
	      AUTHOR: DHEVENDHIRAN M
	      DATE: 08.01.2018
**************************************************************/
#include<stdio.h>
#include<conio.h>
void printReverseRightTriangle(int n);
void getInput(int *n);
int main(){
	int n;
	clrscr();
	getInput(&n);
	printReverseRightTriangle(n);
	getch();
	return 0;
}
void getInput(int *n){
	printf("\nEnter the number of rows:");
	scanf("%d",n);
}
void printReverseRightTriangle(int n){
	int i,j,k;
	for(i=0;i<n;i++){
		for(j=0;j<i;j++)
			printf("  ");
		for(k=0;k<n-i;k++)
			printf("* ");
		printf("\n");
	}
}