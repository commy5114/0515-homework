#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void SampleZero(int *data);
void SampleOne(int *data1);
void SampleSecond(int *data2);

int main(void)
{
	int a[10];
	
	SampleZero(a);
	SampleOne(a);
	SampleSecond(a);
}


/* �üƲ��� */
void SampleZero(int *data)
{
	int i,j,k;
	
	srand(time(NULL));
	
	printf("�Q�Ӷü�:");
	for (i=0;i<=9;i++)
	{
		do
		{
			data[i]=(rand()%91)+10;
			k=0;
			for (j=0 ;j<i;j++)
			{
				if (data[i] == data[j])
				{
					k=1;
					break;
				}
			}
		}while (k==1);
		printf("  %d",data[i]);
	}
	printf("\n");
}
/* �w�j�Ƨ� */ 
void SampleOne(int *data1)
{
	int i,j,temp;
	printf("�Ѥj��p:");
	for(j=10;j>0;j--)
	{
		for (i=0;i<j-1;i++)
		{
			if(data1[i]>data1[i+1])
			{
				temp = data1[i+1];
				data1[i+1]=data1[i];
				data1[i]=temp;
			}
		}
	printf("  %d",data1[i]);	
	}

}
/* �j�M�k */
void SampleSecond(int *data2)
{
	int i,x,value;
	
	printf("\n�п�J�@�ӭ�:");
	scanf("%d",&value);
	
	for(i=0;i<10;i++)
	{
	
		if(data2[i] == value)
		{
			printf ("�j�M���:%d(%d)\n",value,9-i);
			return;
		}
		x =x+1;
	}
	
	if (x==10)
	{
		printf ("�j�M�����"); /*���X�z�ƭ�*/ 
	}
}
