#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int rev_num=0,rem=0;
    while(t--){
        int n;
        
        cin>>n;
        while(n!=0){
            rem=n%10;
            rev_num=rev_num*10+rem;
            n=n/10;
        }
        cout<<rev_num<<endl;
    }
}