// Problem Statement: Given an array and a sum k, we need to print the length of the longest subarray that sums to k.
// Contains both positive and negative numbers


#include <bits/stdc++.h>
using namespace std;

int bSol(vector<int> &nums, int k)
{
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            sum += nums[j];
            if (sum == k)
            {
                ans = max(ans, j - i + 1);
            }
        }
    }
    return ans;
}



int main()
{

    vector<int> nums = {-1, 1, 1};
    int target = 1;

    // Bruteforce Apprach
    int bAns = bSol(nums,target) ;
    cout<< "Maximum Size is : " << bAns ;




    // Better solution is by using the concept of prefix sum

    map<int, int> present;
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        if (sum == target)
        {
            ans = max(ans, i + 1);
        }

        int rem = target - sum;
        if (present.find(rem) != present.end())
        {
            ans = max(ans, i - present[rem]);
        }

        if (present.find(sum) == present.end())
        {
            present[sum] = i;
        }
    }

    cout << "Ans is " << ans;


    return 0;
}


















