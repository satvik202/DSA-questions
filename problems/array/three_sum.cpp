//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int arr[], int n, int x)
    {
        //Your Code Here
        int start=0,mid=1,end=n-1,i=0;
        sort(arr, arr+n);

        while(start<end){
            mid=start+1;
            end=n-1;
        while(mid<end){
            if(arr[start]+arr[mid]+arr[end]==x){
                return true;
            }
            else if(start[arr]+arr[mid]+arr[end]>x){
                end--;
            }
            else
            mid++;
        }
        start++;
        
    
    }
    return false;
    
    }
};


//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends