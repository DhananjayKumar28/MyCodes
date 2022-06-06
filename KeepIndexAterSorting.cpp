#include <bits/stdc++.h>
using namespace std;

void IndexAfterSorting(int arr[],int n){
    vector<pair<int,int>>v;

    for(int i=0;i<n;i++)
    v.push_back({arr[i],i});

    sort(v.begin(),v.end());

    for(int i=0;i<n;i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;

    cout<<endl;
    for(auto x:v)
        cout<<x.first<<" "<<x.second<<endl;
}

int main(){
    int arr[]={12,23,43,12,43,65};

    IndexAfterSorting(arr,6);
    return 0;
}