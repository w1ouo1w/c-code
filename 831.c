#include <stdio.h>
#include <string.h>
//int main()//Сд��ĸa
//{
  //  printf("%c\n",'\132');
    //return 0;
//}
//int main (void)//�ַ�����
//{
  //  printf("%d\n",strlen("c:\text\32\text.c"));
    //return 0;
//}
//int main()//��д��ĸZ
//{
  //  printf("%c\n",'\x61');
    //return 0;

//}
//int main()//if���
//{
   //int input=0;
   //printf("���뵱����类��Ĺ���(1/0)>:");
   // scanf("%d",&input);
   //if(input == 1)
   // printf("�ǵģ�����\n");
   // else
   // printf("�����Ҳ���\n");
   // return 0;
//}
//int main()//whileѭ��
//{
//    int line = 0;
//    printf("�ú�ѧϰ����������\n");
//    while(line<2000)
//    {
//        printf("Ŭ����,%d\n",line);
//        line++;
//    }
//    if(line>=2000);
//    printf("ȡ�óɹ�\n");
//    return 0;
//}
//int main(void)//�ӷ�
//{
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;
//    scanf("%d%d",&num1,&num2);
//    sum = num1 + num2;
//    printf("sum = %d\n",sum);
//    return 0;

//}

//int Add(int x,int y)//�Զ��庯��
//{
//    int z = x+y;
//    return z;
//}
//int main(void)
//{
//    int a = 0;
//    int b = 0;
//    int sum = 0;
//    sum = Add(a,b);
//    printf("sum = %d",sum);
//   return 0;
//}
//int main(void)//�±������1
//{
//    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//    int i = 0;
//    while (i<10)
//    {
//        printf("%d\n",arr[i]);
//        i++;
//    }
//    printf("%d\n",arr[4]);
//return 0;
// }
//int Max(int x,int y)
//{
//    if(x > y)
//        return x;
//    else
//        return y;
//}

//int main(void)
//{


//int num1 =0;
//int num2 =0;

//    scanf("%d%d",&num1,&num2);
//    int num3 = Max(num1,num2);
//    printf("%d\n",num3);
//    return 0;


//}
//int main(void)
//{


//int arr[] = { 1 , 2 , 3 , 4 , 5 , 6 };
//printf("%d\n",sizeof(arr));
//return 0;

//}
//int main(void)
//{
//    int arr[] = { 1 , 2 , 3 , 4 , 5 , 6 };
//    printf("%d\n",sizeof(arr)/sizeof(arr[0]));
//    return 0;
//}
//int main()//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ��룬ʹ��ʱ����ӡ����ԭ��
//{
//    int a = 0;
//    int b = ~a;//��λȡ��
//    printf("%d\n",b);
//
//    return 0;
//}
//int main(void)
//{
//    int a = 10;
//    int b = a--;
//    printf("a = %d b = %d\n",a,b);
//    return 0;
//}
//int main(void)//&&�߼���||�߼���
//{
//    int a = 3;
//    int b = 5;
//    int c = a && b;
//    printf("c = %d",c);
//
//
//   return 0;
//}
//int main(void)
//{
//    int a = 10;
//    int b = 110;
//    int max = 0;
//    max = (a > b? a : b);
//    printf("%d\n",max);
//    return 0;
//}
//int Add(int x,int y)
//{
//    int z = 0;
//    z = x + y;
//    return z;
//}
//int main(void)
//{
//    int arr[10] = { 0 };
//    arr[4];//[]�±����ò�����
//    int a = 0;
//    int b = 1;
//    int sum = Add(a,b);//()�������ò�����
//    printf("%d\n",sum);
//    return 0;
//}
//void test()
//{
//   static int a = 1;//static ���ξֲ��������ֲ������������ڱ䳤������ȫ�ֱ������������Լ�����Դ�ļ��ڲ�ʹ�ã�
//    a++;
//        printf("a = %d\n",a);

//}
//int main()
//{

    //int a = 10;//�ֲ��������Զ���������autoʡ�ԣ�
    //register int a = 10;//�����a����ɼĴ�������
    //a = -2;//unsigned(�޷��ŵģ���Զ����)
    //struct(�ṹ��ؼ���)
     //typedf-���Ͷ���-�����ض���
    //typedef unsigned int u_int;
    //unsigned int num = 20;
    //u_int num2 = 20;
//    int i = 0;
//    while (i<5)
//    {
//        test();
//        i++;
//    }




//    return 0;
//}
//extern int Add(int, int);
//int main(void)
//{
//    int a = 10;
//    int b = 20;
//    int c = Add(a,b);
//    printf("%d\n",c);
//
//    return 0;
//}

//#define max 100 (�����ʶ����������--��������
//#define Max(x,y) (x>y?x:y)
//int main(void)
//{
//    int a = 10;
//    int b = 20;
//    int max =Max(a,b);
//    printf("%d\n",max);
//    return 0;
//}
// int main()
// {
//     int a = 10;
//     int* p = &a;
//     *p = 20;
//     printf("a = %d\n",a);
//     return 0;
// }
//int main
//{
//    return 0;

//}
//int main()
//{
//    char ch = 'w';
//    char*pc = &ch;
//    *pc = 'z';
//    printf("%c\n",ch);
//    return 0;
//}
//int main(void)
//{
//    printf("    **    \n");
//    printf("    **    \n");
//    return 0;
//}




































































