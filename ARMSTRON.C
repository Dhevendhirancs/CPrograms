/*********************C PROGRAM TO CHECK WHETHER THE GIVEN NUMBER IS
				    ARMSTRONG OR NOT
********************/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void getInput(int*);
void checkArmstrong(int);
int main(){
	int n;
	getInput(&n);
	checkArmstrong(n);
	getch();
	return 0;
}
void getInput(int *n){
	printf("\nEnter a number:");
	scanf("%d",n);
}
void checkArmstrong(int n){
	int ans=0,t=n,temp;
	while(t!=0){
		temp=t%10;
		ans+=pow(temp,3);
		t/=10;
	}
	if(ans==n)
		printf("\nArmstrong");
	else
		printf("\nNot an Armstrong");
}