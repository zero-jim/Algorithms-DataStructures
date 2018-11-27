 #include<stdio.h>
int part(int rrr[],int strt,int end)
{
    int pivot=rrr[end];///array er last value 'pivot'...
    int p=strt;
    int tmp,i;
    for(i=strt; i<end; i++)///two pointer er kaj...(i and p)
    {
        if(rrr[i]<=pivot)///pivot er chey soto value guloi bamdike nia jabo...
        {
            tmp=rrr[i];
            rrr[i]=rrr[p];///soto guloke 1 1 kore bamdike nia jassi tarpor p barassi...(evabe pivot er chey jotogulo soto value thakbe segulo sob bamdike jabe)
            rrr[p]=tmp;
            p++;
        }
    }
    tmp=rrr[p];
    rrr[p]=rrr[end];///last value totha pivot keo bamdike nia aste hobe...
    rrr[end]=tmp;
    return p;
    ///evabe 'p' tomo position a sothik value bosbe...
}
void srt(int rrr[],int strt,int end)
{
    int indx;
    if(strt<end)
    {
        indx=part(rrr,strt,end);
        srt(rrr,strt,indx-1);
        srt(rrr,indx+1,end);
    }
}
int main()
{
    int i,rrr[15]= {5,6,2,4,1,3};
    srt(rrr,0,5);
    for(i=0; i<6; i++)printf("%d ",rrr[i]);
}
