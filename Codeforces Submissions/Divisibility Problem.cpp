#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    long long a,b;
    for(int i=0 ; i<n ; i++){
        scanf("%I64d%I64d",&a,&b);
        while (true){
            if(a==0){
                printf("0\n");
                break;
            }else if(a%b==0){
                printf("0\n");
                break;
            }else if(a<b){
                printf("%d\n",b-a);
                break;
            }else{
                int bn=ceil(a*1.0/b);
                printf("%d\n",bn*b-a);
                break;
            }
        }
    }
}
