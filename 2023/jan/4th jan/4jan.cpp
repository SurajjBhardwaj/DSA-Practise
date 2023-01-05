//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    vector<int> v;  // for profit
    vector<int> ni; // for position of non overlapping index

    int maximum_profit(int n, vector<vector<int>> &intervals)
    {
        // Write your code here.

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> dp(n + 1, vector<int>(n + 1));

        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = -1; j < i; j++)
            {
                int one = dp[i + 1][j + 1], two = 0;
                if (j == -1 or intervals[i][0] >= intervals[j][1])
                    two = intervals[i][2] + dp[i + 1][i + 1];
                dp[i][j + 1] = max(one, two);
            }
        }
        return dp[0][0];
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> intervals(n, vector<int>(3));
        for (int i = 0; i < n; i++)
        {
            cin >> intervals[i][0] >> intervals[i][1] >> intervals[i][2];
        }
        Solution obj;
        cout << obj.maximum_profit(n, intervals) << endl;
    }
    return 0;
}

// } Driver Code Ends

// 2nd question//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.

    void merge(long long arr[], long i, long m, long j, long &ans)
    {
        long len1 = m - i + 1;
        long len2 = j - m;
        long *first = new long[len1];
        long *second = new long[len2];

        int k = i;
        for (int a = 0; a < len1; a++)
        {
            first[a] = arr[k++];
        }
        for (int a = 0; a < len2; a++)
        {
            second[a] = arr[k++];
        }
        int a = 0;
        int b = 0;
        k = i;
        while (a < len1 and b < len2)
        {
            if (first[a] <= second[b])
            {
                arr[k++] = first[a++];
            }
            else
            {
                arr[k++] = second[b++];
                ans = ans + len1 - a;
            }
        }
        while (a < len1)
        {
            arr[k++] = first[a++];
        }
        while (b < len2)
        {
            arr[k++] = second[b++];
        }
        delete[] first;
        delete[] second;
    }

    void mergeSort(long long arr[], long i, long j, long &ans)
    {
        if (j <= i)
        {
            return;
        }
        int mid = i + (j - i) / 2;
        mergeSort(arr, i, mid, ans);
        mergeSort(arr, mid + 1, j, ans);
        merge(arr, i, mid, j, ans);
    }

    long long int inversionCount(long long arr[], long long N)
    {
        long ans = 0;
        mergeSort(arr, 0, N - 1, ans);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{

    long long T;
    cin >> T;

    while (T--)
    {
        long long N;
        cin >> N;

        long long A[N];
        for (long long i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A, N) << endl;
    }

    return 0;
}

// } Driver Code Ends