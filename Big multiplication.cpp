#include <bits/stdc++.h>

using namespace std;

int main()
{
    int  i,p;
    cin >> p;
    for(i=0;i<p;i++)
    {
        string n,m;
        long long int y = 0,u,g = 0;
        cin >> n >> m;
        long long int k = n.size();
        long int l = m.size();
        for(int j=0;j<k;j++)
        {
            g = g + (n[j] - 48);
        }
        for(int u=0;u<l;u++)
        {
            y = y + (m[u] - 48);
        }
        long long int f = ((g%3)*(y%3))%3;
        cout << f << endl;
    }
    return 0;
}

