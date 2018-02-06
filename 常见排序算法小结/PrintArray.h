
//打印数组
void printArray(int array[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(i!=0)
        {
            printf(",");
        }
       printf("%d", array[i]);
    }
       printf("\n");
}
