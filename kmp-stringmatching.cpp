// hgthai.uit
#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define ll long long
#define endl '\n'
#define ii pair<ll,ll>
const ll N=1e6+1;
string s,x;
int pi[N];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> s >> x;
    int m = s.length();
    s = " " + s;
    int n = x.length();
    x = " " + x;
    pi[1] = 0;
    int k = 0;
    for(int i = 2; i <= m; i++)
    {
        while(k > 0 && s[k+1] != s[i])
            k = pi[k];
        if(s[k+1] == s[i])
            k++;
        pi[i] = k;
    }
    k = 0;
    for(int i = 1; i <= n; i++)
    {
        while(k > 0 && s[k+1] != x[i])
            k = pi[k];
        if(s[k+1] == x[i])
            k++;
        if(k == m)
        {
            cout << i-m+1 << " ";
            k = pi[k];
        }
    }
    return 0;
}
