#include <bits/stdc++.h>
using namespace std;

void shoW(int arr[],int n){
    for ( int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
}

int main(){
    short t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];

        for(int i=0;i<n-1;i++)
            cin>>arr[i];
        
        for(int i=0; i<n; i++){
            if(arr[i]==0){
                arr[i]=arr[i+1];
            }
            else if(arr[i]==1){
                arr[i]=arr[i+1]-1;
            }
            else if(arr[i]==2){
                arr[i]=arr[i+1]+1;
            }
        }
        shoW(arr,n);
        cout<<endl;
    }
}