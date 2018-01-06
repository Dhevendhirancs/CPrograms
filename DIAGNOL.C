/**********************************************************
	C PROGRAM TO PRINT DIAGNOL FORM NUMBERS FROM MATRIX
	SAMPLE INPUT: 1 2 3
		      4 5 6
		      7 8 9
	      OUTPUT: 1
		      4 2
		      7 5 3
		      8 6
		      9
	AUTHOR: DHEVENDHIRAN M
	DATE: 06.01.2018
***********************************************************/
#include<stdio.h>
#include<conio.h>
void getInput(int a[10][10],int *row,int *col);
void printDiagnol(int a[10][10],int row,int col);
int main(){
	int a[10][10],row,col;
	clrscr();
	getInput(a,&row,&col);
	printDiagnol(a,row,col);
	getch();
	return 0;
}
void getInput(int a[10][10],int *row,int *col){
	int i,j;
	printf("\nEnter the row and Column:");
	scanf("%d %d",row,col);
	printf("\nEnter the matrix elements:");
	for(i=0;i<*row;i++){
		for(j=0;j<*col;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void printDiagnol(int a[10][10],int row,int col){
	int i,j,m=0,n=0,c=col,k=0;
	for(i=0;i<(row+col-1);i++){
		if(i<row){
			m=i;
			n=0;
		}else{
			k++;
			m=row-1;
			n=c-(c-k);
		}
		for(j=0;j<col;j++)
			if(m>=0 && n<col)
				printf("%d ",a[m--][n++]);
			else
				printf("  ");
		printf("\n");
	}
}
