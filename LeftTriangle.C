/***********************************************************
	C PROGRAM TO PRINT LEFT SIDE TRIANGLE
	SAMPLE INPUT:  4
	      OUTPUT:  *
		       * *
		       * * *
		       * * * *
	AUTHOR: DHEVENDHIRAN M
	DATE: 08.01.2018
************************************************************/
#include<stdio.h>
#include<conio.h>
void getInput(int *n);
void printLeftTriangle(int n);
int main(){
	int n;
	getInput(&n);
	printLeftTriangle(n);
	getch();
	return 0;
}
void getInput(int *n){
	printf("\nEnter the number of rows:");
	scanf("%d",n);
}
void printLeftTriangle(int n){
	int i,j,k;
	for(i=0;i<n;i++){
		for(k=0;k<i+1;k++)
			printf("* ");
		printf("\n");
	}
}