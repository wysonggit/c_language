//���ڳ�����һ���Ĳ��� ����С���ƽ��̵ı�����ֵ 
//�˴������������� �˳����� ����
struct San{
		char sort[15];
		char name[21];
		int key;
	}zmq,cjj,whl,lhl,wlz,hfl,wty,zly,wbw,cjx,wjl,zhm,zlq,cyk,sxx,wtz,zsj,lgc,zzr,cxj,spf,zjx,bxy,hy,yxl,wys,lfx,jy,zmy,qjl,zym,tzh,abdkym,ywb,fjk,xw,jfj,yjzg,wxj,yl,hfh,sh,chf,cwjz;
	struct San per[44];
	#include <stdio.h>

struct San cycleprintf(struct San *per);
int num_back(int *c);


//�˸��� 
int num_back(int *c){
	sleep(1);
	printf("���˸񣬿���������!\n");
    if(*c==-2){
	    printf("Ŀǰ���ѳ�ʼ״̬�������ظ��˸�\n");
	    return	*c=0;
	    system("cls");
	}
	else { 
	system("cls");
	return *c-1;
	} 
 }
 
 
 //ѭ����ӡ������� 
struct San cyclein(struct San *per){
	int i,c;
	for(i=0,c=1;i<44;i++){
		
		if(per[i].key==1){//δ��λԭ0 0==0���� ���� 
		
			printf("%2d ��%s\n",c,per[i].name);
			
			c++;
		}
	}
}
struct San cycleout(struct San *per){
	int i,c;
	for(i=0,c=1;i<44;i++){
		
		if(per[i].key==0){//δ��λԭ0 0==0���� ���� 
		
			printf("%2d ��%s\n",c,per[i].name);
			
			c++;
		}
	}
}
