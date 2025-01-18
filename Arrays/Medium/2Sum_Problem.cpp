/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    //    Approach 1 :- USing 2 for loops and try to find all possible pairs of elements and check if our target is met or not
    vector<int> ans(2, 0);
    // for (int i = 0; i < nums.size() - 1; i++)
    // {
    //     for (int j = i + 1; j < nums.size(); j++)
    //     {
    //         if (nums[i] + nums[j] == target)
    //         {
    //             ans[0] = i;
    //             ans[1] = j;
    //             return ans;
    //         }
    //     }
    // }
    // ans[0] = -1;
    // ans[1] = -1;
    // return ans;

    // Approach 2:- We can use map to store the index of the element and we can easily get the index of student

    map<int, int> isPresent;

    for (int i = 0; i < nums.size(); i++)
    {
        int rem = target - nums[i];
        if (isPresent.find(rem) != isPresent.end())
        {
            ans[0] = i;
            ans[1] = isPresent[rem];
            return ans;
        }
        else
        {
            isPresent[nums[i]] = i;
        }
    }

    ans[0] = -1;
    ans[1] = -1;
    return ans;
}

int main()
{

    vector<int> nums = {3,2,4};
    int target = 6;

    vector<int> ans = twoSum(nums, target);

    for (auto i : ans)
        cout << i << " ";

    return 0;
}
