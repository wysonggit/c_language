//name跳过检查的函数 
#include"001.h"	
	
struct San namecheck(){

	#include "sap.h"
	
	for(;c<44;c++){ 
	
		
		system("cls");
		
	
		char str1[10]="0";
		
		printf("输入www即可查看已记录的人员\n\n");
		printf("输入ddd即可结束统计\n\n");
		printf("输入sss即可撤销上次操作\n\n");
		printf("请输入姓名缩写进行记录_%d：\n\n",c+1);
		
		scanf("%s",str1);
		
		//sort(*str1,*cc); 
		if(strcmp(str1,"ddd")==0) {
			break; 
		} 
		
		
		//输错退格函数 
		if(strcmp(str1,"sss")==0){
			c=num_back(&c)-1;
		} 
		
		//名单记录函数 
		
		
		if(strcmp(str1,"www")==0) {
			for(i=0,t=1;i<44;i++){	
				if(per[i].key==1){ 
					printf("已记录_%d ：%s\n",t,per[i].name);
					t++;
				}
			}
			sleep(5);
			system("cls");
			c=num_back(&c);
		}
		
		//重复退格函数
//		for(i=0;i<44;i++){
//			if(strcmp("str1",per[i].sort)){
//				if(per[i].key==1){
//					printf("已经记录，请勿重复输入！\n");
//					c=num_back(&c);
//				}	
//			}	
//		}



		//输入检查 好像可以用另一个函数替换 或者包含 在另一个函数内部 
		if(((strlen(str1))<2)||((strlen(str1))>7)){
			
			printf("输入错误！请重试！\n");
			
			sleep(2);
			
			c=num_back(&c);
			if(c==-2){
				printf("目前是已初始状态，请勿重复退格！\n");
				c=0;
			}
			
		}
		
		
		
		
		
		
		#include "if.h"
		sleep(1);
		system("cls");
	}
	

//结果打印 
    printf("\n--------已到--------\n");

	cyclein(per);
	
	printf("--------迟到--------\n");

	cycleout(per);

	printf("Tips：操作已经结束 ！\n");
}
