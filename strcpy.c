#include <stdio.h>
#include <string.h>

char teststrcpy(char *dest, const char *src){
	char *tmp = dest;
	while(*src != '\0')
		*tmp++ = *src++;
	
	*tmp = '\0';
	return *dest;
}

 
int main(){
    char arr1[100]; // 받아오는 문자열이 100을 초과하는 경우에는 어떻게 될까 ? segmetation error가 발생하는 경우는 ...
    char arr2[100];
	//printf ("Enter string : ");
	//scanf("%[^\n]", arr2); //보통은 scanf를 사용하지 않음. (글자수가 명확하거나 악의적인 사용자가 없는 경우에만 사용하고 보통은 fgets을 사용한다. --> 이유는 입력하는 문자열의 사이즈를 제한할 수 있기 때문에)
	fputs("Enter string : ", stdout);
	fgets(arr2, sizeof(arr2), stdin); 

    teststrcpy(arr1, arr2);

	printf("copied string : %s", arr1);
    return 0;
}
