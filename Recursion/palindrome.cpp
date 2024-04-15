#include <iostream>
using namespace std;
bool checkPalindrome(string &s,int i){
    int j=s.length()-i-1;
    if(i>j)
    return true;
    
   if(s[i]!=s[j])
   return false;
   
    else{i++;
        return checkPalindrome(s,i);}
    
}
int main()
{
    string s="abba";
    int i=0;
    
    cout<<checkPalindrome(s,i);

    
    return 0;
}
