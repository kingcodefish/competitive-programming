#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t, a, b;

  cin >> t;
  while(t--)
  {
    cin >> a >> b;
    int n = a % b;
    if(a % b == 0)
      cout << 0 << endl;
    else if(b > a)
      cout << b - a << std::endl;
    else
      cout << (int)(b * ceil((double)a / b)) % a << endl;
  }

  return 0;
}
