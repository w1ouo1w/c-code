#include <stdio.h>
#include <string.h>
//��ӡ100-200֮�������


/*int main(void)
{
    int i = 0;
    for(i=100; i<=200; i++)
    {
        int k = 2;
        while(k<i)
        {
            if(i%k == 0)
            {
                break;
            }
            k++;
            if(k == i)
            printf("%d ",i);
        }
    }
    return 0;
}*/
//__________________________________________________________


//����������1��������������0


/*int is_prime(int n)
{
    int k = 2;
    while(k<n)
    {
        if(n%k == 0)
        {
            return 0;
        }
        k++;
        if(n == k)
        {
            return 1;
        }
    }
}*///�Լ�д���鷳��

//��ʦд�ļ���
/*int is_prime(int n)
{
    int j = 0;
    for(j=2; j<=sqrt(n); j++)
    {
        if(n%j == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main(void)
{
    int i = 0;
    for(i=100; i<=200; i++)
    {
        if(is_prime(i) == 1)
            printf("%d ",i);
    }
    return 0;
}
*/
/*int is_leap_year(int n)
{
    if(n%4 == 0)
    {
        if(n%100 != 0)
        {
            return 1;
        }
        else if(n%400 == 0)
        {
            return 1;
        }
    }
    return 0;
}*///�Լ�д��С����
//��ʦд��
//if((n%4 == 0&&n%100 != 0) || (n%400 == 0))
//��4�򣬰��겻���İ�����

/*int main(void)
{
    int year = 0;

    for(year=1000; year<=2000; year++)
    {
        if(1 == is_leap_year(year))
            printf("%d ",year);
    }
    return 0;
}*/


//ʵ����������������ֲ���
//����ҵ��˷�����������±꣬�Ҳ�������-1
//ֻ������Ԫ�ص�ַ,������arr��һ��ָ��
/*int  binary_search(int arr[], int k, int sz)
{
    int left = 0;
    int right = sz - 1;

    while(left<=right)
    {
        int mid =(right +left)/2;

        if(arr[mid]<k)
        {
            left = mid + 1;
        }
        else if(arr[mid]>k)
        {
            right = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int k = 7;
    int sz = sizeof(arr)/sizeof(arr[0]);
    int ret = binary_search(arr, k, sz);

    if(ret == -1)
    {
        printf("�Ҳ���\n");
    }
    else
    {
        printf("�ҵ��ˣ���������±��ǣ�%d\n",ret);
    }

    return 0;
}*/


//ÿ����һ��num�ͼ�һ

/*void Add(int* p)
{
    (*p)++;
}

int main(void)
{
    int num = 0;
    Add(&num);
    printf("%d\n",num);
    return 0;
}*/


//��ʽ���ʣ���һ�������ķ���ֵ��Ϊ��һ�������Ĳ���


/*int main(void)
{
    int len = 0;
    printf("%d\n",strlen("abc"));
    return 0;
}*/


/*int main(void)

{
    printf("%d",printf("%d",printf("%d",43)));//4321
    return 0;
}*/

//��������
//int Add(int, int);
//#include "add.h"���ļ���д

//�ж�����
/*int is_leap_year(int y)//�����귵��1
{
    if((y%4 == 0 && y%100 != 0) || (y%400 == 0))
    {
        return 1;
    }
    else
        return 0;
}

int main(void)
{
    int year = 0;
    for(year=1000; year<=2000; year++)
       {

        if(1 == is_leap_year(year))
        printf("%d ",year);
       }
    return 0;
}*/


//������������

/*void change(int *px,int *py)
{
    int tmp = 0;
    tmp = *px;
    *px = *py;
    *py = tmp;
}

int main(void)
{
    int a = 0;
    int b = 0;
    scanf("%d%d",&a,&b);
    change(&a,&b);
    printf("%d %d",a,b);
    return 0;
}*/
//�˷��ھ���


void multiply(int x)
{
    int j = 0;
    int k = 0;
    for(j=1; j<=x; j++)
        {
            for(k=1; k<=j; k++)
            {
                int l = j*k;
                printf("%d*%d=%d ",j,k,l);
            }
            printf("\n");
        }
}
int main(void)
{
    int a = 0;
    scanf("%d",&a);
    multiply(a);
    return 0;
}







































































