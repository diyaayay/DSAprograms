/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<iostream>
#include<sstream>
#include<cstring>
#include<vector>
using namespace std;


int main()
{
   string input,token;
   getline(cin,input);
   vector<string> tokens;
   stringstream ss(input);
   while (getline(ss,token,' ')){
       tokens.push_back(token);
   }
   for(auto token : tokens){
       cout<<endl<<token;
   }
   
   return 0;
}
