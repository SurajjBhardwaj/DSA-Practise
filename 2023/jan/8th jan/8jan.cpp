//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
/*You are required to complete this function*/

class Solution
{
public:
    int maxLen(vector<int> &A, int n)
    {
        // Your code here
        int sum = 0;
        int maxlen = 0;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            sum += A[i];
            if (sum == 0)
            {
                maxlen = i + 1;
            }
            // diff concept
            else
            {
                if (m.find(sum) != m.end())
                {
                    maxlen = max(maxlen, i - m[sum]);
                }
                else
                {
                    m[sum] = i;
                }
            }
        }
        return maxlen;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i)
        {
            cin >> array1[i];
        }
        Solution ob;
        cout << ob.maxLen(array1, m) << endl;
    }
    return 0;
}

// } Driver Code Ends

// second question
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    long long countPairs(int n, int arr[], int k)
    {
        // code here

        unordered_map<int, int> m;
        long long ans = 0;

        for (int i = 0; i < n; i++)
        {

            int rem = arr[i] % k;
            ans += m[rem];
            m[rem]++;
            // cout<<ans<<" ";
        }

        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cin >> k;

        Solution ob;
        cout << ob.countPairs(n, arr, k) << endl;
    }
    return 0;
}
// } Driver Code Ends