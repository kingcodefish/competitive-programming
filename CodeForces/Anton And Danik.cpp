#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n, a = 0, d = 0;
	cin >> n;
	string s;
	cin >> s;

	for(auto i : s)
	{
		if(i == 'A')
			++a;
		else if(i == 'D')
			++d;
	}
	if(a > d)
		std::cout << "Anton" << std::endl;
	else if(d > a)
		std::cout << "Danik" << std::endl;
	else
		cout << "Friendship" << endl;

	return 0;
}