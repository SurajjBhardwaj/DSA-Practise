
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

        // optimize method
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

// second question reverse pair

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{

private:
    int count;

    void checkCount(vector<int> &nums, int start, int mid, int end)
    {

        // two pointers;

        int l = start, r = mid + 1;

        while (l <= mid && r <= end)
        {

            if ((long)nums[l] > (long)2 * nums[r])
            {

                count += (mid - l + 1);

                r++;
            }
            else
            {

                l++;
            }
        }

        // worst case might be nlog(n)

        sort(nums.begin() + start, nums.begin() + end + 1);
        return;
        // every step sort
    }

    void mergeSort(vector<int> &nums, int start, int end)
    {

        if (start == end)
            return;

        int mid = (start + end) / 2;

        mergeSort(nums, start, mid);

        mergeSort(nums, mid + 1, end);

        checkCount(nums, start, mid, end);

        return;
    }

public:
    int countRevPairs(int n, vector<int> nums)
    {

        // Code here

        if (!nums.size())
            return 0;

        count = 0;

        mergeSort(nums, 0, nums.size() - 1);

        return count;
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
        vector<int> arr;

        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countRevPairs(n, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends