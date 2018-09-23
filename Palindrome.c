#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        j=i%4;
        if(j<2)
        {
            printf("a");
        }
        else{
            printf("b");
        }
    }
    return 0;
}
