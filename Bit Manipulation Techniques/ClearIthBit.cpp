#include <iostream>
using namespace std;
int clearIthBit(int a,int i){
    int num=1<<i;
    num= ~num;
    return (a&num);
}
int main(){
    
int x,pos;
cin>>x;
cin>>pos;

cout<<clearIthBit(x,pos);
return 0;

}