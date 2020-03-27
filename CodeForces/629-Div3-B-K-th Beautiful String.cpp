#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t, n, k;

  cin >> t;
  while(t--)
  {
    cin >> n >> k;

    int a = 1;
    int i = 1;
    for(; i <= k; i += a++);

    int b_1 = n - a;
    int b_2 = n - ((a - 2) - (i - k)) - 2;
    string s = "";
    for(i = 0; i < n; ++i)
    {
      if(i == b_1 || i == b_2)
        s += 'b';
      else
        s += 'a';
    }

    cout << s << endl;
  }

  return 0;
}
