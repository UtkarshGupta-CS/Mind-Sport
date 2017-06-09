#include <iostream>
#include <string>

using namespace std;

int main()
{
   int c;
   cin >> c;
   while (c != 0)
   {
      string s;
      cin >> s;
      int len = s.length();

      int i = 0, j = 0, count = 0, cond1 = 2 * c - 1, cond2 = 1;
      bool choice = true;
      while (count != len)
      {
         if (i < len)
         {
            cout << s[i];
            count++;
            if (choice)
            {
               i += cond1;
               choice = false;
            }
            else
            {
               i += cond2;
               choice = true;
            }
         }
         else
         {
            ++j;
            i = j;
            cond1 -= 2;
            cond2 += 2;
            choice = true;
         }
      }
      cout << "\n";
      cin >> c;
   }
}