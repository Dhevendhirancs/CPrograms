/************************************************************
	C PROGRAM TO PRINT REVERSE LEFT TRIANGLE
	SAMPLE INPUT: 4
	      OUTPUT: * * * *
		      * * *
		      * *
		      *
	      AUTHOR: DHEVENDHIRAN M
	      DATE: 08.01.2018
*************************************************************/
#include<stdio.h>
#include<conio.h>
void getInput(int *n);
void printLeftReverseTriangle(int n);
int main(){
	int n;
	clrscr();
	getInput(&n);
	printLeftReverseTriangle(n);
	getch();
	return 0;
}
void getInput(int *n){
	printf("\nEnter the number of rows:");
	scanf("%d",n);
}
void printLeftReverseTriangle(int n){
	int i,j,k;
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++)
			printf("* ");
		printf("\n");
	}
}

