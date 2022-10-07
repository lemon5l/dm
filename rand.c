 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(){
    int i,j,k;
    int class[50][21]={0};
    for(i=1;i<=50;i++){
        class[i][0]=i;
    }
    srand((unsigned int)time(0));//初始化种子为随机值
    j=rand()%4+5;
    i=j;
    for(j=j-1;j>=0;j--){
        for(int a=1;a<=16;a++){
            int num = rand()%20+1;
            class[j][num]=1;
        }
    }
    for(k=1;k<=20;k++){
        int a=rand()%4;
        for(a;a>0;a--){
            int num = rand()%(50-i)+1;
            class[num][k]=1;
        }
    }
    printf("%d的人缺勤0.8的课\n",i);
    for(int a=0;a<50;a++){
        for(int b=0;b<21;b++){
            printf("%d ",class[a][b]);
            if(b==0){
                printf("\t");
            }
        }
        printf("\n");
    }
    return 0;
}
