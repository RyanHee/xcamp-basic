#include <vector>
#include <iostream>
#include <algorithm>
#include <array>
#include <string>
#include<unordered_set>
#include<stack>
#include<queue>
#include<map>
#include <numeric>
#include <unordered_map>

using namespace std;

bool work (vector<int>lst, int k, int x)
{
	int a = 0;
	for (int m:lst)
	{
		a += m / x;
	}
	if (a>=k)
	{
		return true;
	}
	return false;
}

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int>lst(n);
	for (int i=0;i<n;i++)
	{
		cin >> lst[i];
	}
	

	int biggest = *max_element(lst.begin(), lst.end());
	int smallest = 1;
	while (smallest<=biggest)
	{
		int mid = smallest + (biggest - smallest) / 2;
		if (work(lst, k, mid)) {
			smallest = mid + 1;
		}
		else
		{
			biggest = mid - 1;
		}
		
	}
	cout << biggest << endl;
}

