#include <bits/stdc++.h>
using namespace std;

//Method-1 

int lcm(int a,int b){
    int res=max(a,b);
    while(true){
        if(res%a==0 && res%b==0)          //It's T.C=>O(a*b-max(a,b))
        return res;
        res++;
    }
    return res;
}

//Method-2       Based on formula [a*b=gcd(a,b)*lcm(a,b)]

int gcd(int a, int b){
    if(b==0)
    return a;                           //It's T.C=>O(nlog(min(a,b)))
    else
    return gcd(b,a%b);
}
int lcm2(int a, int b){
    return (a*b)/gcd(a,b);
}

int main(){
    int n,m;
    cin>>n;                              
    cin>>m;

    cout<<"LCM is"<<" "<<lcm(n,m)<<endl;
    cout<<lcm2(n,m);
}