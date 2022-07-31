#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
#include<math.h>
#include <numeric> 

using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	while (t--)
	{
		char grid[101][101];
		int x,y,n;
		scanf("%d%d%d",&x,&y,&n);
		//make grid all dots
		for (int i = 0; i < x; i++){
			for (int j = 0; j < y; j++){
				grid[i][j]='.';
			}			
		}

		while(n--){
			int x1,y1,x2,y2;
			char lol[3];
			scanf("%d%d%d%d%s",&x1,&y1,&x2,&y2,&lol);
			char tmp=lol[0];
			for (int i = x1-1; i < x2; i++){
				for (int j = y1-1; j < y2; j++){
					grid[i][j]=tmp;
				}			
			}
		}

		//print
		for (int i = 0; i < x; i++){
			for (int j = 0; j < y; j++){
				printf("%c",grid[i][j]);
			}
			printf("\n");			
		}
		
	}
	
}
