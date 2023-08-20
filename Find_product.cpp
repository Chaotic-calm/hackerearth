#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int ans;
    int n;
    cin >> n;
    int a[n], i;
    for(i=0; i<n; i++)
    {
    	cin >> a[i];
    }
    ans=1;
    for(i=0; i<n; i++)
    {
    	ans = (ans*a[i]) % (1000000007);
    }
    cout << ans;
    return 0;
}
