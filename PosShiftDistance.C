/*
	To Left Shift the array based on given POS and DIS
	Input:	Array Size: 6
		Array: 1 2 3 4 5 6
		POS: 2
		DIS: 3
	Output: 0 2 3 0 5 6
	*/
#include<stdio.h>
#include<conio.h>
int getInput(int*,int[],int*,int*);
int leftShift(int,int[],int,int);
int printOutput(int,int[]);
int main(){
	int n,a[30],pos,dis;
	clrscr();
	getInput(&n,a,&pos,&dis);
	leftShift(n,a,pos,dis);
	printOutput(n,a);
	getch();
	return 0;
}
int getInput(int *n,int a[],int *pos,int *dis){
	int i;
	printf("\nEnter Array Size:");
	scanf("%d",n);
	printf("\nEnter Array;");
	for(i=0;i<*n;i++)
		scanf("%d",&a[i]);
	printf("\nEnter POS:");
	scanf("%d",pos);
	printf("\nEnter DIS:");
	scanf("%d",dis);
	return 0;
}
int leftShift(int n,int a[],int pos,int dis){
	int i,j;
	for(i=0;i<pos;i++){
		for(j=0;j<n-1;j+=dis){
			a[j]=a[j+dis];
		}
		a[j-dis]=0;
	}
	return 0;
}
int printOutput(int n,int a[]){
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}
