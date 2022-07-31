#include<stdio.h>
#include<math.h>

int main(){
    int num,num_of_rides,cost_of_one,cost_of_special;
    scanf("%d%d%d%d",&num,&num_of_rides,&cost_of_one,&cost_of_special);
    int ans_of_ones=num*cost_of_one;
    int ans_of_special=(num/num_of_rides)*cost_of_special;
    int diff=num-(int)floor(num/num_of_rides)*num_of_rides;
    int cost_of_diff_1=diff*cost_of_one;
    int cost_of_diff_2=cost_of_special;
    if(cost_of_diff_1>cost_of_diff_2)
        ans_of_special+=cost_of_diff_2;
    else
        ans_of_special+=cost_of_diff_1;
    if(ans_of_ones<ans_of_special)
        printf("%d",ans_of_ones);
    else
        printf("%d",ans_of_special);
}
