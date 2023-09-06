#include <stdio.h>
/*int main(void)//最大公约数
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d%d",&a,&b);
    while(c=a%b)
    {
        a=b;
        b=c;
    }
    printf("%d\n",b);

    return 0;
}
*/
/*int main(void)//闰年
{
    int i = 0;
    for(i=1000;i<=2000;i++)
    {
        if(i%4 == 0)
        {
            if(i%100 != 0)
            {
                printf("%d  ",i);
            }
            if(i%400 == 0)
            {
                printf("%d  ",i);
            }
        }

    }
    return 0;
}*/
/*int main(void)//素数
{
    int i = 0;
    for(i=100;i<=200;i++)
    {
        int k = 2;
        while(k<i)
        {
            if(i%k == 0)
            {
                break;
            }
            k++;
        }
        if(i == k)
        {
            printf("%d  ",i);
        }
    }
    return 0;
}*/
/*int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    if(a<c)
    {
        int tmp = a;
        a = c;
        c = tmp;
    }
    if(b<c)
    {
        int tmp = b;
        b = c;
        c = tmp;
    }
    printf("%d %d %d",a,b,c);
    return 0;
}*/
/*int main(void)
{
    int i = 0;
    for(i=1;i<=100;i++)
    {
        if(i%3 == 0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}*/
/*int main(void)
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int left = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);
    int right = sz - 1;
    int k = 17;
    while(left<=right)
    {
        int mid = (right+left)/2;
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

            printf("找到了，下标是：-> %d\n",mid);
            break;

           }
    if(left>right)
        printf("找不到\n");
    }
    return 0;
}*/
/*int main(void)
{
    int count = 0;
    int i = 0;
    for(i=1;i<=100;i++)
    {
        if(i%10 == 9)
        {
            count++;
        }
        if(i/10 == 9)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}*/
/*int main(void)
{
    int i = 0;
    double sum = 0.0;
    for(i=1;i<=100;i++)
    {
        double k = 1.0/i;
        if(i%2 == 0)
        {
            sum = sum - k;
        }
        else
        {
            sum = sum + k;
        }
    }
    printf("%lf\n",sum);
    return 0;
}*///巧妙取反：int flag = 1;  flag = -flag
/*int main(void)
{
   int arr[]={1,2,-3,4,5,6,7,18,9,10};
   int max = arr[0];
   int i = 0;
   int sz = sizeof(arr)/sizeof(arr[0]);
   for(i=0;i<sz;i++)
   {
       if(arr[i]>max)
        max = arr[i];
   }
   printf("%d\n",max);
   return 0;
}*/
/*int main(void)//九九乘法表
{
    int i = 0;
    int k = 1;
    for(i=1;i<=9;i++)
    {
        for(k=1;k<=i;k++)
       {   int j =i*k;

       printf("%d*%d=%d ",i,k,j);
       }
       printf("\n");
    }
    return 0;
}*/







































































