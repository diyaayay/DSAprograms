#include<iostream>
#include <vector>
#include <string>
using namespace std;

void solve(string s, int i, vector<string>& ans, string output){
    if(i>=s.size()){
    ans.push_back(output);
    return;}
    
    //exclude
    solve(s,i+1,ans,output);
    
    //include
    output.push_back(s[i]);
    solve(s,i+1,ans,output);
    
    
}

vector<string> substring(string s){
    vector<string> ans;
    string output;
    int i=0;
    solve(s,i,ans,output);
    
    return ans;
}

int main(){
string s="Diya";
    vector<string>ans=substring(s);
    for(auto i:ans)
    cout<<i<<" ";
    return 0;
    
    
}