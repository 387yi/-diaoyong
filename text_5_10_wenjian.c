#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	FILE* p = fopen("text.txt", "w");//���ļ�
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		fputc('b',p);//д�ļ�
//		fputc('i', p);
//		fputc('t', p);
//	}
//	fclose(p);�����ر��ļ�
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
