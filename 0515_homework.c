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


/* 亂數產生 */
void SampleZero(int *data)
{
	int i,j,k;
	
	srand(time(NULL));
	
	printf("十個亂數:");
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
/* 泡沫排序 */ 
void SampleOne(int *data1)
{
	int i,j,temp;
	printf("由大到小:");
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
/* 搜尋法 */
void SampleSecond(int *data2)
{
	int i,x,value;
	
	printf("\n請輸入一個值:");
	scanf("%d",&value);
	
	for(i=0;i<10;i++)
	{
	
		if(data2[i] == value)
		{
			printf ("搜尋到值:%d(%d)\n",value,9-i);
			return;
		}
		x =x+1;
	}
	
	if (x==10)
	{
		printf ("搜尋不到值"); /*不合理數值*/ 
	}
}
