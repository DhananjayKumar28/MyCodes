#include <bits/stdc++.h>
using namespace std;

//Method-1
int countZero(int n){
    int fact=1;
    for(int i=2;i<=n;i++){   //It's T.C=>O(n)   But this method will have overflow problem
        fact=fact*i;
    }
    int res=0;
    while(fact%10==0){
        res++;
        fact=fact/10;
    }
    return res;
}

//Method -2
int countTrailingZero(int n){
    int res=0;
    for(int i=5;i<=n;i=i*5)
    res=res+n/i;
    return res;
}


int main(){
    int n;
    cin>>n;

    cout<<"No of Trailing Zeroes is"<<" "<<countZero(n)<<endl;
    cout<<"No of Trailing Zeroes is"<<" "<<countTrailingZero(n);
}