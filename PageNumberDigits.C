#include<stdio.h>
#include<conio.h>
void getInput(int *n);
int getDigits(int n,int ans);
void printOutput(int ans);
int main(){
	int n,ans=0;
	clrscr();
	getInput(&n);
	printOutput(getDigits(n,ans));
	getch();
	return 0;
}
void getInput(int *n){
	printf("\nEnter the page number:");
	scanf("%d",n);
}
int getDigits(int n,int ans){
	int i=1,temp;
	ans=0;
	while(i<=n){
		temp=i;
		while(temp>0){
			ans++;
			temp/=10;
		}
		i++;
	}
	return ans;
}
void printOutput(int ans){
	printf("\nNumber of Digits are: %d",ans);
}

