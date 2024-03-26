
#include <stdio.h>
int main()
{
    double num,total = 0;

    while(1)
    {
        printf("Enter the Number (enter 0 to stop) :");
        scanf("%lf",&num);

        if(num == 0){
            break;
        }
        total+= num;
    }
    printf("The Sum of the numbers you entered is : %2lf \n",total);

    return 0;

}