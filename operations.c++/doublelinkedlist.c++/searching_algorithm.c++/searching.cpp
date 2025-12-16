#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={11,22,33,44,55,66};
    int x=44;
   if( binary_search(arr.begin(),arr.end(), x))
    cout<<"found";
else
cout<<"not found";


}