#include <vector>
#include <iostream>
#include <algorithm>
#include <array>
#include <string>
#include<set>
#include<stack>
#include<queue>
#include<map>


typedef long long ll;
using namespace std;


int main() {
	int n, k;
	cin >> n >> k;

	//vector<ll>results
	map<ll, int>mp;
	ll cnt = 0;
	ll ps = 0;
	mp[0] = 1;
	for (int i = 1; i <= n; i++)
	{
		int a;
		cin >> a;
		ps += a;
		cnt += mp[ps - k];
		mp[ps]++;
	}

	cout << cnt << endl;


}
