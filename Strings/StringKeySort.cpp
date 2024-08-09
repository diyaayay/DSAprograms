#include <stdio.h>
#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<algorithm>


using namespace std;

string extractToken(string str,int key){
     char *s=strtok((char*)str.c_str(),"  ");
     while(key>1){
         s=strtok(NULL," ");
         key--;
     }
     return (string)s;
}

int converttoInt(string s){
    int ans=0;
    int p=1;
    int factor=1;
    for(int i=s.length()-1;i>=0;i--){
        
        int val= s[i]-'0';
        ans+= val*factor;
        factor*=10;
    }
    return ans;
    
}

bool lexicoCompare(pair<string,string>s1,pair<string,string>s2){
    string key1,key2;
    key1=s1.second;
    key2=s2.second;
    return key1<key2;
}
bool numericCompare(pair<string,string> s1, pair<string,string> s2){
    string key1,key2;
    key1=s1.second;
    key2=s2.second;
    return converttoInt(key1)<converttoInt(key2);
    
}

int main()
{
    int n;
    cin>>n;
    cin.get(); //consume extra whitesapce
    
    string temp;
    vector<string> v;
    for(int i=0;i<n;i++){
        getline(cin,temp);
        v.push_back(temp);
    }
    int key;
    string rev;
    string order;
    cin>>key>>rev>>order;
    vector<pair<string,string>> vp;
    for(int i=0;i<n;i++){
        
      vp.push_back({v[i],extractToken(v[i],key)});
        
        if(order=="numeric"){
            sort(vp.begin(),vp.end(), numericCompare);
        }else{
            sort(vp.begin(),vp.end(),lexicoCompare);
        }
        
        if(rev=="true"){
            reverse(vp.begin(),vp.end());
        }
    }
    for(int i=0;i<n;i++){
        cout<<vp[i].first<<endl;
      
    }
    
    
     return 0;
    
}