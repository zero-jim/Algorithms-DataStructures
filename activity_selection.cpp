#include <algorithm>
#include <cstdio>   ///question: sorboccho koyti alada time a kaj kora jabe?
using namespace std;
struct two
{
    int a,b;
} nm[500000];

bool comp(two i,two j)
{
    if(i.b<j.b) return true;
    else return false;
}

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++) scanf("%d%d",&nm[i].a,&nm[i].b);

    sort(nm,nm+n,comp); ///ending time onujayi sorting... (1st ti starting ar 2nd ta ending)...

    int ans=0,prv_sc=0;
    for(int i=0; i<n; i++)
    {
        if(nm[i].a>prv_sc)  ///ager kono ending er chey bortoman starting ti jodi soto hoy tahole count
        {
            ans++;
            prv_sc=nm[i].b ;
        }
    }
    printf("%d",ans);
}
