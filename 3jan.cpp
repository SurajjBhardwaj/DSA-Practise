#include <bits/stdc++.h>
using namespace std;


/*
Minimize number of Students to be removed:-
In this problem we have to find the maximum length of largest increasing sequence.
*/
class Solution
{
public:
    int removeStudents(int H[], int N)
    {
        // code here

        // add to revision

        /*
        
        1. Creted a vector v inwhich we will push the first element from the given vector so that we can compare in the next call
        2. Use a for loop from the first index element to the last element index 
           a. compare the element if element of vector is greater then v.back(){ last element in the vector v}
           b. else find the index where should be inserted in vector using { lower_bound(v.begin(),v.end(),H[i])-v.begin() } for that element coz,we have to insert that element at that index.
        3.After this loop we will get the largest increasing sub-sequence
        4.Now just return the ( size of original array-size of new array v )   
          
      */
        vector<int> v;
        v.push_back(H[0]);

        for (int i = 1; i < N; i++)
        {

            if (H[i] > v.back())
            {
                v.push_back(H[i]);
            }

            else
            {
                int index = lower_bound(v.begin(), v.end(), H[i]) - v.begin();
                v[index] = H[i];
            }
        }
        return N - v.size();
    }


     
int main()
{
 
    cout << "hello world ";
 
    return 0;
}