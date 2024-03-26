#include<stdio.h>
int main()
{
	int per;
	printf("Enter your Percentage : ");
	scanf("%d",&per);
	if(per >= 75)
	{
		printf("Grade : Distinction");
	}
	else if(per>=60 && per<75)
	{
		printf("Grade : A");
	}
	else if(per>=55 && per<60)
	{
		printf("Grade : B");
	}
	else if(per>=40 && per<55)
	{
		printf("Grade : Pass");
	}
	else if(per<40)
	{
		printf("Grade : Fail");
	}
	return 0;
}	       