#include<stdio.h>
#define acracy double

#define gap 10000

int main(void)
{
	acracy Mtau = 3;
	acracy zeta[gap];
	acracy difzeta[gap];
	acracy dtau = (Mtau) / (gap-1);
	zeta[0] = 0.9;
	zeta[1] = 0.9;
	difzeta[0] = 0;
	for(int i=0; i<gap-2; i++)
	{
		acracy dif2zeta = (1 / zeta[i + 1] / zeta[i + 1] / zeta[i + 1]) - (1 / zeta[i + 1] / zeta[i + 1]);
		zeta[i + 2] = dif2zeta * dtau * dtau + 2 * zeta[i + 1] - zeta[i];
	}
	for(int i=0; i<gap;i++)
	{
		printf("num %d zeta %f leng %f \n",i+1 ,(float)zeta[i],(float)(i*dtau) );
	}


	return 0;
}
