#include <stdio.h>
#include <string.h>
//int main(void)//被五整除
//{
//    int a = 0;
//    scanf("%d",&a);
//    if(a%5 == 0)
//    printf("YES");
//    else
//    printf("NO");
//    return 0;
//}
//int main(void)//if语句
// {
//     int age = 0;
//     scanf("%d",&age);
//     if(age<18)
//        printf("未成年\n");
//     else if(age>=18 && age<=35)
//        printf("青年\n");
//     else if(age>35 && age<=60)
//        printf("中年\n");
//     else if(age>=60)
//        printf("老年\n");
//        return 0;
// }
//int main(void)//判断一个数是否为奇数
//{
//    int a = 0;
//    scanf("%d",&a);
//    if(a%2 == 1)
//        printf("YES\n");
//    else
//        printf("NO\n");
//    return 0;
//}
//int main(void)//输出1-100之间奇数(不知道问题在哪，只有第一次输出结果正确)
//{
//    int i = 1;
//    while(i>=0 && i<=100)
//    {
//        if(i%2 == 1)
//          printf("%d\n",i);
//            i++;
//    }
//    return 0;
//}
//int main(void)//getchar 遇到ctrl +z才能读取多个
//{
    //int ch = getchar();
    //putchar(ch);
    //printf("%c\n",ch);
//    int ch = 0;
//    while((ch=getchar()) != EOF)
//    {
//        putchar(ch);
//    }


//   return 0;
//}
//int main(void)//for循环
//{
//    int i =  0;
//    for(i=1; i<=10; i++)
//    {
//        printf("%d\n",i);
//    }
//    return 0;
//}
//int main(void)//do...while循环
//{
//    int i = 0;
//    do
//    {
//        printf("%d\n",i);
//        i++;
//    }
//    while(i<=10);
//        return 0;
//}
//int main(void)//计算1+...+n!
//{
//    int i = 1;
//    int n = 0;
//    int a = 1;
//    int sum = 0;
//    scanf("%d",&n);
//    for(i=1; i<=n; i++)
//    {
//        a = a * i;
//        sum = sum + a;
//    }
//    printf("%d",sum);
//    return 0;
//}
//int main(void)//计算n的阶乘
//{
//    int i = 0;
//    int n = 0;
//    int a = 1;
//    scanf("%d",&n);
//    for(i=1;i<=n;i++)
//    a = a * i;
//    printf("%d",a);
//    return 0;
//}
//int main(void)//在有序数组内找到7
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    int i = 0;
//    for(i=0; i<sz; i++)
//    {
//        if(7 == arr[i])
//            {
//                printf("找到了，下标是：%d",i);
//                break;
//            }
//
//    }
//    return 0;
//}
//int main(void)//找到错误啦
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    int k = 7;
//    int left = 0;//左下标
//    int right = sz-1;//右下标
//    while(left<=right)
//    {
//    int mid = (left+right)/2;
//    if (arr[mid] > k)
//       {right = mid-1;}
//    else if (arr[mid] < k)
//       {left = mid+1;}
//    else
//        {printf("找到了，下标是：%d\n",mid);
//       break; }
//
//    }
//    if(left>right)
//    {
//
//        printf("找不到\n");
//    }
//     return 0;
//}

























