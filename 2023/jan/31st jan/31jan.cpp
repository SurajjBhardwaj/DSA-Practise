//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    bool check(string A, string B)
    {

        int i = 0;
        while (i <= B.length())
        {

            for (int j = 0; j < A.length() + 1; j++)
            {

                if (B[i] != A[j] && j == A.length())
                {

                    return false;
                }
                if (B[i] == A[j])
                {
                    i++;
                    break;
                }
            }
        }
        return true;
    }

    int minRepeats(string A, string B)
    {

        string rep = A;
        int cnt = 1;
        while (A.size() < B.size())
        {
            A += rep;
            cnt++;
        }

        if (A.find(B) != -1)
            return cnt;
        A += rep;
        cnt++;
        if (A.find(B) != -1)
            return cnt;
        return -1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    scanf("%d ", &t);
    while (t--)
    {
        string A, B;
        getline(cin, A);
        getline(cin, B);

        Solution ob;
        cout << ob.minRepeats(A, B) << endl;
    }
    return 0;
}
// } Driver Code Ends