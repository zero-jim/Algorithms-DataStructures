#include<bits/stdc++.h>
using namespace std;
int n,val[100];
struct two
{
    int fst,snd;
}tim[100];
bool srt(two i,two j)
{
    return i.snd<j.snd;
}
int fun()
{
    int mmm[100];
    for(int i=0;i<n;i++)mmm[i]=val[i];

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(tim[j].snd<=tim[i].fst)
                mmm[i]=max(mmm[i],mmm[j]+val[i]);
        }
    }
    int mxx=1;
    for(int i=0;i<n;i++){mxx=max(mxx,mmm[i]);cout<<mmm[i]<<' ';}
    cout<<'\n';
    return mxx;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>tim[i].fst>>tim[i].snd>>val[i];

    sort(tim,tim+n,srt);

    cout<<fun();
}
