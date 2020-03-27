#include <bits/stdc++.h>
using namespace std;

long long solve(int n, int b, std::vector<int>& s)
{
	long long sum = 0;
	long long ans = 0;
	
	std::sort(s.begin(), s.end());

	for(int i = 0; i < s.size(); ++i)
	{
		sum += s[i];
		if(sum <= b)
		    ans = i + 1;
		else
		    break;
	}

	return ans;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t, n, b, curr;

	std::cin >> t;

	// For each test case...
	// Sliding window
	for(int i = 0; i < t; ++i)
	{
		std::cin >> n >> b;

		// Grab costs
		std::vector<int> a;
		a.reserve(n);
		for(int j = 0; j < n; ++j)
		{
			std::cin >> curr;
			a.push_back(curr);
		}

		std::cout << "Case #" << i + 1 << ": " << solve(n, b, a) << std::endl;
	}

	return 0;
}