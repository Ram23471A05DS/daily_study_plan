#include <bits/stdc++.h>
using namespace std;
int binarysearch(vector<int>arr,int x){
    int low=0;
    int mid;
    int high=arr.size()-1;
    while(low<=high){
    mid=low+(high-low)/2;
    if(mid==x)
        return mid; 
    
    else if(mid<x)
        low=mid+1;
    
    else
    high=mid-1;

}
return-1;
}

int main(){
    vector<int>arr={1,2,3,4,5,6,7,8,9};
    int x=3;
   int result= binarysearch(arr,x);
   if(result==-1)
   cout<<"not found";
   else
   cout<<"found"<<result;
return 0;
}
