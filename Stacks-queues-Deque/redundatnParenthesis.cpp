#include <iostream>
#include<stack>
using namespace std;

bool isRedundant(string ip){
    
    stack<char> st;
    for(auto ch:ip){
        if(ch!=')'){
        st.push(ch);}else{
        bool opFound=false;
        while(st.size()!=0 && st.top()!='('){
            if(st.top()=='+' or st.top()=='-' or st.top()=='*' or st.top()=='/')
            opFound=true;
            st.pop();
        }st.pop();
        if(opFound==false){
        return true;
    }
    }
    }
    return false;
}

int main()
{
    string s="(a*(b+c))";
    cout<<isRedundant(s);
    return 0;
}
