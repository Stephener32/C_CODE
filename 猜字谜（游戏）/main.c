#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>

//������
/*
�Զ�����һ��1��100֮��������
�¶��ˣ��͹�ϲ�㣬��Ϸ����
�´��ˣ��������´��˻��ǲ�С�ˣ�������ֱ���¶�Ϊֹ
��Ϸ����һֱ�棬�����˳���Ϸ
*/

void menu()
{
	printf("********************\n");
	printf("*****1��������******\n");
	printf("*****0����Ϸ����****\n");
	printf("********************\n");
}
void CaiZiGame()
{
	int ret = rand()%100+1;  //rand�������������0-32767֮�䣬�κ���%100��1�õ���ֵ����1-100֮��
	//rand()�������ɵ���α�����������ÿ�����������ʱ������ģ�����һ������������Ժ����Ͳ��ٱ仯��
	//������Ҫͨ�� srand() ���������¡����֡�������ʱ����Ϊ������
	//ֻҪÿ�β��ֵ�ʱ�䲻ͬ����ô���ɵ����ӾͲ�ͬ�����յ������Ҳ�Ͳ�ͬ��

	while (1)
	{
		int sh = 0;
		printf("�������:>");
		scanf("%d",&sh);
		if (sh > ret)
		{
			printf("�´���\n");
		}
		else if (sh < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}
int main()
{
	int i=0;
	srand((unsigned int)time(NULL)); //time()������Ҫ����������ʱ����Ҫ��time�������д��ιʴ���null
	//time()�������ص�ֵ��ʾ���Ǵ�1970��1��1�������ֵ���ǰʱ�侭����������
	//srand������������ʱ��Ϊ��������rand()�������в���
	do
	{
		menu();  //��ӡ�˵�
		printf("ѡ����Ϸ����:\n");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			printf("������\n");
			CaiZiGame();
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (i);
	Sleep(3000);  //��ʱ3��
	system("cls"); //�����Ļ
	return 0;
}