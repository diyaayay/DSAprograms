#include <iostream>

using namespace std;
int getIthBit(int a,int i){
    int num=1<<i;
    return (a&num)>0?1:0;
}

int main()
{
   int x,pos;
   cin>>x;
   cin>>pos;
   cout<<getIthBit(x,pos);

    return 0;
}