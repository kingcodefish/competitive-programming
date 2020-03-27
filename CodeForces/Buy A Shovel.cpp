#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
 
	int a = 0, b = 0;
	cin >> a >> b;
	int t = 1;
 
	while((t * a) % 10 != 0 && (t * a) % 10 != b)
	{
		t++;
	}
 
	std::cout << t << std::endl;
 
	return 0;
}