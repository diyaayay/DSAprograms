#include<bits/stdc++.h>
using namespace std;

//str is the input the string
string compressString(const string &str){   
    //complete the function to return output string
    string answer="";
    char initial;
   
    for (int i=0;i<str.length();){
         int count=0;
        char initial=str[i];
        count++;
        while(str[i+1]==str[i]){
            count++;
            i++;
        }
        i=i+1;
        answer=answer+initial+to_string(count);
    
        
    }
    
    if(str.length()<answer.length())
    return str;
    
    return answer;
  
    
   
}