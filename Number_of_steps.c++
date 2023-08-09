#include<bits/stdc++.h> 
using namespace std;

int main()
{
      int N, k, i, a[N], b[N], steps=0;
        cin >> N; 
      for(i=0; i<N; i++)
        cin >> a[i];
      for(i=0; i<N; i++)
        cin >> b[i];

      for(i=0; i<N-1; i++)
      {
          if(a[i] < a[i+1]) 
          {
                k = a[i];
                a[i] = a[i+1];
                a[i+1] = k;
                k = b[i];
                b[i] = b[i+1];
                b[i+1] = k;
          }
      }
      for(i=0; i<N-1; i++)
      {
          while(a[N-1] != a[i]) 
          {
              if(a[i] <= 0)
              {
                  cout << "-1" << endl;;
                  exit(0);
              }
              if(a[N-1] < a[i])
              {
                  a[i] = a[i] - b[i];
                  steps++;
              }
              if(a[N-1] > a[i])
              {
                  a[N-1] = a[N-1] - b[N-1];
                  steps++;
              }
          }
     
      }
      cout << steps;
      return 0;
}
