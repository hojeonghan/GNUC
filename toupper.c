#include <stdio.h>

int main(void)
{
	char strline[100];
   	
	printf("Enter your string : ");
	scanf("%s",strline); 
	
	int i;
	
	for(i=0;strline[i];i++)
	{
	// 아스키코드표 기준으로 'a'=97, 'z'=122 그 사이에 있는 값이라면 소문자로 본다.
		if ((strline[i]>='a')&&(strline[i]<='z'))
		{
			strline[i] = strline[i]-'a'+'A'; // 이렇게 2번의 연산을 할 필요가 있는가 ? 한번의 연산으로 처리할 수 있는지 고민. 
		}
	}
	printf("toupper : %s\n",strline);
	return 0;
}
