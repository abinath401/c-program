#include <stdio.h>

int main() {
	int N;
	int voltage;
	int minvoltage=0;
	int lowvoltageEvents=0;
	scanf("%d %d",&N,&minvoltage);
	if(minvoltage<210) {
		lowvoltageEvents++;
	}
	for(int i=1; i<N; i++)
	{
		scanf("%d",&voltage);
		if(voltage<minvoltage)
		{
			minvoltage=voltage;
		}
		if(voltage<210)
		{
			lowvoltageEvents++;
		}
	}
	printf("minimum voltage:%d \n",minvoltage);
	printf("low voltage events:%d \n",lowvoltageEvents);
	return 0;
}