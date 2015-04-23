//임의의 두 숫자를 표준입력장치를 통해 입력 받아 두 숫자 사이에 존재하는 가장 큰 소수(prime number)를 화면에 출력.

#include<stdio.h>


int prime['ab'];

void trial(int input, int *result)
{
	int getout, b, isprime;
	for (getout = 0; getout == 0; getout++)
	{
		if (input % 2 == 0 && input != 2) //소수를 찾기 위해서 사용됨. 2를 나눠서 
		{
			/////////////////////////////////////////
			*result = 0; //값이 0이될경우는 소수가 아니라고 인식
			printf("%d는 소수 아님\n", input);
			/////////////////////////////////////////
			continue;
		}
		isprime = 1;
		for (b = 2; b*b <= input; b++) //루트개념: 소수 찾을 때 사용됨 (교수님 찾앗어요. 안고칠꺼에요. 저도 뭔지 몰라요.)
		{
			if (input%b == 0)
			{
				isprime = 0;
				break;
			}
		}
		if (isprime)
		{
			*result = 1; //값이 1이 될 경우는 소수로 인식한다.
			printf("%d는 소수\n", input);
		}
		else
		{
			*result = 0;
			printf("%d는 소수 아님\n", input);
		}

	}
}

int main() //시작
{
	int result; //소수일때 값이 1, 아닐때는 0
	int low, high, i; //사용자가 입력한 낮은 값이 low, 높은 값이 high

	printf("두 숫자를 입력하세요. 예)12 67\n"); //검은화면 뜨는 거
	scanf("%d %d", &low, &high); //입력하는거


	for (i = high; i >= low; i--) //i의 변수 
		//for (i = low; i >= high; i++) //i의 변수 prime 소수가 가장 작을때
	{
		trial(i, &result); //i(high값)이 low값이 될 때 까지 빼기
		if (result == 1)
			break;
	}
	getchar(); //팍 안꺼지게

	return 0; //종료
}