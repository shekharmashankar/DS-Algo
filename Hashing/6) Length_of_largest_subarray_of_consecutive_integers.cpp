#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int length(vector<int> arr, int n)
{
	int max_len = 1;
	for (int i = 0 ; i < n - 1 ; i++)
	{
		int mn = arr[i], mx = arr[i];
		for (int j = i + 1 ; j < n ; j++)
		{
			mx = max(mx, arr[j]);
			mn = min(mn, arr[j]);

			if ((mx - mn) == (j - i))
				max_len = max(max_len, mx - mn + 1);
		}
	}
	return max_len;
}

int main()
{
	vector<int> arr = {1, 56, 58, 57, 90, 92, 94, 93, 91, 45};
	int n = arr.size();
	cout << "Length of the longest contiguous subarray is "
	     << length(arr, n) << endl;
	return 0;
}