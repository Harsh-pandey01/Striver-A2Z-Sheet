// We are given an array and we have to find the second largest element in the array

#include<bits/stdc++.h>
using namespace std ;


int secondElement(vector<int>& nums){

// Step 1:- Sort the array
sort(nums.begin() , nums.end());

int maxElement = nums[nums.size() - 1 ] ;

for(int i = nums.size() -2 ; i >=0 ; i--){
    if(nums[i] != maxElement) return nums[i];
}

return -1 ;
}



int main(){

int size ;
cout << "Enter the size of array : " ;
cin >> size ;
vector<int>nums(size) ;

cout << "Enter the Elements in arrays : " <<endl ;

for(int i = 0 ; i < size ; i++){
    cin >> nums[i] ;
}

// There are two cases possible here :- First is if the duplicate are present and second is if duplicate is not present
// If we used to solve this using sorting technique and we have no duplicates then it is easy but if the duplicates are present then we have to modify the solution

// Lets suppose if we have the duplicates present in the array

int ans = secondElement(nums);

if(ans!= -1) cout << "Second Largest element is : " << ans ;
else cout << "No Second largest element is present " <<endl ;

}







