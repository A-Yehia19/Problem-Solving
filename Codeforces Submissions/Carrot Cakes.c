#include<stdio.h>
#include<math.h>

int main(){
    int cakes, timeOfOven, ovenSize, buildTime;
    scanf("%d%d%d%d",&cakes, &timeOfOven, &ovenSize, &buildTime);
    
    int withBuild, withoutBuild;
    int CakeGroups = ceil(cakes*1.0/ovenSize);

    // without exta oven
    withoutBuild = timeOfOven * CakeGroups;
    
    // with extra oven
    int numOfOvenUsed = ceil(buildTime*1.0/timeOfOven);
    int remainingGroups = CakeGroups - numOfOvenUsed;

    int oldOvenTime = timeOfOven * ( numOfOvenUsed + floor(remainingGroups/2.0) );
    int newOvenTime = buildTime + timeOfOven * ceil(remainingGroups / 2.0);
    if(oldOvenTime>newOvenTime)
        withBuild = oldOvenTime;
    else
        withBuild = newOvenTime;


    // print
    if(withBuild<withoutBuild)
        printf("YES");
    else
        printf("NO");
}

