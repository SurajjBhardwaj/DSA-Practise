//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to reverse words in a given string.
    string reverseWords(string S)
    {
        // code here

        string s;
        stack<char> st;

        for (int i = S.length(); i >= 0; i--)
        {

            if (S[i] == '.')
            {

                while (!st.empty())
                {

                    s.push_back(st.top());
                    st.pop();
                }
                s += '.';
            }
            else
            {

                st.push(S[i]);
            }
        }
        while (!st.empty())
        {
            s += st.top();
            st.pop();
        }

        return s;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends


//2nd question

//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
  int maxWeightCell(int N, vector<int> Edge)
  {
      // code here
      
      if(N==1){
          
          if(Edge[0]<0){
                  return 0;
          }
      }
      
      else{
          vector<int>v(N,0);
          
          for(int i=0;i<N;i++){
              
             if(Edge[i]<0  || Edge[i]>N ){
                 
             }
             else{
                 
                v[Edge[i]]+=i;
                 
             }
          }
          
          int max=0;
          int maxi;
          for(int i=0;i<N;i++){
              
              if(v[i]>=max){
                  
                  max=v[i];
                  maxi=i;
              }
          }
          return maxi;
      }
  }
};

//{ Driver Code Starts.
int main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      int ans=obj.maxWeightCell(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends