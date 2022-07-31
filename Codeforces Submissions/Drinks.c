//#include<unistd.h>
//#include<cctype>
//#include<string.h>
//#include<math.h>
#include<stdio.h>

int main(void)
{
    int n,x[101],sum=0;
    double ans;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        scanf("%d",&x[i]);
        sum+=x[i];
    }

    ans=100.0*sum/(100*n);
    printf("%lf",ans);
}
