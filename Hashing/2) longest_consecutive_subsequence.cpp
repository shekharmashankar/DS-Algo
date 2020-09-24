#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

int LCS(vector<int> arr, int n)
{
	unordered_set<int> s(arr.begin(), arr.end());

	int max_len = 1;

	int len = 0;

	for (auto i : arr)
	{
		if (s.find(i - 1) == s.end())
		{
			len = 1;

			while (s.find(i + len) != s.end())
				len++;

			max_len =  max(max_len, len);
		}
	}
	return max_len;

}

int main()
{
	vector<int> vec = { 2, 0, 6, 1, 5, 3, 7 };
	int n = vec.size();

	cout << "The length of maximum length consecutive subsequence is "
	     << LCS(vec, n) << endl;

	return 0;


}