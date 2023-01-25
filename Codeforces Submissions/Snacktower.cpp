#include<stdio.h>
#include<queue>

using namespace std;

int main(){
    int n;
    priority_queue <int> in;
    scanf("%d",&n);

    int maxToFind = n;
    for(int i=0; i<n; i++){
        int tmp;
        scanf("%d",&tmp);
        in.push(tmp);

        while(maxToFind == in.top()){
            printf("%d ",in.top());
            in.pop();
            maxToFind--;
        }
        printf("\n");
    }
}

