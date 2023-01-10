//first question :: BIT MANIPULATION

// { 'EASY' }

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    
    void clearbit(int n,int i){
        
        int musk=1<<i-1;
        musk = ~musk;
        
        n=n&musk;
        cout<<n<<" ";
        
    }
    
    void setbit(int n,int i){
        
        int musk = 1<<i-1;
        n= n | musk;
        cout<<n<<" ";
        
    }
    
    void getbit(int n,int i){
        
        if(n>>i-1 & 1==1){
            cout<<"1 ";
        }
        else{
            cout<<"0 ";
        }
        
    }
  
    void bitManipulation(int num, int i) {
        // your code here
        
        getbit(num,i);
        setbit(num,i);
        clearbit(num,i);

        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends



//SECOND QUESTION : :

// { 'EASY' }



