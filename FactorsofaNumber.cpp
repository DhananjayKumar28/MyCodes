#include <iostream>
using namespace std;

int main(){
    int num,i;
    cin>>num;
    printf("the factors are:\n %d\n",num);
    for(i=1;i<num/2;i++){
        
        if(num%i==0){
            printf("%d\n",i);
        }
    }
    return 0;
}