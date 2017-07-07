#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*long int sum=0;
int compute(long int a1,long int r,long int s,long int p,long int c)
{
    if((sum %p)==s)
    {
        cout<<c<<"\n";
        return 1;
    }

    else if((sum %p)>s)
    {
        cout<<"-1 \n";
        return 0;
    }

    else
    {
        sum= (sum+a1);
        a1= (a1*r)%p;
        c+=1;
        compute(a1,r,s,p,c);

    }
} */
int main()
{
    int t;
    cin>>t;
    long int r,s ,p,a1,c,sum;
    while(t--)
    {
     a1=1;c=0;sum=0;
     cin>>r>>s>>p;
     while(c<=p)
     {

         if((sum %p)==s){
                cout<<c<<"\n";
        break;}




        else{
        sum= (sum+a1);
        a1= (a1*r)%p;
        c+=1;
        }}

        if(c>p)
            cout<<"-1 \n";

    }


    return 0;
}
