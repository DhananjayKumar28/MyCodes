//Method-1    ITERATIVE METHOD
#include <bits/stdc++.h>
using namespace std;

int countDigit1(long n){
    int count=0;
    while(n!=0){
        n=n/10;                         // It's T.C=>O(n)
        count++;
    }
    return count;
}




//Method-2       RECURSIVE MEHTOD

int countDigit2(long n){
    if(n==0)
    return 0;
    return 1+ countDigit2(n/10);          // It's T.C=> O(n);
}



//Method-3        LOGARITHMIC METHOD

int DigitNum(long n){
    return floor(log10(n)+1);           //It's T.C=> O(log(n))
}

int main(){
    int n;
    cin>>n;

    cout<<"No of digits in the number is"<<" "<<countDigit1(n)<<endl;
    cout<<countDigit2(n)<<endl;
    cout<<DigitNum(n)<<endl;
    return 0;
}