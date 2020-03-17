//验名函数主要判断是否是本班的人或输入错误 可设置自动退格 
//键入缩写
#include<stdio.h>
#include <string.h>
static char str[138]="zmqwhlcjjlhlwlzhflwbwwtyzlywjlcjxzhmzlqcykwtzsxxzsjlgczzrcxjspfzjxbxyhyyxlwyslfxjyzmyqjlzymtzhabdkybmmtywbfjkxwyljfjhfhwxjshzgchfcwjzyl";//原数组 可建立为姓名数组

int is_in(char *yuan,const char *shu);


void sort(const char* str1,int *cc) {
	
	if(is_in(str,str1)==1) {
		printf("在场，已记录\n");		 
//		sleep(1);
//		system("cls");
	} else {
		if(strcmp(str1,"sss")==0){
				*cc=num_back(*cc)-1;
				if(*cc==0){
					printf("目前是已初始状态，请勿重复退格！\n");
				}
			} 
		printf("非该班级人员或输入错误，请重新输入\n");
		*cc=num_back(*cc)-1;
	}
}



int is_in(char *yuan,const char *shu) { //原始，键入
	int i=0,j=0,flag=0;
	while(i<strlen(yuan) && j<=strlen(shu)) {
		if(yuan[i]==shu[j]) { //如果字符相同则两个字符都增加
			i++;
			j++;
		} else {
			i=i-j+1; //主串字符回到比较最开始比较的后一个字符
			j=0;     //字串字符重新开始
		}
		if(j==strlen(shu)) { //如果匹配成功
			flag++;  //字串出现
		//	printf("出现次数%d\n",flag);
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
