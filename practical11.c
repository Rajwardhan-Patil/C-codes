#include<stdio.h>
#include<conio.h>

int main()
{
   int color;
   // VIBGYOR
   printf("Enter the color code(R=1,O=2,Y=3,G=4,B=5,I=6,V=7) : ");
   scanf("%d",&color);

   switch (color)
   {
   case 1:
        printf("Color : Red");
        break;
    case 2:
        printf("Color : Orange");
        break;
    case 3:
        printf("Color : Yellow");
        break;
    case 4: 
        printf("Color : Green");
        break;
    case 5:
        printf("Color : Blue");
        break;
    case 6:
        printf("Color : Indigo");
        break;
    case 7:
        printf("Color : Voilet");
        break;
   default:
    printf("Wrong color code");
    break;
   }
    return 0;
}