#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

bool subarray(vector<int> arr, int n, int sum)
{
	unordered_set<int> set;

	int sum_so_far = 0;
	for (int i = 0 ; i < n ; i++)
	{
		sum_so_far += arr[i];

		if (set.find(sum_so_far - sum) != set.end())
			return true;

		set.insert(sum_so_far);
	}
	return false;
}

int main()
{
// array of integers
	vector<int> arr = { 0, 5, -7, 1, -4, 7, 6, 1, 4, 1, 10 };
	int sum = -3;

	int n = arr.size();

	if (subarray(arr, n, sum))
		cout << "Sub-array with given sum exists\n";
	else
		cout << "Sub-array with given sum do not exist\n";
	return 0;
}