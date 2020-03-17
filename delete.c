//用于撤销上一步的操作 ，减小控制进程的变量的值 
//此处设置两个函数 退出程序 撤销
struct San{
		char sort[15];
		char name[21];
		int key;
	}zmq,cjj,whl,lhl,wlz,hfl,wty,zly,wbw,cjx,wjl,zhm,zlq,cyk,sxx,wtz,zsj,lgc,zzr,cxj,spf,zjx,bxy,hy,yxl,wys,lfx,jy,zmy,qjl,zym,tzh,abdkym,ywb,fjk,xw,jfj,yjzg,wxj,yl,hfh,sh,chf,cwjz;
	struct San per[44];
	#include <stdio.h>

struct San cycleprintf(struct San *per);
int num_back(int *c);


//退格函数 
int num_back(int *c){
	sleep(1);
	printf("已退格，可重新输入!\n");
    if(*c==-2){
	    printf("目前是已初始状态，请勿重复退格！\n");
	    return	*c=0;
	    system("cls");
	}
	else { 
	system("cls");
	return *c-1;
	} 
 }
 
 
 //循环打印输出函数 
struct San cyclein(struct San *per){
	int i,c;
	for(i=0,c=1;i<44;i++){
		
		if(per[i].key==1){//未到位原0 0==0成立 进入 
		
			printf("%2d ：%s\n",c,per[i].name);
			
			c++;
		}
	}
}
struct San cycleout(struct San *per){
	int i,c;
	for(i=0,c=1;i<44;i++){
		
		if(per[i].key==0){//未到位原0 0==0成立 进入 
		
			printf("%2d ：%s\n",c,per[i].name);
			
			c++;
		}
	}
}
