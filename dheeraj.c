#include<stdio.h>
int main()
{	int process[3];//={2132,2102,2453};
	int burst[3];//={2,4,8};
	int at[3]={0,0,0};
	int i;
	printf("\n\n STUDENT ID");
	for (i=0;i<3;i++)
	{
		printf("\n please enter the student id for student %d : ",i+1);
		scanf("%d",&process[i]);
	}
	printf("\n\n TIME TAKEN");
	for (i=0;i<3;i++)
	{
		printf("\n please enter the time taken by student %d : ",i+1);
		scanf("%d",&burst[i]);
	}
	
	int c1=0,c2=0,c3=0;
	printf(" Longest remaining time first: \n");
	
	for(i=3;i>2;i--)
	{
		int j;
		for( j=burst[i];j>0;j--)
	{
	
		if(burst[i]>burst[i-1] && burst[i]>burst[i-2])
		{
			burst[i]--;
			c1=c1+1;
		}
		else if(burst[i]==burst[i-1])
		{
			if(process[i]<process[i-1])
			{
				burst[i-1]--;
				c2=c2+1;
			}
			else
			{burst[i]--;
			c1=c1+1;
			}
		}
		else if(burst[i]==burst[i-2])
		{	if(process[i]<process[i-2])
			{
				burst[i-2]--;
				c3=c3+1;
			}
			else
			{burst[i]--;
			c1=c1+1;
			}
		}
		
	}
	
}
printf("completion time for process 1:%d \n",c1);
printf("completion time for process 2:%d\n",c2);
printf("completion time for process 3:%d\n",c3);
}
