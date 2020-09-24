#include<bits/stdc++.h>
using namespace std;

int XOR(int arr[], int n)
{

	unordered_map<int, int> mp;
	for (int i = 0 ; i < n ; i++)
		mp[arr[i]]++;

	for (auto i : mp)
	{
		if (mp[i] == 2)
			return i;
	}
}

int main()
{
	int arr[] = {99, 67, 89, 100, 89, 108, 68};
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << XOR(arr, n) << endl;
	return 0;
}
