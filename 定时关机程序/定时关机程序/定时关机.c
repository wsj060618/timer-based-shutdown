#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int time = 0;
	int input = 1;
	int c = 0;
	char order[100] = { 0 };
	printf("�����붨ʱ�ػ�ʱ�䣨��λ�����ӣ�\n");
	scanf("%d", &time);
	sprintf(order,"shutdown -s -t %d", time*60);
	system(order);
	printf("������жϹػ���������0������������򣨽������򲢲��ᵼ�¶�ʱ�ػ�������������1\n");
	do
	{
		scanf("%d", &input);
		if (input == 0)
			system("shutdown -a");
	} 
	while (input == 0);
	return 0;
}
