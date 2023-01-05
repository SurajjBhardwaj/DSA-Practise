// first question

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        // Your code here

        stack<char> st;
        int i = 0;
        while (s[i])
        {

            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
                i++;
            }
            else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
            {

                if (st.empty())
                {
                    return false;
                }
                if (s[i] == ')' && st.top() != '(')
                {
                    return false;
                }
                if (s[i] == '}' && st.top() != '{')
                {
                    return false;
                }
                if (s[i] == ']' && st.top() != '[')
                {
                    return false;
                }

                st.pop();
                i++;
            }
            else
            {
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
    cin >> t;
    while (t--)
    {
        cin >> a;
        Solution obj;
        if (obj.ispar(a))
            cout << "balanced" << endl;
        else
            cout << "not balanced" << endl;
    }
}
// } Driver Code Ends

// second question

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution
{
    int minEle;
    stack<int> s;
    stack<int> as;

public:
    /*returns min element from stack*/
    int getMin()
    {
        // Write your code here
        if (as.empty() == true)
            return -1;
        return as.top();
    }

    /*returns poped element from stack*/
    int pop()
    {

        if (as.empty() == true)
        {
            return -1;
        }
        if (s.top() == as.top())
        {
            as.pop();
        }
        int ans = s.top();
        s.pop();
        return ans;
    }

    /*push element x into the stack*/
    void push(int x)
    {

        if (as.empty() == true)
        {
            s.push(x);
            as.push(x);
        }
        else
        {
            s.push(x);
            if (as.top() >= s.top())
            {
                as.push(x);
            }
        }
    }
};

//{ Driver Code Starts.

int main()
{
    long long t;

    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;
        Solution ob;
        while (q--)
        {
            int qt;
            cin >> qt;
            if (qt == 1)
            {
                // push
                int att;
                cin >> att;
                ob.push(att);
            }
            else if (qt == 2)
            {
                // pop
                cout << ob.pop() << " ";
            }
            else if (qt == 3)
            {
                // getMin
                cout << ob.getMin() << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends