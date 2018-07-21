#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    char a[20];
    scanf("%s",a);
    int k = strlen(a);
    int n = 26,i;
    for(i=0;i<k;i++)
    {
        n = n + 25;
    }
    printf("%d",n);

    return 0;
}


