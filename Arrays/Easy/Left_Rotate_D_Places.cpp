// We are given an array and we have to rotate the given array d places to the left

#include <bits/stdc++.h>
using namespace std;

void rotateArray(vector<int> &nums, int k)
{
    // Bruteforce
    // -- This will be rotating left for d times having the complexity of O(n*d);

    // Little Optimsed :- Using an extra space and using the
    // int size = nums.size();
    // vector<int>temp(size) ;
    // for(int i = 0 ; i < size ; i++){
    //     temp[(i+d)%size] =nums[i] ;
    // }

    // Most Optimised
    /*
    -Reverse the first n-d elements
    -Reverse the second d elements
    -swap the entire array
*/

    int n = nums.size();
    int i = 0;
    if (k > n)
        k = k % n;
    int j = n - k - 1;
    while (i <= j)
    {
        swap(nums[i++], nums[j--]);
    }
    i = n - k;
    j = n - 1;
    while (i <= j)
    {
        swap(nums[i++], nums[j--]);
    }
    i = 0;
    j = n - 1;
    while (i <= j)
    {
        swap(nums[i++], nums[j--]);
    }
}

int main()
{

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int d;
    cout << "Enter the number of places want to rotate" << endl;
    cin >> d;

    rotateArray(nums, d);

    for(auto i : nums) cout << i << endl ;
    return 0;
}
