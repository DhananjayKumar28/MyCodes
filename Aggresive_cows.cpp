#include <bits/stdc++.h>
using namespace std;
bool check(int cows,long long positions[], int n, long long dist){
    int count=1;
    long long last_pos=positions[0];

    for(int i=0;i<n;i++){
        if(positions[i]-last_pos>=dist){
            last_pos=positions[i];
            count++;
        }

        if(count==cows){
            return true;
        }
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        long long position[n];

        for(int i=0;i<n;i++){
            cin>>position[i];
        }
        sort(position,position+n);

        long long start=position[0];
        long long end=position[n-1]-position[0];

        long long ans=-1;
        while(start<=end){
            long long mid=start+(end-start)/2;
            if(check(c,position,n,mid)){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        cout<<ans<<endl;
    }
}