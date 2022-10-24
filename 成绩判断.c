#include<stdio.h>


int main()
{
	const int PASS = 60;
	int score;
	printf("你的成绩为：");
	scanf_s("%d", &score);
	if (score > PASS) {
		printf("恭喜你通过本次考试！\n");
	}
	else {
		printf("很遗憾，你没有通过本次考试。\n");
	}
	printf("再见，要继续努力啊！");
	return 0;

}