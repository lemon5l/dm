#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int totle=0;
    int valid=0;
    int n=0;
    int k;
    int ran=10;
    int track=3;   //缺课人追踪次数 
    double E;
    int class_random1 [90][22]={0};
    int class_random2 [90][22]={0};
    int class_random3 [90][22]={0};
    int class_random4 [90][22]={0};
    int class_random5 [90][22]={0};
    int class_mark [90]={0};


    FILE* fpread=fopen("data.txt","r");  //打开文件
    if (fpread == NULL)
	{
		printf("file is error.");
		return -1;
	}

    for(int i=0;i<90;i++){
        for(int j=0;j<22;j++){
            fscanf(fpread, "%d", &class_random1 [i][j]);    //读取数据放置class_random1中
        }
        fscanf(fpread, "\n");
    }
    
    for(int i=0;i<90;i++){
        for(int j=0;j<22;j++){
            fscanf(fpread, "%d", &class_random2 [i][j]);    //读取数据放置class_random2中
        }
        fscanf(fpread, "\n");
    }
    
    for(int i=0;i<90;i++){
        for(int j=0;j<22;j++){
            fscanf(fpread, "%d", &class_random3 [i][j]);    //读取数据放置class_random3中
        }
        fscanf(fpread, "\n");
    }
    
    for(int i=0;i<90;i++){
        for(int j=0;j<22;j++){
            fscanf(fpread, "%d", &class_random4 [i][j]);    //读取数据放置class_random4中
        }
        fscanf(fpread, "\n");
    }
    
    for(int i=0;i<90;i++){
        for(int j=0;j<22;j++){
            fscanf(fpread, "%d", &class_random5 [i][j]);    //读取数据放置class_random5中
        }
        fscanf(fpread, "\n");
    }
    fclose(fpread);


	//class1 抽n次
    k=1;  //第k次课 
    totle = 90; 
    for(int i=0;i<90;i++){          //第一次全点 
    	if(class_random1[i][k]==1) {
    		class_mark[i] = track;
    		valid++;
		}
		else class_mark[i] = 0;
		if(class_random1[i][21]>=1 && class_mark[i] == 0){
			class_mark[i] = track;
			totle++;
		}
	}
	k++;
	
	
    while(k<=20){
    	srand((unsigned int)time(0)*ran*k);
    	
        for(int i=n-1; i>=0; i-- ) {   //随机抽点n个人
            int num = rand()%90+1;
            if(class_mark[num-1]  ==0 ) {
            	class_mark[num-1] = 1;    //1为抽到的人 
			}	
			else i++;
        }
        
        for(int i=0;i<90;i++){  //比对缺课学生 
			if(class_mark[i]>=1){
				totle++; 
				if(class_random1[i][k]==1) {
					class_mark[i] = track;
					valid++;
				}
				else class_mark[i] --;
			}
		}
        k++;
    }
    
    //class2抽点
	k=1;  //第k次课 
	int v2=0; 
	
	for(int i=0;i<90;i++){
		if(class_random2[i][21]>=1 && class_mark[i]==0) {
			class_mark[i] = track;
			totle++;
		}
	}
	
    while(k<=20){
    	srand((unsigned int)time(0)*ran*k);
        for(int i=n-1; i>=0; i-- ) {   //随机抽点n个人
            int num = rand()%90+1;
            if(class_mark[num-1]  ==0 ) {
            	class_mark[num-1] = 1;    //1为抽到的人 
			}
			else i++;	
        }
        for(int i=0;i<90;i++){  //比对缺课学生 
			if(class_mark[i]>=1){
				totle++; 
				if(class_random2[i][k]==1) {
					class_mark[i] = track;
					valid++;
					v2++;
				}
				else class_mark[i] --;
			}
		}
        k++;
    }
    
    //class3抽点
	k=1;  //第k次课 
	int v3=0; 
    for(int i=0;i<90;i++){
		if(class_random3[i][21]>=1 && class_mark[i]==0) {
			class_mark[i] = track;
			totle++;
		}
	}
	
    while(k<=20){
    	srand((unsigned int)time(0)*ran*k);
        for(int i=n-1; i>=0; i-- ) {   //随机抽点n个人 
            int num = rand()%90+1;
            if(class_mark[num-1]  ==0 ) {
            	class_mark[num-1] = 1;    //1为抽到的人 
			}	
			else i++;
        }
        for(int i=0;i<90;i++){  //比对缺课学生 
			if(class_mark[i]>=1){
				totle++; 
				if(class_random3[i][k]==1) {
					class_mark[i] = track;
					valid++;
					v3++;
				}
				else class_mark[i] --;
			}
		}
        k++;
    }
    
    
    //class4抽点
	k=1;  //第k次课 
	int v4=0; 
	for(int i=0;i<90;i++){
		if(class_random2[i][21]>=1 && class_mark[i]==0) {
			class_mark[i] = track;
			totle++;
		}
	}
	
    while(k<=20){
    	srand((unsigned int)time(0)*ran*k);
        for(int i=n-1; i>=0; i-- ) {   //随机抽点n个人
            int num = rand()%90+1;
            if(class_mark[num-1]  ==0 ) {
            	class_mark[num-1] = 1;    //1为抽到的人 
			}	
			else i++;
        }
        for(int i=0;i<90;i++){  //比对缺课学生 
			if(class_mark[i]>=1){
				totle++; 
				if(class_random4[i][k]==1) {
					class_mark[i] = track;
					valid++;
					v4++;
				}
				else class_mark[i] --;
			}
		}
        k++;
    }
    //class5抽点 
   	k=1;  //第k次课 
	int v5=0; 
	for(int i=0;i<90;i++){
		if(class_random2[i][21]>=1 && class_mark[i]==0) {
			class_mark[i] = track;
			totle++;
		}
	}
	
    while(k<=20){
    	srand((unsigned int)time(0)*ran*k);
        for(int i=n-1; i>=0; i-- ) {   //随机抽点n个人
            int num = rand()%90+1;
            if(class_mark[num-1]  ==0 ) {
            	class_mark[num-1] = 1;    //1为抽到的人 
			}
			else i++;	
        }
        for(int i=0;i<90;i++){  //比对缺课学生 
			if(class_mark[i]>=1){
				totle++; 
				if(class_random5[i][k]==1) {
					class_mark[i] = track;
					valid++;
					v5++;
				}
				else class_mark[i] --;
			}
		}
        k++;
    }
    E=valid*1.0/totle;
    printf("%lf",E);
return 0;

}
