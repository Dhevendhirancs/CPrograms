#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	 char exp[50],ans[100];
	 int i=0,k=0,j,temp,len;
	 clrscr();
	 printf("\nEnter the expression:");
	 gets(exp);
	 len=strlen(exp);
	 while(i<len){
		temp=exp[i+1]-48;
		//printf("\n%d",temp);
		//i=i+2;
		for(j=0;j<temp;j++){
			ans[k]=exp[i];
			k++;
		}
		i=i+2;
	 }
	 ans[k]='\0';
	 printf("\n");
	 printf("%s",ans);
	 getch();
	 return 0;
}
