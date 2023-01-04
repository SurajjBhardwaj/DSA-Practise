// first question
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void printTriangle(int n)
    {
        // code here

        for (int i = n, k = 0; i > 0; i--, k++)
        {

            for (int j = i - 1; j > 0; j--)
            {
                cout << " ";
            }
            for (int m = 0; m < 2 * k + 1; m++)
            {
                cout << "*";
            }
            cout << endl;
        }
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

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends

// second question:-

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void printTriangle(int n)
    {
        // code here

        for (int i = 0, s = n; i < n; i++, s--)
        {

            for (int k = 0; k < i; k++)
            {
                cout << " ";
            }

            for (int j = 2 * s - 1; j > 0; j--)
            {
                cout << "*";
            }
            cout << endl;
        }
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

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends

// third question

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void printDiamond(int n)
    {
        // code here
        // upper part
        for (int i = 0; i < n; i++)
        {

            for (int k = n - i - 1; k > 0; k--)
            {
                cout << " ";
            }

            for (int j = 0; j <= i; j++)
            {
                cout << "* ";
            }

            cout << endl;
        }

        // lower part

        for (int i = 0, k = n; i < n; i++, k--)
        {

            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            for (int s = k; s > 0; s--)
            {
                cout << "* ";
            }
            cout << endl;
        }
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

        Solution ob;
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends

// fourth question:-

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// Back-end complete function Template for C++
class Solution
{
public:
    void printTriangle(int n)
    {
        // code here
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }

        for (int i = n; i > 1; i--)
        {

            for (int j = i - 1; j > 0; j--)
            {
                cout << "* ";
            }
            cout << endl;
        }
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

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends

// fifth question
//{ Driver Code Starts
//  Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int minLaptops(int N, int start[], int end[])
    {
        // Code here
        int minlappy = 0;
        int count = 0;

        vector<pair<int, int>> v;

        for (int i = 0; i < N; i++)
        {

            v.push_back({start[i], 1});
            v.push_back({end[i], -1});
        }

        sort(v.begin(), v.end());

        for (auto i : v)
        {
            count = count + i.second;
            minlappy = max(count, minlappy);
        }

        return minlappy;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int start[N], end[N];
        for (int i = 0; i < N; i++)
            cin >> start[i];
        for (int i = 0; i < N; i++)
            cin >> end[i];

        Solution ob;
        cout << ob.minLaptops(N, start, end) << endl;
    }
}
// } Driver Code Ends