#include<stdlib.h>
#include<stdio.h>
int main1(){
	int a = 0;
	char  string[] = "bit666keji123";
	for (int i = 0; string[i] != '\0';i++)//ѭ����ȡ�ַ��������н�����
	{
		if (string[i] >= '0' && string[i] <= '9')//����
		{
			a++;
		}
	}
		printf("%d\n", a);//��������
		system("pause");
		return 0;
}
