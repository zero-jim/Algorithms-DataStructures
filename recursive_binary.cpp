#include<bits/stdc++.h>
using namespace std;
int binary(int rrr[],int low,int high,int item)
{
    if(low<=high)
    {
        int mid=(low+high)/2;
        if(item==rrr[mid])return mid;

        if(item<rrr[mid])return binary(rrr,low,mid-1,item);

        return binary(rrr,mid+1,high,item);
    }
    return -1;
}
int main()
{
    int rrr[20]={1,2,3,4,5,6,7,8,9};
    cout<<binary(rrr,0,8,6);

}
