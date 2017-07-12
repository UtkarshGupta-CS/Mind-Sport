/*
* Link: https://www.codechef.com/JULY17/problems/CALC
*/
// still not passing all the constraint
#include <iostream>

using namespace std;
typedef long long ll;

int main()
{
  ios_base::sync_with_stdio(false);
  int t;
  cin >> t;
  while (t--)
  {
    ll n, b, ans = 0, reserve = 0, max = 0;
    cin >> n >> b;

    while (n > 0)
    {
      reserve++;
      ans++;
      --n;
      if (n % b == 0)
      {
        ans = ans * n / b;
        if (ans > max)
          max = ans;
        ans = reserve;
      }
    }
    cout << max << "\n";
  }

  return 0;
}
