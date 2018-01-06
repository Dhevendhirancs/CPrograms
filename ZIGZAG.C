/**************************************************************
	C PROGRAM TO PRINT ZIGZAG FORM OF MATRIX
	SAMPLE INPUT: 1 2 3
		      4 5 6
		      7 8 9
	      OUTPUT: 1 2 3
		      6 5 4
		      7 8 9
	AUTHOR: DHEVENDHIRAN M
	DATE: 06.01.2018
***************************************************************/
#include<stdio.h>
#include<conio.h>
void getInput(int a[10][10],int *row,int *col);
void printZigZag(int a[10][10],int row,int col);
int main(){
	int a[10][10],row,col;
	clrscr();
	getInput(a,&row,&col);
	printZigZag(a,row,col);
	getch();
	return 0;
}
void getInput(int a[10][10],int *row,int *col){
	int i,j;
	printf("\nEnter the row and column:");
	scanf("%d %d",row,col);
	printf("\nEnter the matrix elements:\n");
	for(i=0;i<*row;i++)
		for(j=0;j<*col;j++)
			scanf("%d",&a[i][j]);
}
void printZigZag(int a[10][10],int row,int col){
	int k,i=0,j=0,ans[10][10];
	for(i=0;i<row;i++){
		if(i%2==0){
			for(j=0;j<col;j++){
				ans[i][j]=a[i][j];
			}
		}
		else{
			for(j=0;j<col;j++){
				ans[i][j]=a[i][col-j-1];
			}
		}
	}
	printf("\nThe ZigZag matrix is :\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++)
			printf("%d ",ans[i][j]);
		printf("\n");
	}
}


