#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int a,b;
    scanf("%lld%lld",&a,&b);
    long long int i,j,k=1,l=1,p;
    if(b<a)
    {
        printf("0");
    }
    else{
        for(i=a+1;i<b+1;i++)
        {
            k=k*i%10;
            if(k==0)
            {
                break;
            }
        }
    }
    printf("%lld ",k);

    return 0;
}
