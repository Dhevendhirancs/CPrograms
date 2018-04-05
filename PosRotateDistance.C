/*
	To rotate the array based on POS and DIS
	Input: 	Array Size: 10
		Array: 1 2 3 4 5 6 7 8 9 10
		POS: 2
		DIS: 3
	Output: 7 2 3 10 5 6 1 8 9 4
	*/
#include<stdio.h>
#include<conio.h>
int getInput(int*,int[],int*,int*);
int shiftRotate(int,int[],int,int);
int printOutput(int,int[]);
int main(){
	int n,a[30],pos,dis;
	clrscr();
	getInput(&n,a,&pos,&dis);
	shiftRotate(n,a,pos,dis);
	printOutput(n,a);
	getch();
	return 0;
}
int getInput(int *n,int a[],int *pos,int *dis){
	int i;
	printf("\nEnter Array Size:");
	scanf("%d",n);
	printf("\nEnter Array:");
	for(i=0;i<*n;i++)
		scanf("%d",&a[i]);
	printf("\nEnter POS:");
	scanf("%d",pos);
	printf("\nEnter DIS:");
	scanf("%d",dis);
	return 0;
}
int shiftRotate(int n,int a[],int pos,int dis){
	int i,j,temp=0;
	for(i=0;i<pos;i++){
		temp=a[0];
		for(j=0;j<n;j+=dis){
			a[j]=a[j+dis];
		}
		a[j-dis]=temp;
	}
	return 0;
}
int printOutput(int n,int a[]){
	int i;
	printf("\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}


