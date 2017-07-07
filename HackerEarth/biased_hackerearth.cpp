#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n,i,s=0;
    cin>>n;
    vector<int>l;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]!=0)
        {
            l.push_back(a[i]);
        }
        
        else
        {
            if(i!=0){
			
            
            l.erase(l.end()-1);}
        }
    }
    
    for(i=0;i<l.size();i++)
    s+=l[i];
    cout<<s;
    
    return 0;
}

