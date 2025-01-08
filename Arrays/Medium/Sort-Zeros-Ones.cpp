// We are given an array of zeros onces and two , we have to sort it without any sorting algo

#include<bits/stdc++.h>
using namespace std ;
void sortZerosOnesTwos(vector<int>& nums) {
        int left = 0 ;
        int mid = 0 ;
        int high = nums.size()-1 ;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[left],nums[mid]);
                left++ ;
                mid++ ;
            }else if(nums[mid] == 1){
                mid++ ;
            }else{
                swap(nums[mid],nums[high]);
                high-- ;
            }
        }
    }

int main(){

vector<int>nums = {1,2,0,1,2,0,1,2,0,1,2,0};

sortZerosOnesTwos(nums) ;
for(auto i : nums) cout << i << " ";

    return 0 ;
}








