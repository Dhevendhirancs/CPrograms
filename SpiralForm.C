/*********C PROGRAM TO PRINT SPIRAL FORM OF MATRIX********/
/************************************************************
		SAMPLE INPUT: 1 2
			      3 4
		OUTPUT: 1 2 4 3
		Author: Dhevendhiran M
		Date: 06.01.2018
*************************************************************/
#include<stdio.h>
#include<conio.h>
void getArray(int a[10][10],int *row,int *col);
void printSpiral(int a[10][10],int row,int col);
int main(){
	int a[10][10],row=0,col=0;
	clrscr();

	getArray(a,&row,&col);
	printSpiral(a,row,col);
	getch();
	return 0;
}
void getArray(int a[10][10],int *row,int *col){
	int i,j;
	printf("\nEnter the number of row and column:");
	scanf("%d %d",row,col);
	for(i=0;i<*row;i++){
		for(j=0;j<*col;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void printSpiral(int a[10][10],int row,int col){
	int i=0,j=0,ans[30],k=0,count=1,sum=row*col;
	while(k<sum){
	//first L
		while(count<=col){
			ans[k]=a[i][j];
			k++;
			j++;
			count++;
		}
		count=1;
		j--;
		i++;
		row--;
		while(count<=row){
			ans[k]=a[i][j];
			k++;
			i++;
			count++;
		}
		count=1;
		i--;
		j--;
		col--;
		//second L
		while(count<=col){
			ans[k]=a[i][j];
			k++;
			j--;
			count++;
		}
		count=1;
		j++;
		row--;
		i--;
		while(count<=row){
			ans[k]=a[i][j];
			k++;
			i--;
			count++;
		}
		count=0;
		i++;
		j++;
		col--;
	}
	printf("\nThe order is:");
	for(i=0;i<sum;i++)
		printf("%d ",ans[i]);
}
