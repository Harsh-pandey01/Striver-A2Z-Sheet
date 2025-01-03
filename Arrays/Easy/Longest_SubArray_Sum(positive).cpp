// Problem Statement: Given an array and a sum k, we need to print the length of the longest subarray that sums to k.

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

int oSol(vector<int>& a, long long k) {
    int n = a.size(); // size of the array.

    int left = 0, right = 0; // 2 pointers
    long long sum = a[0];
    int maxLen = 0;
    while (right < n) {
        // if sum > k, reduce the subarray from left
        // until sum becomes less or equal to k:
        while (left <= right && sum > k) {
            sum -= a[left];
            left++;
        }

        // if sum = k, update the maxLen i.e. answer:
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

        // Move forward thw right pointer:
        right++;
        if (right < n) sum += a[right];
    }

    return maxLen;
}


int main()
{

    vector<int> nums = {2, 3, 5, 1, 9};
    int target = 10;

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



    // Optimised Approach 

    int ans = oSol(nums,target) ;

  cout << "Ans is " << ans;

    return 0;
}
