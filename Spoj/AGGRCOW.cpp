/*
* Link: http://www.spoj.com/problems/AGGRCOW/
*/

/*
* Note: compile using "clang++ -std=c++11 -stdlib=libc++ <filename>"
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, c, x;
    cin >> n >> c;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
      cin >> x;
      v.push_back(x);
    }

    sort(v.begin(), v.end());

    vector<int>::iterator it;
    int z = 0, y  = 0;
    for (it = next(it, 1); it != v.end(); it++)
    {
      auto prv = prev(it, 1);
      auto nxt = next(it, 1);
      /*if (*it <= (*prv + *nxt) / 2)
      {
      }*/
      cout << *prv << *nxt;
      // cout << *it << "\n";
    }
    // cout << largestMinDistance << "\n";
  }
}
