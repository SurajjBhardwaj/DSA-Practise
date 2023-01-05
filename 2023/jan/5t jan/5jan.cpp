//first question

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        // Your code here
        
      stack<char>st;
      int i=0;
      while(s[i]){
          
          if(s[i]=='(' || s[i]=='{' || s[i] =='[' ){
              st.push(s[i]);
              i++;
          }
          else if(s[i]==')' || s[i]=='}' || s[i]==']'){
              
              if(st.empty()){
                  return false;
              }
              if(s[i]==')' && st.top()!='('){
                  return false;
              }
              if(s[i]=='}' && st.top()!='{' ){
                  return false;
              }
              if(s[i]==']' && st.top()!='[' ){
                  return false;
              }
              
              st.pop();
              i++;
          }else{
              i++;
          }
      }
      
      
      return st.empty();
     
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends