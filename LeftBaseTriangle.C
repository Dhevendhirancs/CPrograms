/**********************************************************
	C PROGRAM TO PRINT LEFT BASE TRIANGLE
	SAMPLE INPUT: 4
	      OUTPUT: *
			*
		      *   *
			*   *
		      *   *
			*
		      *
	AUTHOR: DHEVENDHIRAN M
	DATE: 08.01.2018
************************************************************/
#include<stdio.h>
#include<conio.h>
void getInput(int *n);
void printLeftBaseTri(int n);
int main(){
	int n;
	clrscr();
	getInput(&n);
	printLeftBaseTri(n);
	getch();
	return 0;
}
void getInput(int *n){
	printf("\nEnter the number of rows:");
	scanf("%d",n);
}
void printLeftBaseTri(int n){
	int i,j,k,temp=0,temp1=0,flag,lim;
	for(i=0;i<n;i++){
		if(i%2==0){
			for(j=0;j<temp+1;j++){
				printf("*  ");
			}
			temp++;
		}else{
			for(j=0;j<temp1+1;j++){
				printf("  *");
			}
			temp1++;
		}
		printf("\n");
	}
	flag=0;
	if(n%2==0){
		flag=0;
		temp=n/2;
		temp1=temp-1;
		lim=n-1;
	}else{
		flag=1;
		temp=(n/2)+1;
		temp1=temp-1;
		lim=n;
	}
	for(i=0;i<lim;i++){
		if(i%2==0){
			if(flag!=1){
				for(j=0;j<temp;j++){
					printf("*  ");
				}
			}
			temp--;
		}
		else{
			for(j=0;j<temp1;j++){
				printf("  *");
			}
			temp1--;
			flag=0;
		}
		if(flag!=1){
			printf("\n");
		}
	}
}





