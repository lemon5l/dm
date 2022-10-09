#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(){
    int i,j,k;
    int class1[90][22]={0};
    int class2[90][22]={0};
    int class3[90][22]={0};
    int class4[90][22]={0};
    int class5[90][22]={0};
    for(i=1;i<=90;i++){
        class1[i-1][0]=i;
    }
    srand((unsigned int)time(0)*5);//初始化种子为随机值
    j=rand()%4+5;
    i=j;
    for(j=j-1;j>0;j--){
        int num = rand()%5;
        class1[j][21]=num;
    }
    j=i;
    for(j=j-1;j>=0;j--){
        for(int a=1;a<=16;a++){
            int num = rand()%20+1;
            class1[j][num]=1;
        }
    }
    for(k=1;k<=20;k++){
        int a=rand()%4;
        for(a;a>0;a--){
            int num = rand()%(90-i)+1+i;
            class1[num][k]=1;
        }
    }
    for(i=1;i<=90;i++){
        class2[i-1][0]=i;
    }
    srand((unsigned int)time(0)*10);//初始化种子为随机值
    j=rand()%4+5;
    i=j;
    for(j=j-1;j>0;j--){
        int num = rand()%5;
        class2[j][21]=num;
    }
    j=i;
    for(j=j-1;j>=0;j--){
        for(int a=1;a<=16;a++){
            int num = rand()%20+1;
            class2[j][num]=1;
        }
    }
    for(k=1;k<=20;k++){
        int a=rand()%4;
        for(a;a>0;a--){
            int num = rand()%(90-i)+1+i;
            class2[num][k]=1;
        }
    }
    for(i=1;i<=90;i++){
        class3[i-1][0]=i;
    }
    srand((unsigned int)time(0)*20);//初始化种子为随机值
    j=rand()%4+5;
    i=j;
    for(j=j-1;j>0;j--){
        int num = rand()%5;
        class3[j][21]=num;
    }
    j=i;
    for(j=j-1;j>=0;j--){
        for(int a=1;a<=16;a++){
            int num = rand()%20+1;
            class3[j][num]=1;
        }
    }
    for(k=1;k<=20;k++){
        int a=rand()%4;
        for(a;a>0;a--){
            int num = rand()%(90-i)+1+i;
            class3[num][k]=1;
        }
    }
    for(i=1;i<=90;i++){
        class4[i-1][0]=i;
    }
    srand((unsigned int)time(0)*30);//初始化种子为随机值
    j=rand()%4+5;
    i=j;
    for(j=j-1;j>0;j--){
        int num = rand()%5;
        class4[j][21]=num;
    }
    j=i;
    for(j=j-1;j>=0;j--){
        for(int a=1;a<=16;a++){
            int num = rand()%20+1;
            class4[j][num]=1;
        }
    }
    for(k=1;k<=20;k++){
        int a=rand()%4;
        for(a;a>0;a--){
            int num = rand()%(90-i)+1+i;
            class4[num][k]=1;
        }
    }
    for(i=1;i<=90;i++){
        class5[i-1][0]=i;
    }
    srand((unsigned int)time(0)*40);//初始化种子为随机值
    j=rand()%4+5;
    i=j;
    for(j=j-1;j>0;j--){
        int num = rand()%5;
        class5[j][21]=num;
    }
    j=i;
    for(j=j-1;j>=0;j--){
        for(int a=1;a<=16;a++){
            int num = rand()%20+1;
            class5[j][num]=1;
        }
    }
    for(k=1;k<=20;k++){
        int a=rand()%4;
        for(a;a>0;a--){
            int num = rand()%(90-i)+1+i;
            class5[num][k]=1;
        }
    }
    for(int a=0;a<90;a++){
        for(int b=0;b<22;b++){
            printf("%d ",class1[a][b]);
            if(b==0){
                printf("\t");
            }
        }
        printf("\n");
    }
    printf("\n");
    for(int a=0;a<90;a++){
        for(int b=0;b<22;b++){
            printf("%d ",class2[a][b]);
            if(b==0){
                printf("\t");
            }
        }
        printf("\n");
    }
    printf("\n");
    for(int a=0;a<90;a++){
        for(int b=0;b<22;b++){
            printf("%d ",class3[a][b]);
            if(b==0){
                printf("\t");
            }
        }
        printf("\n");
    }
    printf("\n");
    for(int a=0;a<90;a++){
        for(int b=0;b<22;b++){
            printf("%d ",class4[a][b]);
            if(b==0){
                printf("\t");
            }
        }
        printf("\n");
    }
    printf("\n");
    for(int a=0;a<90;a++){
        for(int b=0;b<22;b++){
            printf("%d ",class5[a][b]);
            if(b==0){
                printf("\t");
            }
        }
        printf("\n");
    }
    printf("\n");
    FILE *fpWrite=fopen("data.txt","w");  

    for(int a=0;a<90;a++){
        for(int b=0;b<22;b++){
            fprintf(fpWrite,"%d ",class1[a][b]);
        }
        fprintf(fpWrite,"\n");
    }
    for(int a=0;a<90;a++){
        for(int b=0;b<22;b++){
            fprintf(fpWrite,"%d ",class2[a][b]);
        }
        fprintf(fpWrite,"\n");
    } 
    for(int a=0;a<90;a++){
        for(int b=0;b<22;b++){
            fprintf(fpWrite,"%d ",class3[a][b]);
        }
        fprintf(fpWrite,"\n");
    } 
    for(int a=0;a<90;a++){
        for(int b=0;b<22;b++){
            fprintf(fpWrite,"%d ",class4[a][b]);
        }
        fprintf(fpWrite,"\n");
    } 
    for(int a=0;a<90;a++){
        for(int b=0;b<22;b++){
            fprintf(fpWrite,"%d ",class5[a][b]);
        }
        fprintf(fpWrite,"\n");
    } 
    fclose(fpWrite);
    return 0;
}
