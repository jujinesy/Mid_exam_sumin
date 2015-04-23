//2 ~5개 까지 임의의 수를 입력 받아 최대공약수를 도출하시오.


#include <stdio.h>
#include <math.h> // abs()

int gcd(int a, int b);


int main(void) {
	int count, num1, num2, num3, num4, num5;

	while (1)
	{
		printf("최대공약수 구할 갯수 입력(2~5)\n"); //최대 공약수 숫자 n개 숫자 입력
		scanf("%d", &count);

		if (count == 2) //2를 입력했을때
		{
			printf("숫자를 입력하세요. 예) 1 2\n");
			scanf("%d %d", &num1, &num2);
			printf("%d\n", gcd(num1, num2)); //gce가 최대 공약수
			//printf("%d\n", gcd(num1, num2)*num1*num2);
		}
		else if (count == 3) //3
		{
			printf("숫자를 입력하세요. 예) 1 2 3\n");
			scanf("%d %d %d", &num1, &num2, &num3);
			printf("%d\n", gcd(gcd(num1, num2), num3));
		}
		else if (count == 4) //4
		{
			printf("숫자를 입력하세요. 예) 1 2 3 4\n");
			scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
			printf("%d\n", gcd(gcd(gcd(num1, num2), num3), num4));
		}
		else if (count == 5) //5
		{
			printf("숫자를 입력하세요. 예) 1 2 3 4 5\n");
			scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
			printf("%d\n", gcd(gcd(gcd(gcd(num1, num2), num3), num4), num5));
		}
	}
	return 0;
}

// 최대 공약수 계산 함수
// (Euclidean Algorithm; Euclid's Algorithm)
int gcd(int a, int b) {

	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}

	return abs(a);
}