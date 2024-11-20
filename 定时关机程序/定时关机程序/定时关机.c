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
	printf("请输入定时关机时间（单位：分钟）\n");
	scanf("%d", &time);
	sprintf(order,"shutdown -s -t %d", time*60);
	system(order);
	printf("如果想中断关机，请输入0，如果结束程序（结束程序并不会导致定时关机结束）则输入1\n");
	do
	{
		scanf("%d", &input);
		if (input == 0)
			system("shutdown -a");
	} 
	while (input == 0);
	return 0;
}
