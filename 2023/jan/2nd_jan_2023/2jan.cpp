// first question
// stack using two queue

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class QueueStack
{
private:
    queue<int> q1;
    queue<int> q2;

public:
    void push(int);
    int pop();
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        QueueStack *qs = new QueueStack();

        int Q;
        cin >> Q;
        while (Q--)
        {
            int QueryType = 0;
            cin >> QueryType;
            if (QueryType == 1)
            {
                int a;
                cin >> a;
                qs->push(a);
            }
            else if (QueryType == 2)
            {
                cout << qs->pop() << " ";
            }
        }
        cout << endl;
    }
}

// } Driver Code Ends

/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

// Function to push an element into stack using two queues.
void QueueStack ::push(int x)
{
    // Your Code
    q2.push(x);
    while (!q1.empty())
    {

        q2.push(q1.front());
        q1.pop();
    }
    swap(q1, q2);
}

// Function to pop an element from stack using two queues.
int QueueStack ::pop()
{
    // Your Code

    if (q1.empty())
    {
        return -1;
    }

    int x = q1.front();
    q1.pop();

    return x;
}

// 2nd question
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Queue
{
    stack<int> s1, s2;

public:
    // INDEED revise

    void enqueue(int x)
    {

        while (!s1.empty())
        {

            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);

        while (!s2.empty())
        {

            s1.push(s2.top());
            s2.pop();
        }
    }

    int dequeue()
    {

        if (s1.empty())
        {
            return -1;
        }

        int x = s1.top();
        s1.pop();
        return x;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        Queue ob;

        int Q;
        cin >> Q;
        while (Q--)
        {
            int QueryType = 0;
            cin >> QueryType;
            if (QueryType == 1)
            {
                int a;
                cin >> a;
                ob.enqueue(a);
            }
            else if (QueryType == 2)
            {
                cout << ob.dequeue() << " ";
            }
        }
        cout << endl;
    }
}

// } Driver Code Ends