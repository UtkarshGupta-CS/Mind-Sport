#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int a;
int sum=0;
for(int i=0;i<n;i++)
{

cin>>a;
sum=sum+a;
}
/*
Number of nodes are given thus in a tree number of edges are (n-1)
and each edge has two degree thus in tree data structure total degree should be 2*(n-1)
and this should be equal to sum of given degree.
*/
if(2*(n-1)==sum)
{

cout<<"Yes\n";
}
else{

cout<<"No\n";
}
return 0;
}
