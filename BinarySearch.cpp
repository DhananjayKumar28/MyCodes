#include <iostream>

using namespace std;

int isSorted(int p[],int n){
    for(int i=0;i<n;i++){
        if((p[i])>(p[i+1])){
            return 0;
        }
    }
    return 1;
}
void sort(int p[],int q){
    int min=p[0];
    for(int i=1;i<q;i++){
        if(p[i]<min){
            min=p[i];
        }
    }
}
int BinarySearch(int ptr[],int key,int low,int high){
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(key==ptr[mid]){
            cout<<"Key Found at:"<<mid;
            return 0;
        }
        else if(key<ptr[mid])
        high=mid-1;
        else
        low=mid+1;
    }
    cout<<"Key not found";
    return 0;
}
int main(){
    int A[5]={12,35,36,65,98};
    int srtd=0;
    srtd=isSorted(A,5);
    //cout<<srtd<<endl;
    
    if(srtd==1)
    BinarySearch(A,35,0,5);
    else{
        sort(A,5);
        BinarySearch(A,35,0,5);
    }
    return 0;
}