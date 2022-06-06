#include <iostream>
using namespace std;

//Mwthod-1:Naive Approach

int getLargest(int arr[],int n){

        for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=0;j<n;j++){
            if(arr[j]>arr[i]){
                flag=false;
                break;
            }
        }
        if(flag==true)
        return arr[i];
    }
    return -1;
}

// Method-2:Reducing Time Complexity
int getLargestEle(int arr[], int n){
    int res=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[res])
        res=i;
    }
    return arr[res];
}

int main(){
    int arr[]={5,4,1,0,5,8};
    cout<<"Largest Element is "<<getLargestEle(arr,6);

    return 0;
}