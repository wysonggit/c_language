//����������Ҫ�ж��Ƿ��Ǳ�����˻�������� �������Զ��˸� 
//������д
#include<stdio.h>
#include <string.h>
static char str[138]="zmqwhlcjjlhlwlzhflwbwwtyzlywjlcjxzhmzlqcykwtzsxxzsjlgczzrcxjspfzjxbxyhyyxlwyslfxjyzmyqjlzymtzhabdkybmmtywbfjkxwyljfjhfhwxjshzgchfcwjzyl";//ԭ���� �ɽ���Ϊ��������

int is_in(char *yuan,const char *shu);


void sort(const char* str1,int *cc) {
	
	if(is_in(str,str1)==1) {
		printf("�ڳ����Ѽ�¼\n");		 
//		sleep(1);
//		system("cls");
	} else {
		if(strcmp(str1,"sss")==0){
				*cc=num_back(*cc)-1;
				if(*cc==0){
					printf("Ŀǰ���ѳ�ʼ״̬�������ظ��˸�\n");
				}
			} 
		printf("�Ǹð༶��Ա�������������������\n");
		*cc=num_back(*cc)-1;
	}
}



int is_in(char *yuan,const char *shu) { //ԭʼ������
	int i=0,j=0,flag=0;
	while(i<strlen(yuan) && j<=strlen(shu)) {
		if(yuan[i]==shu[j]) { //����ַ���ͬ�������ַ�������
			i++;
			j++;
		} else {
			i=i-j+1; //�����ַ��ص��Ƚ��ʼ�Ƚϵĺ�һ���ַ�
			j=0;     //�ִ��ַ����¿�ʼ
		}
		if(j==strlen(shu)) { //���ƥ��ɹ�
			flag++;  //�ִ�����
		//	printf("���ִ���%d\n",flag);
			//break;
		}
	}
	if(flag>0) {
		//system("help"); 
		return 1;
		
	} else {
		return 0;
	}

} 
