#include <iostream>

using namespace std;
void clearlastibits(int &x,int i){
    int mask=(-1<<i);
    x=x&mask;
}

int main()
{
   int x,i;
   cin>>x>>i;
   clearlastibits(x,i);
   cout<<x;

    return 0;
}
