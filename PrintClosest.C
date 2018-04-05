/*
	Print Closest number to searchInput
	Input: 	Array Size: 5
		Array: 1 2 5 6 8
		Search input: 4
	Output: Closest number: 5
	*/
#include<stdio.h>
#include<conio.h>
int main(){
	int n,a[30],searchInput;
	clrscr();
	getInput(&n,a,&searchInput);
	printClosest(findClosest(n,a,searchInput));
	getch();
	return 0;
}
int getInput(int *n,int a[],int searchInput){
	int i;
	printf("\nEnter Array Size:");
	scanf("%d",n);
	printf("\nEnter Array:");
	for(i=0;i<*n;i++)
		scanf("%d",&a[i]);
	printf("\nEnter Search Input:");
	scanf("%d",searchInput);
	return 0;
}
int findClosest(int n,int a[],int searchInput){
	int diff,i,closest;
	if(a[0]>=searchInput)
		diff=a[0]-searchInput;
	else
		diff=searchInput-a[0];
	for(i=0;i<n;i++){
		if(a[i]>searchInput && (a[i]-searchInput)<=diff){
			diff=a[i]-searchInput;
			closest=a[i];
		}else if(a[i]<searchInput && (searchInput-a[i])<diff){
			diff=searchInput-a[i];
			closest=a[i];
		}
	}
	return closest;
}
int printClosest(int ans){
	printf("\nThe closest number is %d",ans);
	return 0;
}