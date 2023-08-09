//You are required to enter a word that consists of x and y that denote the number of Zs and Os respectively..
//The input word is considered similar to word zoo if 2*x=y.
//Determine if the entered word is similar to word zoo.
//For example, words such as zzoooo and zzzoooooo are similar to word zoo but not the words such as zzooo and zzzooooo.

#include <iostream>
using namespace std;

int main() 
{
    string word;
    cin >> word;

    int countZ = 0, countO = 0;
    	for (char ch : word) 
	{
	        if (ch == 'z') 
		{
	            countZ++;
	        } 
		else if (ch == 'o') 
		{
	            countO++;
	        }
	}

    	if (countO == 2 * countZ) 
	{
        	cout << "Yes" << endl;
    	} 
	else 
	{
        	cout << "No" << endl;
    	}

    return 0;
}
