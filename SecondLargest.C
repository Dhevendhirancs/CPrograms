/*
	Find the second largest number in the array
	Input: 	6
		5 4 3 8 1 2
	Output: 5
	*/
#include<stdio.h>
#include<conio.h>
int getInput(int*,int[]);
int findSecondLargest(int,int[]);
int printSecondLargest(int);
int main(){
	int n,a[30];
	clrscr();
	getInput(&n,a);
	printSecondLargest(findSecondLargest(n,a));
	getch();
	return 0;
}
int getInput(int *n,int a[]){
	int i;
	printf("\nEnter Array Size:");
	scanf("%d",n);
	printf("\nEnter Array:");
	for(i=0;i<*n;i++)
		scanf("%d",&a[i]);
	return 0;
}
int findSecondLargest(int n,int a[]){
	int i,large=0,secondLarge=0;
	for(i=0;i<n;i++){
		if(a[i]>large){
			secondLarge=large;
			large=a[i];
		}else if(a[i]>=secondLarge && a[i]!=large){
			secondLarge=a[i];
		}
	}
	return secondLarge;
}
int printSecondLargest(int ans){
	printf("\nThe second Largest: %d",ans);
	return 0;
}


