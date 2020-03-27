#include <iostream>

int main()
{
	int sum = 0, n, h;

	std::cin >> n;
	std::cin >> h;

	while(n-- > 0)
	{
		int curr = 0;
		std::cin >> curr;
		if(curr > h)
			sum += 2;
		else
			sum++;
	}

	std::cout << sum;

	return 0;
}