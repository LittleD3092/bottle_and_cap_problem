#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	//input
	int x;
	scanf("%d", x);

	//change money to bottle and cap
	int bottle = x;
	int cap = x;
	
	//process
	while(cap >= 3)
	{
		if(cap == 3)
		{
			cap = 0;
			bottle ++;
			break;
		}

		int new_bottle = cap/4;
		bottle += new_bottle;
		cap = cap%4 + new_bottle;
	}

	//output
	printf("%d\n", bottle);


	//end
	system("pause");
	return 0;
}