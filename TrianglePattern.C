/************************************************************
	C PROGRAM TO PRINT TRIANGLE PATTERN
	SAMPLE INPUT: 5
	      OUTPUT:      *
			  * *
			 * * *
			* * * *
		       * * * * *
	AUTHOR: DHEVENDHIRAN M
	DATE: 08.01.2018
*************************************************************/
#include<stdio.h>
#include<conio.h>
void printTriangle(int n);
void getInput(int *n);
int main(){
	int i,j,n,k;
	clrscr();
	getInput(&n);
	printTriangle(n);
	getch();
	return 0;
}
void getInput(int *n){
	printf("\nEnter the number of rows in the triangle:");
	scanf("%d",n);
}
void printTriangle(int n){
	int i,j,k;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++)
			printf(" ");
		for(k=0;k<i;k++)
			printf("* ");
		printf("\n");
	}
}