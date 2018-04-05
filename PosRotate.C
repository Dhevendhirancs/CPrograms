/*
	To do rotation based on POS
	Input: 	Array Size: 5
		Array: 1 2 3 4 5
		POS:2
	Output: 3 4 5 1 2
	*/
#include<stdio.h>
#include<conio.h>
int getInput(int*,int[],int*);
int shiftRotate(int,int[],int);
int printOutput(int,int[]);
int main(){
	int n,a[30],pos;
	clrscr();
	getInput(&n,a,&pos);
	shiftRotate(n,a,pos);
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
int shiftRotate(int n,int a[],int pos){
	int i,j,temp;
	for(i=0;i<pos;i++){
		temp=a[0];
		for(j=0;j<n-1;j++){
			a[j]=a[j+1];
		}
		a[j]=temp;
	}
	return 0;
}
int printOutput(int n,int a[]){
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}

