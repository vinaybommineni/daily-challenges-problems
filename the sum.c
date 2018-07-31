By ivvraghavendra199, contest: acmsguru, problem: (123) The sum, Wrong answer on test 2, #
 #include <math.h>
#include <stdio.h>
#include <string.h> 
int main()
    {
    
         int n,sum=0,a=0,b=1,c=0,i;
         scanf("%d",&n);
         for(a=0;a<n;a++)
         {
             a=b+c;
             b=c;
             c=a;
             sum=sum+a;
         }
         printf("%d",sum);
    return 0;
}
