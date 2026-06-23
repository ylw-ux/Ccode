#include<stdio.h>


void mystrrev(char*p,int strlen);
int mystrlen(char *p);
int main(){
	char str[] ="abcefg";
	int len =mystrlen(str);
	mystrrev(str,len);
	printf("%s",str);
	return 0;
	
}

void mystrrev(char*p,int strlen){
	for(int i=0;i<strlen/2;i++){
		char temp =p[strlen-1-i];
		p[strlen-1-i] = p[i];
		p[i] = temp;
	}
}

int mystrlen(char *p){
	int cnt;
	for(cnt = 0;p[cnt]!='\0';cnt++);
	printf("cnt=%d\n",cnt);
	return cnt;
}
