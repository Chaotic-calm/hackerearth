#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[100],i=0;
    cin >> a;
    for(i=0; a[i]!='\0'; i++)
    {
    	if(a[i] >= 'a' && a[i] <= 'z')
    	{
    		a[i] = a[i]-32;
    	}
    	else if(a[i] >= 'A' && a[i] <= 'Z')
    	{
    		a[i] = a[i] +32;
    	}
    }
    cout << a;
    return 0;
}
