#include <bits/stdc++.h>
using namespace std;
/*
int main(){
    string str;
    cin>>str;
    string str_rev;
    for(int i=str.size()-1;i>=0;--i){
        // M-1
        // str_rev=str_rev+str[i];//It is not preferable because str[i] is char.  and also time complexity is more.
        // M-2
        str_rev.push_back(str[i]);

    }
    if(str==str_rev){
        cout<<"palindrome<<endl";
    }
    else
    cout<<"Not palindrome<<endl";

    cout<<str_rev;
}
*/
// TO  check whether a string is palindrome ior not
int main(){
    string str;
    bool flag=true;
    cin>>str;
    int n=str.size();
    for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-i-1])
        flag=false;
    }
    if(flag)
    cout<<"Yes";
    else
    cout<<"No";
}