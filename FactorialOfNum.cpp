#include <bits/stdc++.h>
using namespace std;

//Method-1            ITERATIVE
int Ifact(int n){
    int res=1;
    for(int i=2 ; i<=n; i++)       //It's T.C=>O(n)  It is better than it's recursive function
        res=res*i;
    return res;
}

//Method-2            RECURSIVE

int Rfact(int n){
    if(n==0)
    return 1;                      //It's T.C=>T(n)=T(n-1)+Theta(1)
    return n*Rfact(n-1);
}

int main(){
    int n;
    cin>>n;

    cout<<Ifact(n)<<endl;
    cout<<Rfact(n);
    return 0;
}