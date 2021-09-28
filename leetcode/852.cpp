#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int len = arr.size();
        int l,r;
        l=0; r= len-1;
        int mid;
        while(l<=r)
        {
            mid = (l+r)/2;
            if(mid!=0&&mid!=len-1)
            {
                if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
                {
                    return mid;
                }
                else
                {
                    if(arr[mid]<arr[mid-1])
                     r = mid;
                    if(arr[mid]<arr[mid+1])
                     l = mid;
                }
            }
            else
            {
                return -1;
            }
            
        }
        return 0;
    }
};

int main()
{
    Solution S;
    vector<int> arr = {3,5,3,2,0};
    cout<<S.peakIndexInMountainArray(arr);
    return 0;
}