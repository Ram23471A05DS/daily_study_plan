#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={2,3,5,6,44,66};
    if(arr.size()==0){
        cout <<"unable to find";
        return 0;
    }
    int x=99;
    for(int i=0;i<arr.size();i++){
        if(x==arr[i]){
            cout<<"found";
            return 0;
        }
        
    }
cout <<"not found";
}
