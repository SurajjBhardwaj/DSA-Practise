//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1, string s2)
    {
        // Your code here

        if (s1.length() != s2.length())
        {

            return false;
        }

        string ans = s1 + s1;

        string ans1 = "";

        int j = 0;

        for (int i = 0; i < ans.length() && j < s1.length(); i++)
        {

            if (ans[i] == s2[j])
            {

                ans1 = ans1 + s2[j];

                j++;
            }
        }

        return ans1 == s2 ? 1 : 0;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1;
        string s2;
        cin >> s1 >> s2;
        Solution obj;
        cout << obj.areRotations(s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends