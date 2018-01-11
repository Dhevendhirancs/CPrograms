#include<stdio.h>
#include<conio.h>
void getInput(int *n);
void printReverseTriangle(int n);
int main(){
	int n;
	getInput(&n);
	printReverseTriangle(n);
	getch();
	return 0;
}
void getInput(int *n){
	printf("\nEnter the number of rows:");
	scanf("%d",n);
}
void printReverseTriangle(int n){
	int i,j,k;
	for(i=0;i<n;i++){
		for(j=0;j<i;j++)
			printf(" ");
		for(k=0;k<n-i;k++)
			printf("* ");
		printf("\n");
	}
}
