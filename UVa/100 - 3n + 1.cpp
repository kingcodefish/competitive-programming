#include <bits/stdc++.h>
using namespace std;

#define ll long long

unordered_map<ll, ll> cycle_lengths;

ll collatz(int n)
{
	if(n == 1)
		return 1;
	else if(cycle_lengths.find(n) != cycle_lengths.end())
		return cycle_lengths[n];
	else
	{
		if(n % 2 == 0)
		{
			cycle_lengths[n] = collatz(n / 2) + 1;
			return cycle_lengths[n];
		}
		else
		{
			cycle_lengths[n] = collatz(3 * n + 1) + 1;
			return cycle_lengths[n];
		}
	}
}

ll maxCollatz(int i, int j)
{
	ll max = 0;
	int cycle_length = 1;
	for(; i <= j; ++i)
	{
		cycle_length = collatz(i);
		if(cycle_length > max)
			max = cycle_length;
		cycle_length = 1;
	}

	return max;
}

int main()
{
	int i, j;
	while(scanf("%d%d", &i, &j) == 2)
		if(i <= j)
			printf("%d %d %lld\n", i, j, maxCollatz(i, j));
		else
			printf("%d %d %lld\n", i, j, maxCollatz(j, i));

	return 0;
}