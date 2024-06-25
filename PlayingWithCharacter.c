#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
     char c; 
    scanf("%c",&c);
    printf("%c\n",c);
    
    char str[100];
    scanf("%s", &str);
    printf("%s \n",str);
    
    char s[1000];
    scanf(" %[^\n]%*c", s);
    printf("%s \n", s);
 
}
