#include <iostream>

using namespace std;
bool PowerOfTwo(int x){
    int num=x-1;
    if(x&num ==0)
    return true;
    
    return false;
}
int main()
{
   int x,i;
   cin>>x>>i;
   if(PowerOfTwo(x));
   cout<<"Power of two";

    return 0;
}
