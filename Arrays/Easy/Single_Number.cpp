//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

#include<bits/stdc++.h>
using namespace std ;

int main(){

 vector<int> nums = {4,1,2,1,2};

 int ans = 0 ;
 for(auto i : nums) ans = ans^i ;

 cout << "Single Number is : " << ans ;

    return 0 ;
}