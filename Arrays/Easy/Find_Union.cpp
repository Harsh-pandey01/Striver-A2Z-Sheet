// We are given two sorted array and wee have to return the union of both but it should not contain any duplicate

#include<bits/stdc++.h>
using namespace std ;

void findUnion(vector<int>& nums1 , vector<int>& nums2){
    int i = 0 , j = 0 ;
    vector<int>ans ;

    while(i < nums1.size() && j < nums2.size()){
        if(nums1[i] <= nums2[j]){
            // if array is empty then this 
            if(ans.size() == 0) {
                ans.push_back(nums1[i++]);
            }else{
                if(ans.back()!=nums1[i]){
                    ans.push_back(nums1[i++]);
                }else{
                    i++ ;
                }
            }
        }else{
            if(ans.size() == 0) {
                ans.push_back(nums2[j++]);
            }else{
                if(ans.back()!=nums2[j]){
                    ans.push_back(nums2[j++]);
                }else{
                    j++ ;
                }
            }
        }
    }
    while(i < nums1.size()){
        if(ans.back()!=nums1[i]){
         ans.push_back(nums1[i++]);
        }else{
            i++ ;
        }
    }
     while(j < nums2.size()){
        if(ans.back()!=nums2[j]){
         ans.push_back(nums2[j++]);
        }else{
            j++ ;
        }
    }

    for(auto i : ans) cout << i <<" ";


 }

int main(){

vector<int>nums1 ={1,2,3,4,5} ;
vector<int>nums2 = {2,3,4,4,5};

findUnion(nums1 , nums2) ;

    return 0 ;
}
















