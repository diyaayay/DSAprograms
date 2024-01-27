/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<iostream>
#include<string.h>
using namespace std;



void replacespace(char *str){
    int spaces=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' ')
        spaces++;
    }
    int idx=strlen(str) -1 + 2*spaces;
    for(int i=strlen(str)-1;i>=0;i--){
        if(str[i]!=' '){
        str[idx]=str[i];
        idx--;
    }
    else{
        str[idx--]='0';
        str[idx--]='2';
        str[idx--]='%';
    }
}
}

int main()
{
   char input[10000];
   cin.getline(input,1000);
   replacespace(input);
   cout<<input;
   return 0 ;
   
}
