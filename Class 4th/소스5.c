#include <stdio.h>

#pragma region ��ó����
// ���α׷��� �����ϵǱ� ������ ���α׷��� ����
// ���� ó���ϴ� �����Դϴ�.
// �� ó����� �����Ϸ��� �ƴ� ����ó���⿡ ����
// ó���Ǵ� �����̱� ������ ��ɹ� ���� ; �� ������� �ʽ��ϴ�.
#pragma endregion


void main()
{
#pragma region �Ǽ��� �����ϴ� ���
	
	#pragma region ���� �Ҽ���
	// �Ҽ����� ��ġ�� �����Ͽ� �Ҽ����� ��ġ�� 
	// ��Ÿ���� ����̴�.

	// ���� �Ҽ����� �����ο� �Ҽ����� ũ�Ⱑ �����Ƿ�
	// ǥ���� �� �ִ� ������ �����Ǿ� �ֽ��ϴ�.


	#pragma endregion

	#pragma region �ε� �Ҽ���
	// �Ҽ����� ��ġ�� �������� �ʰ� �ڼ����� ��ġ�� 
	// ��Ÿ���� ����Դϴ�.

	//�����ο� �ִ� ��Ʈ�߿��� ���� ���ʿ� �ִ� ���� 
	// ǥ������ �ʽ��ϴ�.

	#pragma endregion

	#pragma region �Ǽ� ������ [10]������ [2]������ ��ȯ�ϴ� ����
	// 10���� �Ǽ� �κ��� 1.0�� �� ������ ��� 2�� ����
	// ���� ���� ����� ���� �κ��� ������ �Ʒ��� �������
	// �����մϴ�.

	//float packet = 3.125f;
	//float pi = 3.14159265f;
	
	//printf("packet ������ ��: %f\n", packet);
	//printf("pi ������ �� : %.8f\n", pi); 

	// ǥ�� ��� �Լ��� �Ҽ��� ����� �� 4byte ũ����
	// �Ǽ��� �ڷ����� �Ҽ��� ���� 6�ڸ������� ǥ���ϸ�,
	// 8 byte ũ���� �Ǽ��� �ڷ����� �Ҽ��� ���� 15�ڸ������� ǥ��˴ϴ�.


	#pragma endregion


#pragma endregion

#pragma region ���ǹ�
	//� ������ �־��� �� �ش� ���ǿ� ����
	// ������ �����ϵ��� �����ϴ� ��ɹ��Դϴ�.

	#pragma region ���迬����
	// �� ���� �ǿ������� ���� ���Ͽ� �� �����
	// 0 �Ǵ� 1�̶�� ������ ��Ÿ���� �������Դϴ�.

	 //int data[6];
	 //
	 //data[0] = 10 > 5;
	 //data[1] = 10 < 5;
	 //data[2] = 10 >= 5;
	 //data[3] = 10 <= 5;
	 //data[4] = 10 == 5;
	 //data[5] = 10 != 5;
	 //
	 //for (int i = 0; i < 6; i++)
	 //{
	 //	 printf("data%d�� ��: %d\n",i+1, data[i]);
	 //}

	 // ���� �����ڴ� ������ ���� �� 1 �̶�� ������ ��ȯ�Ǹ�,
	 // ������ Ʋ�� ���� 0����� ������ ��ȯ�˴ϴ�.

	#pragma endregion

	#pragma region if��
	// � Ư���� ������ ���Ͽ� ������ �´ٸ�
	//����Ǵ� ����Դϴ�.
	//int Hp = 10;

	//if (Hp <= 0)
	//{
	//	printf("Hp : %d\n", Hp);
	//	printf("HP�� %d���Ǿ� �׾����ϴ�.\n",Hp);
	//
	//}
	

	#pragma endregion

	#pragma region else if ��
	// if ���� �ְ��� Ʋ�� �� else if���� ������ 
	// �´ٸ� ����Ǵ� ��ɹ��Դϴ�.

	//else if���� �������� �����ϴ� ���� �����ϸ�,
	//if���� �������� ������ else if ���� �۵����մϴ�.

	//char grade = 60;
	//
	//if (grade >= 60 )
	//{
	//	printf("����� ����� A����Դϴ�.");
	//}
	//else if (grade >= 50)
	//{
	//	printf("����� ����� B����Դϴ�.");
	//}
	


	#pragma endregion

	#pragma region else��
		//if ���� else if���� ������ �� Ʋ����
		//����Ǵ� ��ɹ��Դϴ�.

		//if���� ����� ��� ���ǹ��� ������ ���� ��
		//���� ���� �ִ� ���ǹ��� ����˴ϴ�.
		//int a = 1;
		//
		//if (a >= 2)
		//{
		//	printf("a�� 2���� ũ�ų� ����.");
		//}
		//else
		//{
		//	printf("a�� 2���� ����");
		//}


	#pragma endregion

	#pragma region switch��
		//��� ����� ���� �� ������� ����Ǵ� ��ɹ��Դϴ�.


	#pragma region break ��
		//Ư���� �������� �б⸦ Ż���ϴ� ����Դϴ�.


	#pragma endregion

		//char key = 'W';
		//
		//switch (key)
		//{
		//	// switch���� �ش� ������ �Ϸ�Ǿ��� ��, break
		//	// ���� ������ ������ �ؿ� �ִ� case ������
		//	// ��� �����Ű�ٰ� �����մϴ�.
		//	case 'W':
		//		printf("��\n");
		//		break;
		//	case 'A':
		//		printf("��\n");
		//		break;
		//	case 'S':
		//		printf("��\n");
		//		break;
		//	case 'D':
		//		printf("��\n");
		//		break;
		//	default :
		//		printf("�ٸ� Ű�� �Է��� �ּ���.");
		//		break;
		//}
		// switch���� ��� �ش��ϴ� ���� ���� ������
		// ��ġ�� �̵��մϴ�.
	#pragma endregion

	#pragma region �� ������
	
	#pragma region AND������
	//	int level = 99;
	//	int exp = 10000;
	//	
	//	if (level >= 99 && exp >= 5000)
	//	{
	//		printf("������ �� �� �ֽ��ϴ�.");
	//	}

	#pragma endregion

	#pragma region OR������

		//	int LEVEL = 1;
		//	int EXP = 10;
		//	
		//	if (LEVEL >= 5 || EXP >= 10)
		//	{
		//		printf("LEVEL�� 5�̻��̰ų� EXP�� 10�̻��Դϴ�.\n");
		//	}

	
	#pragma endregion

	#pragma region NOT ������
	
		//int state = 0;
		//
		//if (!state)
		//{
		//	printf("gmae start");
		//}

	#pragma endregion

	
	

	#pragma endregion


#pragma endregion


}