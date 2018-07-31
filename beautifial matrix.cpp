By ivvraghavendra199, contest: Codeforces Round #161 (Div. 2), problem: (A) Beautiful Matrix, Accepted, #
 #include <bits/stdc++.h>

using namespace std;



int main()
{
    int a[5][5];
    int i,j,k,l;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin >> a[i][j];
            if(a[i][j] == 1)
            {
                k = i;
                l = j;
            }
        }
    }
    int y = abs(k-2);
    int e = abs(l-2);
    cout << y+e<<endl;
    return 0;
}
