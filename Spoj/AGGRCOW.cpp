#include <iostream>
#include <algorithm>

using namespace std;

int main(){
   int t; cin>>t;
   while(t--){
      int n , c ,x; cin >> n >>c;
      vector <int> v;
      for ( int i = 0; i < n ; i++ ){
         cin>>x;
         v.push_back(x);
      }
      sort(v.begin(),v.end());
      if(binary_search(v.begin(), v.end()))
   }
}