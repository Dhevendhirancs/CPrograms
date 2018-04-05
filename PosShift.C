/*
	Shift array elements based on pos
	Input: 	Array Size: 5
		Array: 1 2 3 4 5
		POS: 2
	Output: 3 4 5 0 0
	*/
#include<stdio.h>
#include<conio.h>
int getInput(int*,int[],int*);
int leftShift(int,int[],int);
int printOutput(int,int[]);
int main(){
	int n,a[30],pos;
	clrscr();
	getInput(&n,a,&pos);
	leftShift(n,a,pos);
	printOutput(n,a);
	getch();
	return 0;
}
int getInput(int *n,int a[],int *pos){
	int i;
	printf("\nEnter Array Size:");
	scanf("%d",n);
	printf("\nEnter Array:");
	for(i=0;i<*n;i++)
		scanf("%d",&a[i]);
	printf("\nEnter POS:");
	scanf("%d",pos);
	return 0;
}
int leftShift(int n,int a[],int pos){
	int i,j;
	for(i=0;i<pos;i++){
		for(j=0;j<n-i-1;j++){
			a[j]=a[j+1];
		}
		a[j]=0;
	}
	return 0;
}
printOutput(int n,int a[]){
	int i;
	printf("\nOutput:");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}


