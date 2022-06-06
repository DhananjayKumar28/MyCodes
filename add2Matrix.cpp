#include <iostream>
using namespace std;

int main(){
    int A[2][3]={2,3,4,5,6,7};
    int B[2][3]={4,5,3,6,2,6};

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            A[i][j]+=B[i][j];
        }
    }
    printf("Matrix Addition\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}