#include <stdio.h>
#define N 10 

/*��ĿҪ����һ������Ϊ10�������������棬
�����˰༶10��ѧ���Ŀ��Գɼ���
Ҫ���д5��������
�ֱ�ʵ�ּ��㿼�Ե��ܷ֣���߷֣���ͷ֣�
ƽ���ֺͿ��Գɼ���������*/ 

//��ӡ����
void printNum(int score[])
{
	int i;//C�����в�����for()�ж��� 
	for(i=0;i<N;i++)
	{	
		if(i<N-1)
		{
			printf("%d ",score[i]);
		}
		else		
		{
			printf("%d\n",score[i]);
		}		
	}
} 
//���㿼�Ե��ܷ� 
int getSum(int score[])
{
    int i;
    int sum=0; 
    for(i=0;i<N;i++)
    {
        sum+=score[i];
    }
    return sum;
}
//��߷֣�
int getMax(int arr[])
{
	int max=arr[0];
	int  i;
	for(i=1;i<N;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}	
	}
	return max;
}

//��ͷ֣�
int getMin(int arr[])
{
	int min=arr[0];
	int  i;
	for(i=1;i<N;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}	
	}
	return min;
}
//ƽ����
int getAverage(int arr[])
{
	int sum=getSum(arr);
	return sum/N;
} 
//���Գɼ���������
void sortArr(int arr[])
{
	//ð������
	 int i,j;
	 for(i=N-1;i>=0;i--)
	 {
		for(j=0;j<i;j++)
		{
			if(arr[j]<arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	 }
	
} 

int main()
{
    int score[N]={67,98,75,63,82,79,81,91,66,84};
    printf("���Գɼ���");
	printNum(score);
    printf("�ܷ֣�%d\n",getSum(score));
    printf("��߷֣�%d\n",getMax(score));
    printf("��ͷ֣�%d\n",getMin(score));
    printf("ƽ���֣�%d\n",getAverage(score));
    printf("�������У�"); 
    sortArr(score);
    printNum(score);
    return 0;
}

