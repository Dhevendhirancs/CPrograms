/****************************************************************
	C PROGRAM TO IMPLEMENT INSERTION SORT
	SAMPLE INPUT: 5,4,3,2,1
	      OUTPUT: 1,2,3,4,5

	      AUTHOR: DHEVENDHIRAN M
		DATE: 12.01.2018
*****************************************************************/
#include<stdio.h>
#include<conio.h>
int a[20],n,i;
void getInput();
void insertionSort();
void printOutput();
void main(){
	clrscr();
	getInput();
	insertionSort();
	printOutput();
	getch();
}
void getInput(){
	printf("\nEnter the number of elements:");
	scanf("%d",&n);
	printf("\nEnter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void insertionSort(){
	int j,empty,temp;
	for(i=1;i<n;i++){
		temp=a[i];
		empty=i;
		for(j=i-1;j>=0;j--)
			if(a[j]>temp){
				a[j+1]=a[j];
				empty=j;
			}
		a[empty]=temp;
	}
}
void printOutput(){
	int i;
	printf("\nThe Sorted Array is:");
	for(i=0;i<n;i++)
		printf("\n%d",a[i]);
}


