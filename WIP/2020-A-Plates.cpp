#include <bits/stdc++.h>
using namespace std;

// Strategy: Knapsack
int solve(int n, int k, int p, vector<deque<pair<double, int>>>& b)
{
	int sum = 0;

	for(int i = 0; i < p; ++i)
	{
		int max = 0;
		for(int j = 0; j < b.size(); ++j)
		{
			if(b[max].empty() || b[j].back().first > b[max].back().first && !b[j].empty())
				max = j;
		}
		sum += b[max].back().first * b[max].back().second;
		b[max].pop_back();
	}

	return sum;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int t, n, k, p, curr;

	std::cin >> t;

	// For each test case...
	for(int i = 0; i < t; ++i)
	{
		std::cin >> n >> k >> p;

		// Grab skill levels
		vector<deque<pair<double, int>>> b;
		for(int j = 0; j < n; ++j)
		{
			b.push_back({});
			for(int l = 0; l < k; ++l)
			{
				std::cin >> curr;
				b[j].push_front(make_pair((double)curr / (l + 1), l + 1));
			}
		}

		std::cout << "Case #" << i + 1 << ": " << solve(n, k, p, b) << std::endl;
	}

	return 0;
}