//2 ~5�� ���� ������ ���� �Է� �޾� �ִ������� �����Ͻÿ�.


#include <stdio.h>
#include <math.h> // abs()

int gcd(int a, int b);


int main(void) {
	int count, num1, num2, num3, num4, num5;

	while (1)
	{
		printf("�ִ����� ���� ���� �Է�(2~5)\n"); //�ִ� ����� ���� n�� ���� �Է�
		scanf("%d", &count);

		if (count == 2) //2�� �Է�������
		{
			printf("���ڸ� �Է��ϼ���. ��) 1 2\n");
			scanf("%d %d", &num1, &num2);
			printf("%d\n", gcd(num1, num2)); //gce�� �ִ� �����
			//printf("%d\n", gcd(num1, num2)*num1*num2);
		}
		else if (count == 3) //3
		{
			printf("���ڸ� �Է��ϼ���. ��) 1 2 3\n");
			scanf("%d %d %d", &num1, &num2, &num3);
			printf("%d\n", gcd(gcd(num1, num2), num3));
		}
		else if (count == 4) //4
		{
			printf("���ڸ� �Է��ϼ���. ��) 1 2 3 4\n");
			scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
			printf("%d\n", gcd(gcd(gcd(num1, num2), num3), num4));
		}
		else if (count == 5) //5
		{
			printf("���ڸ� �Է��ϼ���. ��) 1 2 3 4 5\n");
			scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
			printf("%d\n", gcd(gcd(gcd(gcd(num1, num2), num3), num4), num5));
		}
	}
	return 0;
}

// �ִ� ����� ��� �Լ�
// (Euclidean Algorithm; Euclid's Algorithm)
int gcd(int a, int b) {

	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}

	return abs(a);
}