/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<vector>
using namespace std;

int lower_bound(vector<int> arr, int key){
    int s=0;
    int e=arr.size()-1;
    int ans=-1;
    while(s<=e){
        int m=(s+e)/2;
        
        if(arr[m]==key){
            ans=m;
            e=m-1;
        }else if(arr[m]>key){
        e=m-1;
    }else{
        s=m+1;
    }
    }
    return ans;
}
int upper_bound(vector<int> arr, int key){
    int s=0;
    int e=arr.size()-1;
    int ans=-1;
    while(s<=e){
        int m=(s+e)/2;
        
        if(arr[m]==key){
            ans=m;
            s=m+1;
        }else if(arr[m]<key){
        s=m+1;
    }else{
        e=m-1;
    }
    }
    return ans;
}

int main()
{
vector<int> arr={0,1,1,2,3,3,3,3,4,5,5,5,10};
int n=arr.size();


return upper_bound(arr,3)-lower_bound(arr,3)+1;
}