#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      string e;
      cin >> e;
      vector<char> st;
      int i = 0;
      while (i != e.length() - 1)
      {
         if (e[i] != '(')
         {
            if (e[i] != '+' && e[i] != '-' && e[i] != '*' && e[i] != '/' && e[i] != '^' && e[i] != ')')
            {
               st.push_back(e[i]);
               e.erase(e.begin() + i);
               continue;
            }
            else
            {
               i++;
            }
            if (e[i] == ')')
            {
               i = 0;
               e.erase(e.begin() + i);
               if (e[i] == '+' || e[i] == '-' || e[i] == '*' || e[i] == '/' || e[i] == '^')
               {
                  st.push_back(e[i]);
                  e.erase(e.begin() + i);
               }
            }
         }
         else
         {
            e.erase(e.begin() + i);
         }
      }
      vector<char>::iterator j = st.begin();
      while(j != st.end()){
         cout << *j;
         j++;
      }
      int k = 0;
      while(k != e.length()){
         cout<<e[k];
         k++;
      }
      cout << "\n";
   }
}