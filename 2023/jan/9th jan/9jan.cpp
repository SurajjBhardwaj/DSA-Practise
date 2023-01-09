//longest consecutive subarray
//first question

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      
      sort(arr,arr+N);
      int count=0;
      int max=0;
      int neww;
      
      for(int i=1;i<N;i++){
          
        if(arr[i]==arr[i-1]+1){
            count++;
            if(count>max){
                max=count;
            }
        }
        else if(arr[i]==arr[i-1]){
            
          
            
        }
        
        else{
            count=0;
        }
        
        
      }
      
      return max+1;
      
      
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends


//second question
//majority element in an array

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Solve(int n, vector<int>& arr) {
        // Code here
        
        vector<int>v;
        int num1=0,num2=0,c1=0,c2=0;
        
        for(int i=0;i<n;i++){
             
            if(num1==arr[i]) c1++;
            else if(num2 == arr[i]) c2++;
            else if(c1==0) { num1 = arr[i]; c1=1;}
            else if( c2==0 ) { num2 = arr[i]; c2=1; }
            else {
                c1--;
                c2--;
            }
        }
        
        c1=0;c2=0;
        for(int i=0;i<n;i++){
            if(arr[i]==num1) c1++;
            if(arr[i]==num2) c2++;
        }
        
        if(c1>n/3)v.push_back(num1);
        if(c2>n/3)v.push_back(num2);
        
        if(v.size()==0){
            return {-1};
        }
        
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        Solution obj;

        vector<int> res = obj.Solve(n, a);

        for (auto x : res) cout << x << " ";

        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
