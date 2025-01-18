// We are given an array showing the price of the stock daily :- FInd the maximum return of the stock

#include<bits/stdc++.h>
using namespace std ;

int main(){

vector<int>nums = {7,1,5,3,6,4};
int maxProf = 0 ;
int minPrice = nums[0] ;
for(int i = 1 ; i < nums.size() ; i++){
    maxProf = max(maxProf , nums[i]-minPrice) ;
    if(nums[i] < minPrice) minPrice = nums[i] ;
}

cout << "Maxprofit is : "<<maxProf <<endl ;

    return 0 ;
}











