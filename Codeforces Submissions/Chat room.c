#include<stdio.h>
#include<cctype>
#include<string.h>
int main(){
    char name[100];
    scanf("%s",name);
    int len=strlen(name);
    for(int i=0 ; i<len ; i++){
        if (name[i]=='h'){
            for (int j=i+1 ; j<len ; j++){
                if(name[j]=='e'){
                    for(int k=j+1 ; k<len ; k++){
                        if(name[k]=='l'){
                            for(int z=k+1 ; z<len ; z++){
                                if(name[z]=='l'){
                                    for (int t=z+1 ; t<len ; t++){
                                        if(name[t]=='o'){
                                            printf("YES");
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("NO");
}
