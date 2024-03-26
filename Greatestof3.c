#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter The Frist Nmuber : ");
	scanf("%d",&a);
	printf("Enter The Second Nmuber : ");
	scanf("%d",&b);
	printf("Enter The Third Nmuber : ");
	scanf("%d",&c);
	if(a>b){
		if(a>c)
			printf("A is largest");
		
		else
			printf("C is largest");}
		
	else{
		if(b>c)
			printf("B is largest");
		
		else
			printf("C is largest");
			}
	
	return 0;
	}