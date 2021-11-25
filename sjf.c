#include<stdio.h>
# define max 100
void sjf();

struct process{
	int id;
	int bt;
}P[max],temp;
int num,TAT[max],WT[max];
float tat=0,wt=0;
void main()
{

	printf("Enter the no. of Processes: ");
	scanf("%d",&num);
	printf("Enter the BT of %d Processes:\n ",num);
	for(int i=0;i<num;i++)
	{	
		P[i].id=i+1;	
		scanf("%d",&P[i].bt);
	}	
	printf("BT ----> \n");
	for(int i=0;i<num;i++)	
		printf("%d\n",P[i].bt);
	printf("\n");
	sjf();
}
void sjf()
{
	printf("SHORTEST JOB FIRST\n");
	for(int i=0;i<num-1;i++)
	{
		for(int j=0;j<num-i-1;j++)
		{
			//printf("\n%d %d\n",P[i].bt,P[i+1].bt);
			if(P[i].bt>P[i+1].bt)
			{
				temp=P[i];
				P[i]=P[i+1];
				P[i+1]=temp;
			}
		}
	}
		//printf("BT ----> \n");
	//for(int i=0;i<num;i++)	
		//printf("%d\n",P[i].bt);
	for(int i=0;i<num;i++){
		WT[i]=tat;		
		TAT[i]=P[i].bt+WT[i];
		tat=TAT[i];
		wt+=WT[i];	
	}
	printf("P.No\tBT\tWT\tTT\n");
	for(int i=0;i<num;i++)
		printf("%d\t%d\t%d\t%d\n",P[i].id,P[i].bt,WT[i],TAT[i]);	
	printf("AVG TAT - %f\n",tat/num);
	printf("AVG WT - %f\n",wt/num);
}

