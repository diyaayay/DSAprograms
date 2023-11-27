#include <iostream>

using namespace std;
int coutSetBits(int x){
    int count=0;
    while(x>0){
        if(x&1==1)
        count++; x= x>>1;
        
        
  
    }
    
    return count;
}

int main()
{
    int x=11;
    cout<<coutSetBits(x);

    return 0;
}
