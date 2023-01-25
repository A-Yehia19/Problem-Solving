#include<stdio.h>

int main(){
    // the greater letter take 1 point
    // by the end the letters must have values {0,1,2}
    // then print them from lower score to the greater 
    
    int letters[3]={0,0,0};  //score of A,B,C = 0
    for(int i=0; i<3; i++){
        char input[4];
        scanf("%s",input);
        if(input[1] == '>')
            letters[input[0]-'A']++;
        else
            letters[input[2]-'A']++;
    }

    // printing
    char ans[4]="000";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if(letters[j]==i)
                ans[i]='A'+j;
        }

        // if no letter found in the range (0,1,2) -> impossible
        if(ans[i]=='0'){
            printf("Impossible");
            return 0;
        }
    }
    ans[3]='\0';
    printf("%s",ans);
}

