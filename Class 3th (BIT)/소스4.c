#include <stdio.h>

void main()
{
	#pragma region �����÷ο�
	//Ư���� ������ ǥ���� �� �ִ� �ִ��� ������
	// �Ѿ ������ �����ϴ� �����Դϴ�.

	//char character = 129;
	//printf("ĳ������ �� :%d", character);

	// �����÷ο�� ��ȣ ���� �ڷ��������� �Ȱ��� �߻��ϸ�,
	// �Ǽ��� ��, �����÷ο찡 �߻��ϸ� infinity��� ���� ��µ�
#pragma endregion

	#pragma region ����÷ο�
	//Ư���� �ڷ����� ǥ���� �� �ִ� �ּڰ��� ����
	//�� �Ѿ ������ �����ϴ� �����Դϴ�.

	//char alphabet = -130;
	//
	//printf("���ĺ��� ��: %d\n", alphabet);

	// ����÷ο�� ��ȣ���� �ڷ��������� �Ȱ��� �߻�
	//�ϸ�, �Ǽ��� �� ����÷ο찡 �߻��ϸ� 0�̶�� ���� ��µ˴ϴ�.


#pragma endregion

	#pragma region ����Ʈ ������
	//��Ʈ�� ��ġ�� �����U ���� �������� Ư���� ����ŭ
	//�̵���Ű�� ������ �Դϴ�.

	//int x = 10;
	//int y = 12;
	//
	//printf("x�� ���� �ι� �������� �̵��� ���: %d\n", x << 2);
	//printf("y�� ���� �ι� ���������� �̵��� ���: %d\n", y >> 2);

#pragma endregion

	#pragma region ��� ������
	// ���� + ����
	// int result1 <- ���� + ����
	// int result2 <- ���ͷ� ��� - ����
	// int result3 <- �ɺ��� ��� * ���ͷ� ���
	// int result4 <- ���ͷ� ��� / ���ͷ� ���
	// int result5 <- �ɺ��� ��� % �ɺ��� ���

	//int result[5];
	//
	//int a, b;
	//a = 5;
	//b = 6;
	//const int C = 12;
	//const int D = 4;
	//int A = 5;
	//const int B = 12;
	//
	//result[0] = a + b;
	//result[1] = A - b;
	//result[2] = B * A;
	//result[3] = A / A;
	//result[4] = C % D;
	//
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("result%d : %d\n", i+1, result[i]);
	//}

#pragma endregion

	#pragma region ��ȣ ���� �ڷ���
	unsigned short mineral = 65535 + 1; //�����÷ο� �߻� > �ּҰ���
	unsigned int gas = -1;

	printf("mineral : %u\n", mineral);

	printf("gas ������ ��: %u\n", gas);//����÷� > �ִ񰪵�

	printf("gas ������ ��: %d\n", gas);//%d�� -1����
#pragma endregion


}