#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
    int rev=0;
    int temp=n;
    while(temp!=0){
        int ld;
        ld=temp%10;
        rev=rev*10+ld;
        temp=temp/10;
    }
    if(rev==n)
    return true;
    else
    return false;
}
int main(){
    int n;
    cin>>n;

    cout<<isPalindrome(n);
}