#include <stdio.h>
int main ()
{
int k, j = 0; 
char n[100]; 

printf("ingrese parabra :");
scanf("%s", n);
for ( k = 0; n[k] != '\0'; k++)
{
printf("%d", j);
printf(",");
// 0
// 1
// 2
// 3
//printf("%s\n", n);
// roma
// roma
// roma
// roma
//printf("%c\n", n[k]);
// r
// o
// m
// a
j++;
}
printf("\n");

return 0;

}