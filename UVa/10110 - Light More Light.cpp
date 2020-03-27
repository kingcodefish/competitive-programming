#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	vector<unsigned int> n;
	unsigned int nn = 100;

	while(nn != 0)
	{
		cin >> nn;
		n.push_back(nn);
	}
	n.pop_back();
	
	for(unsigned int i = 0; i < n.size(); ++i)
	{
		unsigned int h = n[i] & 0xF;
		if(h > 9)
			std::cout << "no" << std::endl;
		else if(h == 0 || h == 1 || h == 4 || h == 9)
		{
			int t = (int)floor(sqrt((double)n[i]) + 0.5);
			if(t * t == n[i])
				std::cout << "yes" << std::endl;
			else
				std::cout << "no" << std::endl;
		}
		else
			std::cout << "no" << std::endl;
	}

	return 0;
}