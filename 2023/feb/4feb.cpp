// first question
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};

// } Driver Code Ends
// User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        // code here
        vector<pair<int, int>> ans;

        Node *p = head;
        Node *q = head->next;

        while (q->next)
        {

            q = q->next;
        }

        while (p != q)
        {

            if (p->data + q->data == target)
            {
                ans.push_back(make_pair(p->data, q->data));
                p = p->next;
            }

            else
            {

                if (p->data + q->data < target)
                {

                    p = p->next;
                }
                else
                {
                    q = q->prev;
                }
            }
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
        int n, target;
        cin >> target >> n;
        int a;
        cin >> a;
        Node *head = new Node(a);
        Node *tail = head;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a;
            tail->next = new Node(a);
            tail->next->prev = tail;
            tail = tail->next;
        }
        Solution ob;
        auto ans = ob.findPairsWithGivenSum(head, target);
        if (ans.size() == 0)
            cout << "-1";
        else
        {
            for (int i = 0; i < ans.size(); i++)
            {
                cout << "(" << ans[i].first << "," << ans[i].second << ")"
                     << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends

// second question

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    // calculate the maximum sum with out adjacent
    int findMaxSum(int *arr, int n)
    {
        // code here
        if (n < 1)
        {
            return 0;
        }
        if (n == 1)
            return arr[0];
        /*

           we're just checking if (n>=2),then changing the value of arr[1],so that when
           they will have to compared,it will compare the previous element and the sum of current and 2nd previous
           element..

        */

        if (n >= 2)
        {

            arr[1] = max(arr[0], arr[1]);
        }

        for (int i = 2; i < n; i++)
        {
            /*
               changing the value of arrays from second position,so that each previous element wll containt the
               maximum  sum till their position
            */
            arr[i] = max(arr[i] + arr[i - 2], arr[i - 1]);
        }

        return arr[n - 1];
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends