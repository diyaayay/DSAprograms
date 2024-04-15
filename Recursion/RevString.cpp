#include <iostream>
using namespace std;
void reverseString(string &s,int i){
    int j=s.length()-i-1;
    if(i>j)
    return;
    
    swap(s[i],s[j]);
    i++;
    reverseString(s,i);
    
}
int main()
{
    string s="Diya";
    int i=0;
    
    reverseString(s,i);
    cout<<s;
    
    return 0;
}
