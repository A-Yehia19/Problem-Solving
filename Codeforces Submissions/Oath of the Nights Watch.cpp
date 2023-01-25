#include<stdio.h>
#include<algorithm>

using namespace std;

int main(){
    int n;
    int strenght[100000];

    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&strenght[i]);
    }
    sort(strenght,strenght+n);

    int start = upper_bound(strenght, strenght+n, strenght[0]) - strenght; //get the index if the first stewards having strenght more than the least one
    int end = lower_bound(strenght, strenght+n, strenght[n-1]) - strenght; //get the index if the last stewards having strenght less than the most one + 1 

    if(start>end)
        printf("0"); // in case of all stewards have the same strenght
    else
        printf("%d",end-start); // the diffrence = the num of stewards that is included in range between the wakest and the strongest
}