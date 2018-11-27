#include<bits/stdc++.h>
using namespace std;
int ternary(int arr[], int low, int high, int item)
{
    if (low <= high)
    {
        int m1=low+(high-low)/3;
        int m2=high-(high-low)/3;
        if (item == arr[m1]) return m1;
        if(item==arr[m2]) return m2;

        if (item < arr[m1]) return ternary(arr, low, m1-1, item);
        if (item <arr[m2]) return ternary(arr,m1+1,m2-1,item);
        return ternary(arr, m2+1, high, item);
    }
    return -1;
}
int main()
{
    int arr[100]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    cout<<ternary(arr,0,15,14);
}
