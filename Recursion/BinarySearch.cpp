
#include <iostream>
#include<vector>
using namespace std;

int search(vector<int> &nums,int start,int end, int target) {
    // Write your code here.
    int mid=(start+end)/2;
if(start>end)
return -1;

    if (target==nums[mid])
    return mid;

    if(target>nums[mid])
    return search(nums,mid+1,end,target);

    else{
        return search(nums, start,mid-1,target);
    }
}

int main()
{
vector<int> arr={2,4,6,10,14,16};
int size=6;
int key=7;
cout<<search(arr,0,size-1,key);

    return 0;
}
