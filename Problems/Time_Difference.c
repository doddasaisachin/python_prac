#include <stdio.h>
#include <stdlib.h>
int time_to_sec(int h,int m,int s)
{
    int res;
    res=s + (60*m) + (3600*h);
    return res;
}
int main()
{
    int h1,m1,s1,h2,m2,s2;
    scanf("%d %d %d %d %d %d",&h1,&m1,&s1,&h2,&m2,&s2);
    int t1=time_to_sec(h1,m1,s1);
    int t2=time_to_sec(h2,m2,s2);
    int dif=t1-t2;
    
    int res_h=dif/3600;
    dif=dif%3600;
    int res_m=dif/60;
    dif=dif%60;
    int res_s=dif;
    printf("%d %d %d",res_h,res_m,res_s);
}