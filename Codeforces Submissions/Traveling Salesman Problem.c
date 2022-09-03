#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        
        int maxX=0,minX=0;  //maxX is maximum in +ve X-axis an min in -ve axis
        int maxY=0,minY=0;  //maxY is maximum in +ve Y-axis an min in -ve axis

        //get max limit in each limit and multiply by 2 (go and return)
        for (int i = 0; i < num; i++)
        {   
            int x,y;
            scanf("%d%d",&x,&y);
            if (x>maxX && y==0)
                maxX=x;
            else if(x<minX && y==0)
                minX=x;
            else if(x==0 && y>maxY)
                maxY=y;
            else if(x==0 && y<minY)
                minY=y;
        }

        printf("%d\n",2*(maxX+maxY-minX-minY));  // we dont want the negative in minimum values so we use subtraction

    }
}