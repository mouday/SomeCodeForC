#include <stdio.h>
int main() 
{ 
    /* ������Ҫ��������� */
    int year = 2008;
    int month = 8;
    int day = 8;
    /*
     * ��ʹ��switch��䣬if...else�����ɱ���
     * �����뿴С��˼·�ģ����Ե����������еġ���������ô�족
     * С�໹��ϣ����Ҷ������Ŷ~
     */
     //�ж��Ƿ�Ϊ����
     int flag=0;
     if((year%400==0)||(year%4==0 && year%100!=0))
     {
         flag=1;
     }
     int days=0;
     month-=1;//ǰ�����µ��·� 
     switch(month)
     {
         case 12:days+=31;
         case 11:days+=30;
         case 10:days+=31;
         case 9:days+=30;
         case 8:days+=31;
         case 7:days+=31;
         case 6:days+=30;
         case 5:days+=31;
         case 4:days+=30;
         case 3:days+=31;
         case 2:
         if(flag=1)
		 {
             days+=29;
         }
         else
         {days+=28;}
         case 1:days+=31;
         
     }
     days+=day;
     printf("2008��8��8���Ǹ���ĵ�%d��",days);
    return 0;
}
