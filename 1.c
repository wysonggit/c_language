//name�������ĺ��� 
#include"001.h"	
	
struct San namecheck(){

	#include "sap.h"
	
	for(;c<44;c++){ 
	
		
		system("cls");
		
	
		char str1[10]="0";
		
		printf("����www���ɲ鿴�Ѽ�¼����Ա\n\n");
		printf("����ddd���ɽ���ͳ��\n\n");
		printf("����sss���ɳ����ϴβ���\n\n");
		printf("������������д���м�¼_%d��\n\n",c+1);
		
		scanf("%s",str1);
		
		//sort(*str1,*cc); 
		if(strcmp(str1,"ddd")==0) {
			break; 
		} 
		
		
		//����˸��� 
		if(strcmp(str1,"sss")==0){
			c=num_back(&c)-1;
		} 
		
		//������¼���� 
		
		
		if(strcmp(str1,"www")==0) {
			for(i=0,t=1;i<44;i++){	
				if(per[i].key==1){ 
					printf("�Ѽ�¼_%d ��%s\n",t,per[i].name);
					t++;
				}
			}
			sleep(5);
			system("cls");
			c=num_back(&c);
		}
		
		//�ظ��˸���
//		for(i=0;i<44;i++){
//			if(strcmp("str1",per[i].sort)){
//				if(per[i].key==1){
//					printf("�Ѿ���¼�������ظ����룡\n");
//					c=num_back(&c);
//				}	
//			}	
//		}



		//������ �����������һ�������滻 ���߰��� ����һ�������ڲ� 
		if(((strlen(str1))<2)||((strlen(str1))>7)){
			
			printf("������������ԣ�\n");
			
			sleep(2);
			
			c=num_back(&c);
			if(c==-2){
				printf("Ŀǰ���ѳ�ʼ״̬�������ظ��˸�\n");
				c=0;
			}
			
		}
		
		
		
		
		
		
		#include "if.h"
		sleep(1);
		system("cls");
	}
	

//�����ӡ 
    printf("\n--------�ѵ�--------\n");

	cyclein(per);
	
	printf("--------�ٵ�--------\n");

	cycleout(per);

	printf("Tips�������Ѿ����� ��\n");
}
