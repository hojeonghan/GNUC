#include <stdio.h>

int main(void)
{
	char strline[100];
   	
	printf("Enter your string : ");
	scanf("%s",strline); 
	
	int i;
	
	for(i=0;strline[i];i++)
	{
	// 아스키코드표 기준으로 'A'=64, 'Z'=90 그 사이에 있는 값이라면 소문자로 본다.
		if ((strline[i]>='A')&&(strline[i]<='Z'))
		{
			strline[i] = strline[i]-'A'+'a';
		}
	}
	printf("lower : %s\n",strline);
	return 0;
}
