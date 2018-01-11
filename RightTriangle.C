/*************************************************************
	C PROGRAM TO PRINT RIGHT SIDE TRIANGLE
	SAMPLE INPUT: 4
	      OUTPUT:      *
			 * *
		       * * *
		     * * * *
	      AUTHOR: DHEVENDHIRAN M
	      DATE: 08.01.2018
**************************************************************/
#include<stdio.h>
#include<conio.h>
void printRightTriangle(int n);
void getInput(int *n);
int main(){
	int n;
	getInput(&n);
	printRightTriangle(n);
	getch();
	return 0;
}
void getInput(int *n){
	printf("\nEnter the number of rows:");
	scanf("%d",n);
}
void printRightTriangle(int n){
	int i,j,k;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++)
			printf("  ");
		for(k=0;k<i+1;k++)
			printf("* ");
		printf("\n");
	}
}
