#include <stdio.h>
int getPeachNumber(n)
{
    int num;    //������ʣ������
    if(n==10)
    {
       return 1;       //�ݹ��������
    } 
    else
    {
        num = (getPeachNumber(n+1)+1)*2;   //�����ǲ�Ӧ���õݹ��أ�
        printf("��%d����ʣ����%d��\n", n, num); 
        n++;//��������ʣ���Ӹ���
    }
    return num;
}
int main()
{
    int num = getPeachNumber(1);
    printf("���ӵ�һ��ժ��:%d�����ӡ�\n", num);
    return 0;
}
