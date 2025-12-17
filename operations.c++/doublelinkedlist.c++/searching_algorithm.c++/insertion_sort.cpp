#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={11,88,47,44,55,66};
    
    for(int i=1;i<arr.size()-1;i++){
        int key=arr[i];
        int j=i-1;
        if(arr[j]>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
            
        }
    arr[j+1]=key;

    }
    for(int i=0;i<arr.size()-1;i++)
    cout<<arr[i];
}