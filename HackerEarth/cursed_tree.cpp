#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};
node* createnode(int d)
 {
 	node* newnode = new node();
 	newnode->data=d;
 	newnode->left=newnode->right= NULL;
 	return newnode;
 	
 }
 
 node* insertnode(node* root , int d)
 {
 	if(root== NULL)
 	{
 		root= createnode(d);
 		
	 }
	else if(d<=root->data)
	root->left = insertnode(root->left,d);
	else if(d> root->data)
	root->right = insertnode(root->right,d);
	return root;
 }
int findMaxInPath(node *q, int x)
{
	node *p = q;
	int mx = -1;
	while(p->data != x)
	{
		if(p->data > x)
		{
			mx = max(mx, p->data);
			p = p->left;
		}
		else
		{
			mx = max(mx, p->data);
			p = p->right;
		}
	}
	return max(mx, x);	
}
int findMax(node* root,int x, int y)
{
	node *p = root;
	while((x < p->data and y < p->data) or (x > p->data and y > p->data))
	{
		if(x < p->data and y < p->data)
			p = p->left;
		else if(x > p->data and y > p->data)
			p = p->right;
	}
	return max(findMaxInPath(p, x), findMaxInPath(p, y));
}

int main()
{
    node *root=NULL;
    int n,i,ma=0,x,y;
    cin>>n;int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        root= insertnode(root,a[i]);
    }
    cin>>x>>y;
    int ans = findMax(root,x, y);
    cout<<ans;
    /*for(i=x;i<=y;i++)
    {
        if(search(root,i)==true)
        {
            if(ma<i)
            ma=i;
        }
    }
    cout<<ma; */
    
    
    
    
    return 0;
}

