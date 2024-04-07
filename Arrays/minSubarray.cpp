#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

vector<int> subarraySort(vector<int> arr){
    int n=arr.size();
    int smallest = INT_MAX;
    int largest = INT_MIN;
    if(n==0 || n==1)
    return {-1,-1};
    
    if(arr[0]>arr[1])
    smallest=arr[0];
    else if(arr[n-1]<arr[n-2])
    largest=arr[n-1];
    else{
    for(int i=1;i<n-1;i++)
    {
        if (arr[i]<arr[i-1] || arr[i]>arr[i+1]){
        smallest=min(arr[i],smallest);
        largest=max(arr[i],largest);
            
        }
    }
    }
    int li=0,ri=n-1;
    while(li<=n && arr[li]<=smallest){
        li++;
        
    }
    while(ri>=0 && arr[ri]>=largest)
    ri--; 
    
    
    return {li,ri};
    
}

int main()
{
    vector<int> arr={1,2,3,4,5,8,6,7,9,10,11};
    auto p=subarraySort(arr);
    for (auto i : p)
    cout<<i;
    return 0;
}
