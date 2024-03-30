class Solution {
public:
    int mySqrt(int x) {
        int ans=0;
        int start=0;
        int end=x;
        while(start<=end){
            long long mid=(start+end)/2;
            if(mid*mid == x)
            return mid;
            if (mid*mid <x){
            ans=mid;
            start=mid+1;}
            else 
            end=mid-1;
        }
        return ans;

    }
};