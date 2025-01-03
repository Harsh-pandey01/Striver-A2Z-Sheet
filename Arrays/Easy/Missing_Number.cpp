// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

#include<bits/stdc++.h>
using namespace std ;

int missingNumber(vector<int>& nums) {
     int ans = 0 ; 
     for(int i = 0 ; i < nums.size() ; i++){
         ans = ans^i ;
         ans = ans^nums[i];
     }
     return ans^nums.size() ;
    }

int main(){

vector<int>nums = {9,6,4,2,3,5,7,0,1};
int missing = missingNumber(nums);

cout << "Missing Number is "<< missing <<endl ;

    return 0 ;
}
















