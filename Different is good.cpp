By ivvraghavendra199, contest: Codeforces Round #352 (Div. 2), problem: (B) Different is Good, Accepted, #
 #include <bits/stdc++.h>

using namespace std;



int main()
{
    set <char> x;
    int n;
    cin >> n;
    if(n>26)
    {
        cout << -1;
        return 0;
    }
    string a;
    int i,j,count=0;
    cin >> a;
    for(i=0;i<a.size();i++)
    {
        x.insert(a[i]);
    }
    cout << n - x.size();
    return 0;
}
