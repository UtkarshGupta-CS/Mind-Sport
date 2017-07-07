
#include<iostream>
#include<vector>
#include<string.h>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
vector < pair <int,int> > v[n+1];
for(int i=0;i<n-1;i++){
int a,b,d;
cin>>a>>b>>d;
v[a].push_back(make_pair(b,d));
v[b].push_back(make_pair(a,d));
}
int dist[n+1];//for distance
bool vis[n+1];//for keeping track of visited nodes
memset(dist,0,sizeof(dist));//setting the dist array to 0
memset(vis,false,sizeof(vis));//setting the vis array to false so none is visited intially
dist[1]=0;//here i assumed to move to move from node 1 to leaf node to find A as explained
vis[1]=true;//setting true as we started from 1
//bfs code on 1 begins----------------------------
queue <int> q; //apply bfs on node 1
q.push(1);
while(q.empty()==false){
int node=q.front();
q.pop();
for(int i=0;i<v[node].size();i++){
if(vis[v[node][i].first]==false){
vis[v[node][i].first]=true;
dist[v[node][i].first]=dist[node]+v[node][i].second;
q.push(v[node][i].first);
}
}
}
//bfs code on 1 endes-------------------------------------
int pos=max_element(dist+1,dist+n+1)-dist;//here we find the node corresponding to which we have got maximum distance
//
memset(dist,0,sizeof(dist));//again setting the dist array to 0

memset(vis,false,sizeof(vis));//again setting vis to false
dist[pos]=0;//here we start from node A whose value is tored in pos to find node B
// q.clear();
vis[pos]=true;
//bfs code on A begins---
q.push(pos);
while(q.empty()==false){
int node=q.front();
q.pop();
for(int i=0;i<v[node].size();i++){
if(vis[v[node][i].first]==false){
vis[v[node][i].first]=true;
dist[v[node][i].first]=dist[node]+v[node][i].second;
q.push(v[node][i].first);
}
}
}
//bfs code on a ends
int ds=*max_element(dist+1,dist+n+1);//cout<<"max element is "<<ds;
//finding the maxm distance
//apply cost conditions
int cost;
if(ds<100)
cost=0;
else if(ds>100&&ds<=1000)
cost=100;
else if(ds>1000&&ds<=10000)
cost=1000;
else
cost=10000;
cout<<cost<<" "<<ds<<endl;
}
}


/*#include<iostream>
#include<vector>
#include<queue>
#include<string.h>
#include<algorithm>

using namespace std;


int main()
{
    int t,x,y,d,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector< pair <int,int> > vec[n+1];
        for(i=0;i<n-1;i++)
        {
            cin>>x>>y>>n;
            vec[x].push_back(make_pair(y,d));
            vec[y].push_back(make_pair(x,d));

        }
        int dis[n+1];int pos,cost;bool vis[n+1];
        memset(dis,0,sizeof(dis));//initially setting all the distance of the array to zerro
        memset(vis,false,sizeof(vis));//initially setting all the value in the visited array as false
        dis[1]=0;
        vis[1]=true;
        queue <int> qu;
        qu.push(1);
        while(!qu.empty())
        {
            int temp=qu.front();
            qu.pop();
            for(i=0;i<vec[temp].size();i++)
            {
                if(vis[vec[temp][i].first]==false)
                {
                    vis[vec[temp][i].first]=true;
                    dis[vec[temp][i].first]=dis[temp]+vec[temp][i].second;
                    qu.push(vec[temp][i].first);

                }
            }
        }
        pos=max_element(dis+1,dis+n+1)-dis;//here we find the node corresponding to which we have got maximum distance
        //cout<<pos<<"is max posm \n";

        memset(dis,0,sizeof(dis));
        memset(vis,false,sizeof(vis));
        //qu.clear();
        dis[pos]=0;//here we start from node A whose value is stored in pos to find node B
        vis[pos]=true;
        qu.push(pos);
        while(!qu.empty())
        {
            int temp=qu.front();
            qu.pop();
            for(i=0;i<vec[temp].size();i++)
            {
                if(vis[vec[temp][i].first]==false)
                {
                    vis[vec[temp][i].first]=true;
                    dis[vec[temp][i].first]=dis[temp]+vec[temp][i].second;
                    qu.push(vec[temp][i].first);

                }
            }
        }

        int ds= *max_element(dis+1,dis+n+1);//finding the maxm distance
           if(ds<100)
             cost=0;
           else if(ds>100&&ds<=1000)
            cost=100;
           else if(ds>1000&&ds<=10000)
              cost=1000;
            else
               cost=10000;
           cout<<cost<<" "<<ds<<"\n";




    }
}
*/
