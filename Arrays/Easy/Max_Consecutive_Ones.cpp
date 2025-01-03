// We are given an array having numbers and ones we have to return the maximum consecutive ones

/*
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
*/

#include <bits/stdc++.h>
using namespace std;

void maxConsecutiveOnes(vector<int> &nums)
{
    int maxCnt = 0, cnt = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
            cnt++;
        else
        {
            maxCnt = max(maxCnt, cnt);
            cnt = 0;
        }
    }

    cout << "The Maximum Consecutive ones are : " << maxCnt ;
}

int main()
{

    vector<int> nums = {1, 1, 0, 1, 1, 1};

    maxConsecutiveOnes(nums);

    return 0;
}
