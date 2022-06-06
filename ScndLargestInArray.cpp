#include <iostream>
using namespace std;

//Find the index of second Largest element in array
//Method-1:Naive Approach
int getLargest(int arr[],int n){
    int largest=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest])
        largest=i;
    }
    return largest;
}
int secondLargest(int arr[],int n){
    int largest=getLargest(arr,n);
    int res=-1;

    for(int i=0;i<n;i++){
        if(arr[i]!=arr[largest]){
            if(res==-1)
            res=i;
            else if(arr[i]>arr[res])
            res=i;
        }
    }
    return res;
}

//Method-2:Efficient Approach

int secondLargestEle(int arr[], int n){
    int res=-1,largest=0;

    for(int i=0;i<n;i++){
        if(arr[i]>arr[largest]){
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest]){
            if(res==-1 || arr[i]>arr[res])
            res=i;
        }
    }
    return res;
}

int main(){
    int arr[]={5,-5,-8,-6,-2,-4,-1};

    cout<<secondLargestEle(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}