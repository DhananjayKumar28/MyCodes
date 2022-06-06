#include <bits/stdc++.h>
#include <utility>

using namespace std;

void sortChar(int a[], char b[], int n){
    pair<int , char>pa[n];

    for(int i=0;i<n;i++){
        pa[i]={a[i],b[i]};
    }

    sort(pa,pa+n);

    for(int i=0;i<n;i++)
    cout<<pa[i].second<<" ";

}

int main(){
    int a[]={2,4,1,5,6,3};
    char b[]={'b','c','a','d','e','f'};

    sortChar(a,b,6);
    return 0;
}