#include <iostream>
using namespace std;

int LinearSearch(int A[], int key,int n){
    int i;
    for(i=0;i<n;i++){
        if(A[i]==key){
            cout<<"Key found at:"<<i+1<<endl;
            return 0;
        }
    }
    cout<<"Not Found";
}

int main(){
    int N,key;
    cout<<"Enter Array size\n";
    cin>>N;
    int Arr[N];
    cout<<"\nEnter:"<<N<<" Elements int array"<<endl;
    for(int i=0;i<N;i++){
        cin>>Arr[i];
    }

    cout<<"Enter key to be searched in the array:"<<endl;
    cin>>key;

    LinearSearch(Arr,key,N);

    return 0;
}