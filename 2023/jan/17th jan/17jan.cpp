//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> nextGreaterElement(int n, vector<int>& arr) {
        // code here
       stack<int> stk;
       vector<int> nge(n,-1);
       for(int i = 0;i< n * 2;i++){
           int curr = arr[i % n] ;
           while(!stk.empty() && arr[stk.top()] < curr){ 
              nge[stk.top()] = curr;
              stk.pop();
           }
           if(i<n)stk.push(i);
       }
       return nge;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        vector<int> ans = obj.nextGreaterElement(N, arr);
        for (auto &it : ans) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends