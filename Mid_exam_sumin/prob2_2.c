//컴퓨터의 수행 속도를 알아보기 위하여 '1'을 입력하면 0에서부터 숫자를 증가시키고 있다가 '2'를 입력하면 지금까지 센 숫자를 화면에 출력//

#include <stdio.h>
#include <Windows.h>

void ReadTSC(DWORD *dwLo, DWORD *dwHi)
{
	_asm
	{
		_emit    0x0F
			_emit    0x31
			mov      ecx, dword ptr dwLo
			mov      dword ptr[ecx], eax
			mov      ecx, dword ptr dwHi
			mov      dword ptr[ecx], edx
	}
}

int main()
{
	ULARGE_INTEGER Cycle, OldCycle;
	int input;

	while (1)
	{
		scanf("%d", &input);

		if (input == 0)
		{
			ReadTSC(&OldCycle.u.LowPart, &OldCycle.u.HighPart);
		}
		else if (input == 1)
		{
			ReadTSC(&Cycle.u.LowPart, &Cycle.u.HighPart);
			printf("카운트 수는 %llu\n", Cycle.QuadPart-OldCycle.QuadPart);
		}
	}
	return 0;
}