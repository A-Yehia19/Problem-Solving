#include<stdio.h>

int main(){
    int n;
    int one[5000], idx1 = 0;
    int two[5000], idx2 = 0;
    int three[5000], idx3 = 0;
    int teams = 0;

    // scanning
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        int tmp;
        scanf("%d",&tmp);
        if(tmp==1){
            one[idx1] = i;
            idx1++;
        }else if (tmp == 2){
            two[idx2] = i;
            idx2++;
        }else{
            three[idx3] = i;
            idx3++;
        }
    }

    // print number of teams (length of minimun number)
    if(idx1 < idx2)
        teams = idx1;
    else
        teams = idx2;
    if(idx3 < teams)
        teams = idx3;
    
    printf("%d\n",teams);

    // print team groups
    for(;teams && idx1 && idx2 && idx3 ;){
        idx1--;
        idx2--;
        idx3--; 
        printf("%d %d %d\n",one[idx1]+1,two[idx2]+1,three[idx3]+1);
    }
}

