//You are given a table with n rows and m columns. Each cell is colored with white or black. 
//Considering the shapes created by black cells, what is the maximum border of these shapes? 
//Border of a shape means the maximum number of consecutive black cells in any row or column without any white cell in between.
//A shape is a set of connected cells. Two cells are connected if they share an edge. Note that no shape has a hole in it.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
	  cin >> t;

	while (t--) 
	{
			int n, m;
			cin >> n >> m;

		vector<vector<char>> matrix(n, vector<char>(m));
			for (int i = 0; i < n; i++) 
			{
				for (int j = 0; j < m; j++) 
				{
						cin >> matrix[i][j];
				}
			}

		vector<vector<int>> dp(n, vector<int>(m, 0));
		int max_border = 0;
 
		for (int i = 0; i < n; i++) 
		{
		int curr_border = 0;
  			for (int j = 0; j < m; j++) 
  			{
    				if (matrix[i][j] == '#') 
    				{
    					curr_border++;
    					dp[i][j] = curr_border;
    				} 
    				else 
    				{
    					curr_border = 0;
    				}
  			}
				for (int j = 0; j < m; j++) 
				{
					int curr_border = 0;
    					for (int i = 0; i < n; i++) 
    					{
    						if (matrix[i][j] == '#') 
    						{
    							curr_border++;
    							dp[i][j] = max(dp[i][j], curr_border);
    						} 
    						else 
    						{
    							curr_border = 0;
    						}
    					}

  					for (int i = 0; i < n; i++) 
  					{
      						for (int j = 0; j < m; j++) 
      						{
      							max_border = max(max_border, dp[i][j]);
      						}
  					}
       			 }
        }
		cout << max_border << endl;
    } 

	
	return 0;
}
