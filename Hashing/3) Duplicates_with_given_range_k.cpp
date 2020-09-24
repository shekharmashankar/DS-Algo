#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

bool duplicates(vector<int> arr, int n, int k)
{
	unordered_map<int, int> mp;

	for (int i = 0 ; i < n ; i++)
	{
		if (mp.find(arr[i]) != mp.end())
		{

			if (i - mp[arr[i]] <= k)
				return true;
		}

		mp[arr[i]] = i;
	}
	return false;
}

int main()
{
	vector<int> vec = { 5, 6, 8, 2, 4, 6, 9 };
	int n = vec.size();
	int k = 4;

	if (duplicates(vec, n, k)) {
		cout << "Duplicates found";
	}
	else {
		cout << "No Duplicates found";
	}
	return 0;
}