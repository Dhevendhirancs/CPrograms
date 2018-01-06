/**************************************************
	C PROGRAM TO PRINT SPIRAL MATRIX
	Sample input : row = 4, column = 4
	       Output: 1 2 3 4
		       12 13 14 5
		       11 16 15 6
		       10 9 8 7
	Author: Dhevendhiran M
	Date: 06.01.2018
***************************************************/
#include<stdio.h>
#include<conio.h>
int printSpiral(int row,int col);
int getInput(int *row,int *col);
int main(){
	int row,col;
	clrscr();
	getInput(&row,&col);
	printSpiral(row,col);
	getch();
	return 0;
}
int getInput(int *row,int *col){
	printf("\nEnter the row and column:");
	scanf("%d %d",row,col);
	return 0;
}
int printSpiral(int row,int col){
	int i=0,j=0,a[10][10],sum=row*col,k=1,count=1,r=row,c=col;
	while(k<=sum){
		while(count<=col){
			a[i][j]=k;
			k++;
			j++;
			count++;
		}
		j--;
		count=1;
		i++;
		row--;
		while(count<=row){
			a[i][j]=k;
			k++;
			i++;
			count++;
		}
		i--;
		count=1;
		j--;
		col--;
		while(count<=col){
			a[i][j]=k;
			k++;
			j--;
			count++;
		}
		j++;
		count=1;
		i--;
		row--;
		while(count<=row){
			a[i][j]=k;
			k++;
			i--;
			count++;
		}
		i++;
		count=1;
		j++;
		col--;
	}
	printf("\nThe Spiral Matrix is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}


