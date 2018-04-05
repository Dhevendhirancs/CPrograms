/*
	To find Winner Array
	Input: 	Array Size: 5
		Array A: 1 2 3 6 7
		Array B: 5 4 1 2 9
	Output: Winnner Array : B
	*/
#include<stdio.h>
#include<conio.h>
int main(){
	int n,a[10],b[10];
	clrscr();
	getInput(&n,a,b);
	findWinnerArray(n,a,b);
	getch();
	return 0;
}
int getInput(int *n,int a[],int b[]){
	int i;
	printf("\nEnter Array Size:");
	scanf("%d",n);
	printf("\nEnter First Array:");
	for(i=0;i<*n;i++)
		scanf("%d",&a[i]);
	printf("Enter Second Array:");
	for(i=0;i<*n;i++)
		scanf("%d",&b[i]);
	return 0;
}
int findWinnerArray(int n,int a[],int b[]){
	int countA=0,countB=0,i;
	for(i=0;i<n;i++){
		if(a[i]>b[i])
			countA++;
		else if(a[i]<b[i])
			countB++;
	}
	printf("\nWinner Array : ");
	if(countA>countB)
		printf("A");
	else if(countB>countA)
		printf("B");
	else
		printf("A & B");
	return 0;
}

