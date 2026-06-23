#include <stdio.h>
int main() {
    int n, key;
    int cnt = 0;
    int flag=0;
    scanf("%d", &n);
    if(n<=0){
    	printf("Worse");
    	return 0;
	}
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);
    for(int i=0;i<n;i++){
    	if(arr[i] == key){
    		flag=1;
    		printf("%d",i);
    		cnt++;
		}
	}
    
    if(flag==1){
    	printf("%d", cnt);
	}else{
		printf("Worse");
	}
    
    return 0;
}
