#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int a = 0, b = 0;
	cin >> a >> b;
	int t = 0;
	
	while(a <= b)
	{
		a *= 3;
		b *= 2;
		++t;
	}

	std::cout << t << std::endl;

	return 0;
}