
#include<stdio.h>
# define max 100
void fcfs();
int BT[max],num,TAT[max],WT[max];
float tat=0,wt=0;
void main()
{
	printf("Enter the no. of Processes: ");
	scanf("%d",&num);
	printf("Enter the BT of %d Processes:\n ",num);
	for(int i=0;i<num;i++)	
		scanf("%d",&BT[i]);
	fcfs();
}
void fcfs()
{
	printf("FIRST COME FIRST SERVE\n");
	for(int i=0;i<num;i++){
		WT[i]=tat;		
		TAT[i]=BT[i]+WT[i];
		tat=TAT[i];
		wt+=WT[i];	
	}
	//for(int i=0;i<num;i++)
	//	tat+=TAT[i];
	printf("P.No\tBT\tWT\tTT\n");
	for(int i=0;i<num;i++)
		printf("%d\t%d\t%d\t%d\n",i+1,BT[i],WT[i],TAT[i]);	
	printf("AVG TAT - %f\n",(tat/num);
	printf("AVG WT - %f\n",wt/num);
}


