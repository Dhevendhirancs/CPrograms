/******C PROGRAM TO FIND AREA OF RECTANGLE******/
#include<stdio.h>
#include<conio.h>
void getInput(float *base,float *height);
float calculateAreaOfRect(float base,float height);
void printAreaOfRect(float ans);
int main(){
	float base,height;
	getInput(&base,&height);
	printAreaOfRect(calculateAreaOfRect(base,height));
	getch();
	return 0;
}
void getInput(float *base,float *height){
	printf("\nEnter the base of the triangle:");
	scanf("%f",base);
	printf("\nEnter the height of the triangle:");
	scanf("%f",height);
}
float calculateAreaOfRect(float base,float height){
	return 0.5*base*height;
}
void printAreaOfRect(float ans){
	printf("\nThe Area of Rectangle is: %.4f",ans);
}
