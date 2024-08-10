
#include <stdio.h>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;




void subsequence(string s, vector<string>&v,string output){
    if(s.size()==0){
        v.push_back(output);
        return;
    }
    char ch=s[0];
    string nip=s.substr(1);
    subsequence(nip,v,output+ch);
    subsequence(nip,v,output);
}

bool compare(string s1, string s2){
    if(s1.length()==s2.length())
    return s1<s2;
    
    return s1.length()<s2.length();
}

int main()
{
    string s="Hellodiya";
    vector<string> v;
    string output="";
    
    subsequence(s,v,output);
    sort(v.begin(),v.end(),compare);
    
    for(auto i:v){
        cout<<i<<endl;
    }

    return 0;
}