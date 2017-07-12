/*
* Link: https://www.codechef.com/JULY17/problems/CALC
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    ll n, b, ans = 0, a1 = 0;
    cin >> n >> b;
    vector<ll> res;

    while(n > 0)
    {
      a1++;
      ans++;
      --n;
      if (n % b == 0)
      {
        ans = ans * n / b;
        res.push_back(ans);
        ans = a1;
      }
    }
    sort(res.begin(), res.end());
    cout << res.back() << "\n";
  }

  return 0;
}
