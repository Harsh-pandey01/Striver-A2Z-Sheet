// We are given an array and we have to find the largest element of the array

#include<bits/stdc++.h>
using namespace std ;

int main(){

 int arr[5] = {5,9,6,7,3} ;

 int ans = INT_MIN ;

 for(int i = 0 ; i < 5 ; i++){
    if(ans < arr[i]) ans = arr[i] ;
 }

 cout << "Largest Element is : " << ans ;

}