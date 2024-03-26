#include<stdio.h>
#include<math.h>
int main()
{
    int r1,r2,d,a,b,c;
        printf("Enter The Value of a :");
        scanf("%d",&a);
        printf("Enter The Value of b :");
        scanf("%d",&b);
        printf("Enter The Value of c :");
        scanf("%d",&c);
        d = b*b-4*a*c;
    if(d>0)
    {
        r1 = b + sqrt(d)/(2*a);
        r2 = -b + sqrt(d)/(2*a);
        printf("The Roots are : %d,%d",r1,r2);
    }
        else if (d == 0)
        {
        r1 = b + sqrt(d)/(2*a);
        r2 = -b + sqrt(d)/(2*a);
        printf("The Roots are : %d,%d",r1,r2);
        }
            else
            {
                    printf("The Roots are Imaginary !");
            }
    return 0;
}