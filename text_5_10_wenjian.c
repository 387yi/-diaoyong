#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	FILE* p = fopen("text.txt", "w");//打开文件
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		fputc('b',p);//写文件
//		fputc('i', p);
//		fputc('t', p);
//	}
//	fclose(p);、、关闭文件
//	p = NULL;
//	return 0;
//}
int main()
{
	FILE* p = fopen("text.txt", "r");
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		//printf("%c",fgetc(p));//b
		//printf("%c", fgetc(p));//i
		//printf("%c", fgetc(p));//t
	}
	fclose(p);
	p = NULL;
	return 0;
}
