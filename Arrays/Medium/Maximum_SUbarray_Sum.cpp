// We are given an array and we have to find the maximum subarray sum possible
//  -- Mainly Known for the kadan's Algorithm

#include<bits/stdc++.h>
using namespace std ;

int main(){

vector<int>nums = {-2,1,-3,4,-1,2,1,-5,4};
// Bruteforce approach

// Find all the possible subarrays and check for the sum of the subarray and 

// int ans = INT_MIN ;

// for(int i = 0 ; i < nums.size()-1 ; i++){
//     int sum = 0 ;
//     for(int j = i ; j < nums.size() ; j++){
//         sum+=nums[j] ;
//         if(sum > ans) ans = sum ;
//     }
// }

// cout << "MaxSum is :" << ans ;

int ans = 0 ;

int sum = 0 ;

for(int i = 0 ; i < nums.size() ; i++){
    sum+=nums[i] ;
    ans = max(ans,sum);

    if(sum < 0) sum = 0 ; 
}

cout << "Maxsum is : " << ans ;

    return 0 ;
}








