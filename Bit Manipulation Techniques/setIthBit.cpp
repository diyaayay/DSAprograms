#include <iostream>

using namespace std;
int getIthBit(int a,int i){
    int num=1<<i;
    return (a&num)>0?1:0;
}
void setIthBit(int &a,int i){
    int num=1<<i;
    a=(a|num);
}
int main()
{
   int x,pos;
   cin>>x;
   cin>>pos;
   cout<<getIthBit(x,pos);
   
   setIthBit(x,pos);
   cout<<endl<<x;
    return 0;
}