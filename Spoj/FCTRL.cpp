/**
* Link: http://www.spoj.com/problems/FCTRL/
*/
#include <iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, factor = 5, sum = 0;
    cin >> n;
    while (n >= factor)
    {
      sum += n / factor;
      factor *= 5;
    }
    cout << sum << "\n";
  }

  return 0;
}
