#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>

//猜字谜
/*
自动产生一个1—100之间的随机数
猜对了，就恭喜你，游戏结束
猜错了，会告诉你猜大了还是猜小了，继续猜直到猜对为止
游戏可以一直玩，除非退出游戏
*/

void menu()
{
	printf("********************\n");
	printf("*****1、猜字谜******\n");
	printf("*****0、游戏结束****\n");
	printf("********************\n");
}
void CaiZiGame()
{
	int ret = rand()%100+1;  //rand生产的随机数在0-32767之间，任何数%100加1得到的值都在1-100之间
	//rand()函数生成的是伪随机数，它在每次启动计算机时是随机的，但是一旦计算机启动以后它就不再变化了
	//所以需要通过 srand() 函数来重新“播种”，以用时间作为参数，
	//只要每次播种的时间不同，那么生成的种子就不同，最终的随机数也就不同。

	while (1)
	{
		int sh = 0;
		printf("请猜数字:>");
		scanf("%d",&sh);
		if (sh > ret)
		{
			printf("猜大了\n");
		}
		else if (sh < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	int i=0;
	srand((unsigned int)time(NULL)); //time()函数需要参数，但此时不需要对time函数进行传参故传入null
	//time()函数返回的值表示的是从1970年1月1日零点零分到当前时间经过的秒数。
	//srand（）函数，以时间为参数来对rand()函数进行播种
	do
	{
		menu();  //打印菜单
		printf("选择游戏内容:\n");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			printf("猜数字\n");
			CaiZiGame();
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (i);
	Sleep(3000);  //延时3秒
	system("cls"); //清楚屏幕
	return 0;
}