# include<stdio.h>
# include<stdlib.h>

void mystrlen(char *p);
int main (){
	char str[] = {'e','d','d','f','%','\0'};
	char str2[] = "hjfgsjghkjsgh*%%";
	char*str3 = (char*)malloc(sizeof(char)*10);
	int i ;
	for(i=0;i<5;i++){
		str3[i] = 'd';
	}
	str3[6]= '\0';
	for(i=0;i<5;i++){
		printf("%c",str3[i]);
	}
	mystrlen(str);
	mystrlen(str2);	
	mystrlen(str3);
	free(str3);
	return 0;
} 

void mystrlen(char *p){
	int cnt;
	for(cnt = 0;p[cnt]!='\0';cnt++);
	printf("cnt=%d\n",cnt);
}
