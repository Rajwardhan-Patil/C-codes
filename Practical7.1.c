#include<stdio.h>
//1 <-- True
//0 <-- False
int main() {
printf("%d \n", 8<4 && 3<6);
printf("%d \n", 3<4 || 5<4);
printf("%d \n", 3<4 || 5<4);
printf("%d \n", 3>4 || 5>4);
printf("%d \n", 3<4 && 3<5);
printf("%d \n", !(3<4 && 3<5));
printf("%d \n", !(4<3 || 5<3));
return 0;
}