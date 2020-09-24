#include<iostream>
#include<unordered_map
using namespace std;

vector< pair<int, int> > findSubarrays(int arr[], int n)
{
	unordered_map<int, vector<int> > mp;

	int sum = 0;
	for (int i = 0 ; i < n ; i++)
	{
		sum += arr[i];

		if (sum == 0)
			out.push_back(make_pair(0, i));

		if (mp.find(sum) != mp.end())
		{
			vector<int> out = mp[end];

		}
	}
}


int main()
{

	return 0;
}