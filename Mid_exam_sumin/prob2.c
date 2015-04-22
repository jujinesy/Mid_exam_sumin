//컴퓨터의 수행 속도를 알아보기 위하여 '1'을 입력하면 0에서부터 숫자를 증가시키고 있다가 '2'를 입력하면 지금까지 센 숫자를 화면에 출력//

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <process.h>
unsigned int WINAPI ThreadFunction(void *arg);
int count, flag;

int main()
{
	HANDLE hThread = NULL;
	DWORD dwThreadID = NULL;
	int input;
	hThread = (HANDLE)_beginthreadex(NULL, 0, ThreadFunction, NULL, 0, (unsigned*)&dwThreadID);
	if (hThread == 0)
		printf("error");
	printf("생성된 쓰레드의 핸들 : %d\n", hThread);
	printf("생성된 쓰레드의 ID : %d\n", dwThreadID);

	while (1)
	{
		scanf("%d", &input);

		if (input == 0)
		{
			flag = 1;
		}
		else if (input == 1)
		{
			flag = 0;
			printf("카운트 수는 %llu\n", count);
		}
	}
	return 0;
}

unsigned int WINAPI ThreadFunction(void *arg)
{
	while (1)
	{
		if (flag)
			count++;
		//Sleep(2000);
		//printf("쓰레드 실행 중\n");
	}
	return 0;
}