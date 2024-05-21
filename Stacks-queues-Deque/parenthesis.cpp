#include <iostream>
#include<string>
#include<vector>

using namespace std;
int main()
{
    //parenthesis
string s;
vector<int> stack;
getline(cin,s);
int cnt=0;
for (auto ch:s){
  if(ch=='('){
      stack.push_back(ch);
      cnt++;
  }
  
  if(ch==')'){
       stack.pop_back();
       cnt--;
  }
}
  


if(cnt!=0)
cout<<"False";
if(cnt==0)
cout<<"True";




    return 0;
}
