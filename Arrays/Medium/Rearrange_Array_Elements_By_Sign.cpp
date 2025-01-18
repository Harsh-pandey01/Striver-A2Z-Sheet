// We are given an array with positive and negative elements . rearrange the elements

#include<bits/stdc++.h>
using namespace std ;

int main(){

vector<int>nums = {1,2,-3,-1,-2,-3};
int size = nums.size();
  vector<int> pos;
  vector<int> neg;

for(auto i : nums){
    if(i >= 0) pos.push_back(i);
    else neg.push_back(i);
}

for(int i=0;i<size/2;i++){
      
      nums[2*i] = pos[i];
      nums[2*i+1] = neg[i];
  }

    return 0 ;
}






