#include <bits/stdc++.h>
using namespace std;

//Method-1
int gcd(int a,int b){
    int res=min(a,b);
    while(res>0){
        if(a%res==0 && b%res==0)  //It's T.C=>O(min(a,b))
        break;
        res--;
    }
    return res;
}


//Method-2              EUCLIDEAN ALLGORITHM
int gdcEuc(int a,int b){
    while(a!=b){
        if(a>b)
        a=a-b;                     //It's T.c=>O(min(a,b))
        else
        b=b-a;
    }
    return a;
}


//Method-3              OPTIMIZED Euclidean Method

int optEucgdc(int a, int b){
    if(b==0)
    return a;
    else
    return optEucgdc(b,a%b);
}

int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;

    cout<<gcd(n,m)<<endl;
    cout<<gdcEuc(n,m)<<endl;
    cout<<optEucgdc(n,m);
    return 0;
}