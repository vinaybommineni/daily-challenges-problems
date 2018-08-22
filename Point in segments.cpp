#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n,m;
    cin >> n; 
    cin >> m;
    int a[n],b[n],i,p,q,l,s;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        cin >> b[i];
    }
    int c[m],j;
    for(i=1;i<=m;i++)
    {
        c[i] = 1;
    }
    for(i=0;i<n;i++)
    {
        s=a[i];
        p=b[i];
        for(j=s;j<=p;j++)
        {
            c[j] = 0;
        }
    }
    int count = 0;
    for(i=1;i<=m;i++)
    {
        if(c[i]!=0)
        {
            count++;
        }
    }
    cout << count << endl;
    for(i=1;i<=m;i++)
    {
        if(c[i]!=0)
        {
            cout << i << " ";
        }
    }
    return 0;
}
