#include<stdio.h>
#include<string.h>
#define sign(x) -x 
int main(){

int playnumber , swapped ;
playnumber  = 10 ;
int score[10] ;

for(int i = 0 ; i < playnumber ; i ++) {score[i] = score[i]%25+1; 
					if(score[i]<0) score[i] = sign(score[i]); }

for(int i = 0 ; i < playnumber ; i ++){printf("index %d : %d \n",i +1 , score[i]);}
	

while(1){
	swapped = 0 ;
		for (int i = 0 ; i < playnumber - 1  ; i ++ )	
		{
				if(score[i]> score[i+1]){
				int temp = score[i] ;
				score[i] = score[i+1];
				score[i+1] = temp ;
				swapped = 1; }
		
		}
	if (swapped == 0 ) break ;
	}

for(int i = 0 ; i < playnumber ; i ++){printf("index %d : %d \n",i +1 , score[i]);}
 return 0 ;
}
