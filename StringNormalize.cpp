#include<bits/stdc++.h>
using namespace std;



string normalize(const string &sentence) {
    string copy = sentence;
    //Make the changes in copy, and return it
    
    copy[0]=toupper(copy[0]);
    
    for (int i=copy.length()-1;i>0;i--){
        if(copy[i-1]==' '){
            copy[i]=toupper(copy[i]);
        }
        else{copy[i]=tolower(copy[i]);}
        
        
    }
    
    

    return copy;
}