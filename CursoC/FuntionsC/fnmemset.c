#include <stdio.h>
#include <string.h>

int main ()
{
     char str[50];

     strcpy(str,"This is string");
     puts(str);

     memset(str + 2,'L',7);
     puts(str);

     return(0);
}