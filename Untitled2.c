#include<stdio.h>
int main()
{
	int n;
	int previous,cur;
	printf("Enter number of processes: \n");
	scanf("%d",&n);
	int queue[n];
	printf("Enter the Previous Requested position\n");
	scanf("%d",&previous);
	printf("Enter the current header position\n");
	scanf("%d",&cur);
	printf("Enter Processes in sequence: \n");
	for(int j=0;j<n;j++)
	{
		scanf("%d",&queue[j]);
	}
	int total =0 ;
	if (previous>cur)
	{
		total = previous+cur;
	}
	else
	{
		total = cur-previous;
	}
	for(int i=0;i<n;i++)
	{
		if (queue[i]>cur)
		{
			total += (queue[i]-cur);
			cur = queue[i];
		}
		else
		{
			total += (cur-queue[i]);
			cur = queue[i];
		}
	}
	printf("Total distance arm moves: %d\n", total);
	}
