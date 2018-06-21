#include <stdio.h>

int leng_str(char *string){
	int cnt=0;
	while (string[cnt]!='\0){
		++cnt;
	}
	return cnt;
}

int main(void){
        char strline[100];

        printf("Enter your string : ");
        scanf("%s",strline);
	printf("%d", leng_str(strline));
}
