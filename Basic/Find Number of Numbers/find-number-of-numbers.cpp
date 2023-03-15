//{ Driver Code Starts
#include<iostream>
using namespace std;
int num(int a[], int n, int k);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		int k;
		cin>>k;
		cout<<num(a,n,k)<<endl;
	}
}
// } Driver Code Ends


/*Complete the function given below*/
int num(int arr[], int n, int k)
{
     //add code here.
    //  int sum=0;
    //  sort(arr,arr+n);
    //  int s=arr[n-1];
    //  while(s)
    //  {
    //       arr[n]
    //  }
    int sum=0;
     for(int i=0;i<n;i++)
     {
         while(arr[i])
         {
             if(arr[i]%10==k)
             {
                 sum++;
             }
             arr[i]/=10;
         }
     }
     
     return sum;
}