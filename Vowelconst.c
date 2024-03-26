#include<stdio.h>
int main(){
	char letter;
	int lowercase,uppercase;
	printf("Enter the letter : ");
	scanf("%c",&letter);
	lowercase =(letter== 'a' || letter== 'e' || letter == 'i' ||letter=='o' || letter== 'u' );
	uppercase = (letter== 'A' || letter== 'E' || letter == 'I' || letter== 'O' || letter== 'U' );
	if(lowercase || uppercase)
	{
		printf("You Entrered the Vowel");
	}
	else
	{
		printf("You Entered the Consonant");
	}
	return 0;   
}