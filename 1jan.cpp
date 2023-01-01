/*
first  question:-
buy and sell stocks so that you can get maximum profit
*/
//{ Driver Code Starts
// Program to find best buying and selling days
#include <bits/stdc++.h>

using namespace std;

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int *, int);

// Driver program to test above functions
int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n, i;
        cin >> n;
        int price[n];
        for (i = 0; i < n; i++)
            cin >> price[i];
        // function call
        stockBuySell(price, n);
    }
    return 0;
}

// } Driver Code Ends

// User function template for C++

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int price[], int n)
{
    // code here

    // need revision

    int low = 0, high = 1, count = 0;
    while (high < n)
    {
        if (price[high] > price[high - 1])
            high++;
        else
        {
            if (low != high - 1)
            {
                cout << "(" << low << " " << high - 1 << ") ";
                low = high++;
                count++;
            }
            else
                low = high++;
        }
    }
    if (price[high - 1] > price[high - 2])
        cout << "(" << low << " " << high - 1 << ") ";
    else if (count == 0)
        cout << "No Profit";
    cout << endl;
}

// 2nd question
// agressive cow gfg problem
//{ Driver Code Starts
//  Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    bool cancowsplace(vector<int> v, int n, int cows, int dis)
    {

        // this function will check whether the cows can stay at the given stalls or not

        int co = v[0];
        int count = 1;

        for (int i = 1; i < n; i++)
        {

            if ((v[i] - co) >= dis)
            {
                count++;
                co = v[i];
            }

            if (count == cows)
            {
                return true;
            }
        }
        return false;
    }

    int solve(int n, int k, vector<int> &stalls)
    {

        // Write your code here
        sort(stalls.begin(), stalls.end());

        int low, high, mid;
        int res = 0;

        low = 1;
        high = stalls[n - 1] - stalls[0];

        while (low <= high)
        {

            mid = (high + low) / 2;

            if (cancowsplace(stalls, n, k, mid))
            {
                res = mid;
                low = mid + 1;
            }

            else
            {

                high = mid - 1;
            }
        }

        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--)
    {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++)
        {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends