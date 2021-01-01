#include <stdio.h>

int main()
{
	int T,j=1,num,input;

	scanf("%d",&T);
		for (j=0;j<T;j++)
		{
		scanf("%d",&num);
		int arr[num];
			for(int i=0;i<num;i++)
			{
			scanf("%d",&input);
			arr[i]= input;
			}

		printf("Case #%d:",j+1);
		for (int i=num-1; i>0; i--)
		{
		printf(" %d %d",arr[i-1],arr[i]);
		i=i-1;
		}
		printf("\n");
		}
	return 0;
	}
