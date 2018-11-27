#include<bits/stdc++.h>
using namespace std;
int binary(int rrr[],int low,int high,int item)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(item==rrr[mid])return mid;

        if(item<rrr[mid])high=mid-1;
        else low=mid+1;
    }
    return -1;
}
int main()
{
    int rrr[20]={1,2,3,4,5,6,7,8,9};
    cout<<binary(rrr,0,8,5);
}

