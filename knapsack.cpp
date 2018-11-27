#include<bits/stdc++.h>
using namespace std;
#define mx 100
int dp[mx][mx],weight[mx],cost[mx],CAP,n;
int call(int pos,int w)
{
    if(pos==n+1) return 0;
    if(dp[pos][w]!=-1)return dp[pos][w];
    int profit1=0,profit2;
    if(w+weight[pos]<=CAP)
        profit1=cost[pos]+call(pos+1,w+weight[pos]);

    profit2=call(pos+1,w);
    dp[pos][w]=max(profit1,profit2);
    return dp[pos][w];
}
int main()
{
    memset(dp,-1,sizeof(dp));
    scanf("%d%d",&n,&CAP);
    for(int i=1; i<=n; i++)
    {
        scanf("%d%d",&weight[i],&cost[i]);
    }

    printf("\n%d\n",call(0,0));
}
