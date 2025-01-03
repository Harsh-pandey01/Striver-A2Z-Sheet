// We are given an array and we have to return if a target element present or not
#include<bits/stdc++.h>
using namespace std ;

int main(){

vector<int>arr = {1,2,3,4,5,6,7,8,9};
int target ;
cout << "Enter the target element : "  ;
cin >> target ;

for(auto i : arr){
    if(i == target){
        cout << "Target is present" <<endl ;
        break ;
    }
}

return 0 ;

}












