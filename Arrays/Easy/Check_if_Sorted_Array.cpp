// We are given an array and we have to return true if the array is sorted and rotates anitclockwiseonly once

#include<bits/stdc++.h>
using namespace std ;

bool isSortedArray(vector<int> & nums){

int dropCnt = 0 ;

for(int i = 1 ; i < nums.size() ; i++){
    if(nums[i] < nums[i-1]) dropCnt++ ;
}

if(nums[nums.size()-1] > nums[0] ) dropCnt++ ;

return dropCnt <= 1 ;

}

int main(){

vector<int>nums1 = {3,4,5,1,2};
vector<int>nums2 = {2,1,3,4};

bool isSorted = isSortedArray(nums1);

if(isSorted) cout << "YES it is sorted " ;
else cout << "Not Sorted ";

    return 0 ;
}











