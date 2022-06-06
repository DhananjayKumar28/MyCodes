#include <bits/stdc++.h>
using namespace std;

//Method -1 
int mymp(pair<int,int>p1,pair<int,int>p2){
    return p1.second>p2.second;
}

void printSortedByMarks1(int roll[], int marks[], int n){
    vector<pair<int ,int >>v;

    for(int i=0; i<n; i++)
        v.push_back({roll[i],marks[i]});
    
    sort(v.begin(),v.end(),mymp);

    cout<<"METHOD-1"<<endl;
    for(int i=0; i<n; i++)
        cout<<v[i].first<<" "<<v[i].second<<endl;
    
}

//Method-2 Sorting by reversing the default order using greater() function
void printSortedByMarks2(int roll[], int marks[], int n){
    vector<pair<int ,int >>v;

    for(int i=0; i<n; i++)
        v.push_back({marks[i],roll[i]});
    
    sort(v.begin(),v.end(),greater<pair<int ,int>>());

    cout<<"METHOD-2"<<endl;

    for(int i=0; i<n; i++)
        cout<<v[i].second<<" "<<v[i].first<<endl;
    
}

//Method-3 
void printSortedByMarks3(int roll[], int marks[], int n){
    vector<pair<int ,int >>v;

    for(int i=0; i<n; i++)
        v.push_back({marks[i],roll[i]});
    
    sort(v.begin(),v.end());

    cout<<"METHOD-3"<<endl;

    for(int i=n-1; i>=0; i--)
        cout<<v[i].second<<" "<<v[i].first<<endl;
    
}

int main(){
    int roll[]={101,104,105,108,103};
    int marks[]={78,98,59,45,98};

    printSortedByMarks1(roll,marks,5);
    cout<<endl;
    printSortedByMarks2(roll,marks,5);
    cout<<endl;
    printSortedByMarks3(roll,marks,5);

    return 0;
}