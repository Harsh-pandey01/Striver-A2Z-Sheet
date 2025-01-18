/*
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << "Enter the number of elements" << endl;
    int size;
    cin >> size;
    vector<int> nums(size);
    cout << "Enter the Elements : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    // Bruteforce Approach :
    /*
    Find the count of all the elements and hence check if the element is occuring more than n/2 times
    */

    // map<int, int> cnt;

    // for (auto i : nums)
    //     cnt[i]++;

    // for (auto i : cnt)
    // {
    //     if (i.second > size / 2)
    //     {
    //         cout << "The maximum cnt element is : " << i.first;
    //     }
    // }

    // Optimised Approach :- Choose and element and check if the element is majority

    int element = nums[0] ;
    int cnt = 1;

    for (int i = 1; i < size; i++)
    {
        if (nums[i] == element)
            cnt++;
        else
        {
            cnt--;
            if (cnt = 0)
            {
                element = nums[i];
                cnt = 1 ;
            }
        }
    }

    if(cnt > 0) {
        // check if the element is maxElement or not
        cnt = 0 ;
        for(auto i : nums){
            if(i == element) cnt++ ;
        }

        if(cnt > size/2) cout << "The maximum element is : "<< element ;

    }

    return 0;
}
