// We are given an array and we have to return the array which is rotated onces 

#include<bits/stdc++.h>
using namespace std ;

void leftRotate(vector<int>& nums){
    for(int i = nums.size()-1 ; i > 0 ; i--){
        swap(nums[i] , nums[i-1]) ;
    }

    for(auto i : nums) cout << i << " ";
}


int main(){

vector<int>nums = {1,2,3,4,5};

leftRotate(nums) ;

    return 0 ;
}











