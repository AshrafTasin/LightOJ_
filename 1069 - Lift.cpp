#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        printf("Case %d: %d\n",i,abs(a-b)*4+11+a*4+8);
    }


    return 0;

}
