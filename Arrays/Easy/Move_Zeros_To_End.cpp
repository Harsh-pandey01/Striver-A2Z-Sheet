// We are given an array of zeros and onces and we have to return the array in which all the zeros are present at the end only

#include<bits/stdc++.h>
using namespace std ;

int main(){
    
vector<int>arr = {1,1,1,0,0,1,0,1,0,1,1,0,1,1};

// Approach is simple : - we can use two pointer technque in which we have a start and end pointer in which we do 
// check if the str pointer has 0 end pointer has 1 , if yes swap them easily


int s = 0 , e = arr.size()-1 ;
while(s < e){
    if(arr[s] == 0 && arr[e] == 1) {
        swap(arr[s++],arr[e--]);
    }else if(arr[s] == 1) s++ ;
    else e-- ;
}

for(auto i : arr) cout << i << " ";


    return 0 ;
}



















