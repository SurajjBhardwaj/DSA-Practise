//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Converts arr[0..n-1] to reduced form.
	void convert(int arr[], int n) {
	    // code here
	    
	    //brute force method
	   int min=INT32_MAX;
	   int a[n];
	    
	   
	   for(int i=0;i<n;i++){
	        
	       if(arr[i]<min){
	           min=arr[i];
	       }
	       a[i]=arr[i];
	        
	   }
	    
	   sort(a,a+n);
	   int k=0;
	    
	   for(int i=0;i<n;i++){
	        
	       auto itr=find(a, a+ n, arr[i]);
	       arr[i]=distance(a,itr);
	        
	   }
	   
	  
	    //optimized method
	   
	   vector<pair<int,int>> v;
	    for(int i=0;i<n;i++)
	    {
	        v.push_back({arr[i],i});
	    }
	    sort(v.begin(),v.end());
	    for(int i=0;i<n;i++)
	    {
	        arr[v[i].second]=i;
	    }
	   
	    
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.convert(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends