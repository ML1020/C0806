#include<stdlib.h>
#include<stdio.h>
int main1(){
	int a = 0;
	char  string[] = "bit666keji123";
	for (int i = 0; string[i] != '\0';i++)//循环读取字符，到换行结束。
	{
		if (string[i] >= '0' && string[i] <= '9')//数字
		{
			a++;
		}
	}
		printf("%d\n", a);//输出结果。
		system("pause");
		return 0;
}
