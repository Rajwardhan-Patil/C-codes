#include<stdio.h>
int main(){
	int m;
	printf("Enter your Month : ");
	scanf("%d",&m);
	if(m == 1 ||m == 3 ||m == 5 || m == 7 ||m == 8 || m == 10 ||m == 12)
	{
		printf("%d have 31 days in it",m);
	}
	else if(m == 4 ||m == 6 ||m == 9 ||m == 11 )
	{
		printf("%d have 30 days in it",m);
	}
	else if(m == 2)
	{
		printf("%d have 28 or 29 days",m);
	}
	else{
		printf("Thank You!");
	}

	return 0;
}