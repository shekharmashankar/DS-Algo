#include<iostream>
#include<unordered_set>
using namespace std;

int isTrue(int A[], int n)
{
	unordered_set<int> set;
	set.insert(0);
	int sum = 0;

	for (int i = 0 ; i < n ; i++)
	{
		sum += A[i];

		if (set.find(sum) != set.end())
			return true;
		else
			set.insert(sum);
	}
	return false;
}

int main()
{
	int arr[] = {4, 2, -3, -1, 0, 4};
	int n = sizeof(arr) / sizeof(int);
	isTrue(arr, n) ? cout << "YES\n" : cout << "NO\n";

	return 0;
}