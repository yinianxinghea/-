#include<stdio.h>


int main()
{
	const int PASS = 60;
	int score;
	printf("��ĳɼ�Ϊ��");
	scanf_s("%d", &score);
	if (score > PASS) {
		printf("��ϲ��ͨ�����ο��ԣ�\n");
	}
	else {
		printf("���ź�����û��ͨ�����ο��ԡ�\n");
	}
	printf("�ټ���Ҫ����Ŭ������");
	return 0;

}