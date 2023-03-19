//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool searchEle(int a[],int x);
bool insertEle(int a[],int y,int yi);
bool deleteEle(int a[],int z);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[10000];
		memset(a,-1,sizeof(a));
		for(int i=0;i<n;i++)
			cin>>a[i];
		int x,y,yi,z;
		cin>>x>>y>>yi>>z;
		bool b=searchEle(a,x);
		if(b==true)
			cout<<"1 ";
		else
			cout<<"0 ";
		b=insertEle(a,y,yi);
		if(b){
		if(a[yi]==y)
			cout<<"1 ";
		else
			cout<<"0 ";
		}
		else
			cout<<"0 ";
		b=deleteEle(a,z);
		if(b){
		if(!searchEle(a,z))
			cout<<"1 \n";
		else
			cout<<"0 \n";
		}
		else
			cout<<"0 \n";
	}
}
// } Driver Code Ends


/* Complete the function(s) below */

bool searchEle(int a[],int x)
{
    // add code here.
    for(int i=0;a[i]!='\0';i++)
    {
        if(x==a[i])
        {
            return 1;
        }
    }
    
    return 0;
}
bool insertEle(int a[],int y,int yi)
{
    // add code here.
    int i;
    for(i=0;a[i]!=-1;i++);
    if(yi>=i)
    {
        return 0;
    }
    a[yi]=y;
    
    return 1;
}
bool deleteEle(int a[],int z)
{
    
    int i,index;
    
    for(int i=0;a[i]!=-1;i++)
    {
        if(a[i]==z)
        {
            index=i;
        }
    }
    for(int j=index;j<i;j++)
    {
        a[j]=a[j+1];
    }
    
    return 1;
}