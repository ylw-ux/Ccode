//查找出现次数最多的字符
//典型题目
//输入一个只包含小写字母的字符串，
//找出出现次数最多的字符以及它的出现次数。

# include<stdio.h>
int main(){
	char str[100];
    scanf("%s", str);
    int cnt[26] = {0};
    int i;
    i=0;
    while(str[i]!='\0'){
    	cnt[str[i] - 'a']++;
    	i++;
	}
	int max;
	max=0;
	for( i=0;i<26;i++){
		if(cnt[i]>max){
			max=cnt[i];
		}
	}
	for(i=0;i<26;i++){
		if(cnt[i]==max){
			printf("maxc=%c,cnt=%d",'a'+i,max);
			//'a'+i   not'a'+cnt[i]!!!!
		}
	}
	

	return 0;
}
