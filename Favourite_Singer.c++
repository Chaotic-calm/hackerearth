//Bob has a playlist of N songs, each song has a singer associated with it (denoted by an integer).
//Favourite singer of Bob is the one whose songs are the most on the playlist.
//Count the number of Favourite Singers of Bob.

#include <bits/stdc++.h>
using namespace std;

int main()
{
	long N, singer, c=0, max_singer=0, fav_singer=0;
	map<long, long> s;

	cin >> N; 
	for(long i=0; i<N; i++)
	{
		cin >> singer;
		s[singer]++;
		if(singer > max_singer)
		{
			max_singer = singer;
		}
		if(s[singer] > c)
		{
			c = s[singer];
		}
	}	
	for(auto i = s.begin(); i!=s.end(); ++i)
	{
		if(i->second==c)
		{
			fav_singer++;
		}
	}
	cout << fav_singer << endl;
	return 0;
}
