#include<stdio.h>

int main(){
    int n;
    int top;
    scanf("%d%d",&n,&top);
    int bottom = 7-top;
    int acceptable = 1;

    for (int i=0;i<n;i++){
        int left, right;
        scanf("%d%d",&left,&right);

        // to make it uniquly identified the top and the bottom of the first dic must me the same in the whole tower
        // it mean that the left and right and their other sides must not be = the top or the bottom
        if(left==top || left==bottom || right==top || right==bottom)
            acceptable = 0;
    }
    if(acceptable)
        printf("YES");
    else
        printf("NO");
}