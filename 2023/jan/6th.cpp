
// first  question:-
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution
{
public:
    int maxjump(int arr[], int i, int n)
    {
        int x = arr[i];
        int max = INT32_MIN;
        int maxi = -1;
        while (x != 0)
        {
            if (i + 1 == n - 1)
            {
                return n;
            }
            else if (arr[i + 1] > max)
            {
                max = arr[i + 1];
                maxi = i + 1;
            }
            i++;
            x--;
        }
        return maxi;
    }
    int minJumps(int arr[], int n)
    {
        // Your code here
        // brute force method
        //     int i=0;
        //     int count=0;
        //     int *maxm=0;
        //     if(arr[0]==0){
        //         return -1;
        //     }
        //   while(i<n){
        //       i=maxjump(arr,i,n);
        //       count++;
        //   }
        //     return count;
      
      //optimize method
        if (arr[0] == 0 && n > 1)
            return -1;
        if (n == 1)
            return 0;
        int far = 0;
        int curr = 0;
        int jump = 0;
        for (int i = 0; i < n - 1; i++)
        {
            far = max(far, i + arr[i]);
            if (i == curr)
            {
                jump++;
                curr = far;
            }
        }
        if (curr < n - 1)
            return -1;
        return jump;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.minJumps(arr, n) << endl;
    }
    return 0;
}

// } Driver Code Ends