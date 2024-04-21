
#include<iostream>
using namespace std;

int countways(int n){
    if(n<0)
    return 0;
    if(n==0||n==1)
    return 1;
    else{
        return countways(n-1)+countways(n-2)+countways(n-3);
    }
    
}

int main(){
    int n=3;
    
    cout<<countways(n);
    return 0;
}