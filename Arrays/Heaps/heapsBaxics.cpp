/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

struct heap{
    int arr[100];
    int size;
    heap(){
        size=0;
        arr[0]=-1;
    }
    
    void insert(int val){
        size+=1;
        int idx=size;
        arr[idx]=val;
        while(idx>1){
            int parent = idx/2;
            if(arr[parent]<arr[idx]){
                swap(arr[parent],arr[idx]);
                idx=parent;
            }else{
                break;
            }
        }
    }
    
    void printh(){
for(int i=1;i<=size;i++){
    cout<<arr[i]<<"\n";
}
    }
    
    void delee(){
        if(size==0){
            cout<<"Nothing to delete";
            return;
        }
    
        arr[1]=arr[size];
        size--;
        int i =1;
        while((2*i && arr[2*i]>arr[i])||(2*i+1&& arr[2*i+1]>arr[i])){
            if(arr[2*i]>arr[i]){
                swap(arr[2*i],arr[i]);
                i=2*i;
            }else{
                if(arr[2*i+1]>arr[i]){
                swap(arr[2*i],arr[i]);
                i=2*i+1;
                    
                }
                
            }
            
        }
    }
    
    
}; 

void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2*i;
    int right= 2*i + 1;
    
    if(left<n&&arr[largest]<arr[left]){
        largest=left;
    }
    if(right<n&& arr[largest]<arr[right]){
        largest=right;
    }
    
    if(i!=largest){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
    
}

int main()
{
    heap h;
    h.insert(1);
    h.insert(3);
    h.insert(2);
    h.printh();
    h.delee();
    cout<<"del";
    h.printh();
    int a[]={0,3,2,5,6,1};int n = sizeof(a) / sizeof(a[0]) - 1;
    for(int i=n/2;i>0;i--){
        heapify(a,n,i);
    }
    
    for(int i=1;i<n;i++){
        cout<<"Hea"<<"\n";
        cout<<a[i];
    }
    

    return 0;
}