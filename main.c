#include <stdio.h>

//int main() {
//    printf("Hello, World!\n");
//    return 0;
//}
//int main()
//{
//    double f;
//
//    f =21.2555;
//    printf("%le",f);
//    return 0;
//}

//int main()
//{
//    int num1,num2,sum;
//    printf("请输入两个数：");
//    scanf("%d %d",&num1,&num2);
//    sum = num1+num2;
//    printf("%d + %d =%d",num1,num2,sum);
//    return 0;
//}
//int main()
//{
//    double num1,num2,pro;
//    printf("请输入两个浮点数：");
//    scanf("%lf %lf",&num1,&num2);
//    pro = num1 * num2;
//    printf("%lf * %lf =%.10lf",num1,num2,pro
//    );
//    return 0;
//}
//int main()
//{
//    char a;
//    printf("请输入一个字符：");
//    scanf("%c",&a);
//    printf("%c的ASCII为 %d",a,a);
//    return 0;
//}
#define MAX_ASCII 127
/*int main ()
{
    char num,enter;
    int temp;
    for(;temp>0;)
    {
        printf("--------------------------\n");
        printf("|**       START        **|\n");
        printf("|**ASCII 转 字符   按：1**｜\n");
        printf("|**字符   转  ASCII 按：2**｜\n");
        printf("|**        结束      按:0**|\n");
        printf("---------------------------\n");
        scanf("%d",&temp);
        if(temp==1)
        {
            printf("请输入数值小于%d的任意字符：",MAX_ASCII);
            scanf("%d",&num);
            printf("ASCII为%d,对应的字符为%c\n",num,num);
        }
        if(temp==2)
        {
            printf("输入一个字符：\n");
            scanf("%c",&enter);
            scanf("%c",&num);
            printf("%c的ASCII为%d \n",num,num);
        }
    }
    return 0;

}*/
/*int main()
{
    int dividend,divisor,quotient,remainder;
    printf("输入被除数：");
    scanf("%d",&dividend);

    printf("输入除数：");
    scanf("%d",&divisor);

    quotient =dividend/divisor;
    remainder=dividend%divisor;
    printf("商 =%d\n",quotient);
    printf("余数=%d\n",remainder);

    return 0;

}*/
/*int main()
{
    int a,b,c;
    printf("请输入三个数：");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
        printf("最大数为：%d",a);
    else if(b>a&&b>c)
        printf("最大数为：%d",b);
    else if(c>a&&c>b)
        printf("最大数为：%d",c);
    else
        printf("至少有两个数相等");

    return 0;

}*/
/*int main()
{
    int a;
    float b;
    double c;
    char d;
    printf("size of int: %ld\n", sizeof(a));
    printf("size of float: %ld\n", sizeof(b));
    printf("size of double: %ld\n", sizeof(c));
    printf("size of char: %ld\n", sizeof(d));
    return 0;
}*/
/*
 int main()
{
    double num1,num2,temp;
    printf("输入第一个数字:");
    scanf("%lf",&num1);

    printf("输入第二个数字:");
    scanf("%lf",&num2);

    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("交换后，num1=%.2f\n",num1);
    printf("交换后，num2=%.2f\n",num2);

    return 0;

*/
/*int main()
{
    int a,b;
    printf("请输入两个数：");
    scanf("%d %d",&a,&b);

    printf("交换前a=%d,b=%d\n",a,b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("交换后a=%d,b=%d\n",a,b);
    return 0;
}*/
/*int main()
{
    int number;
    printf("请输入一个数：");
    scanf("%d",&number);
    if(number % 2 == 0)
    {
        printf("%d是偶数",number);
    }
    else
    {
        printf("%d是奇数",number);

    }
    return 0;
}*/

/*int main()
{
    int i,j;
    printf("请输入一个范围：");
    scanf("%d-%d",&i,&j);

//    printf("此范围内偶数有");
    for(;i <= j;i++)
    {
        if(i%2==0)
        {
            printf("此范围内偶数有");
            printf("%d\n",i);
        }

        else
        {

            printf("此范围内奇数有：");
            int a =i;
            printf("%d\n",a);
        }
    }

//    printf("此范围内奇数有：");
//    for(i;i <= j;i++){
//        if(i%2==1)
//        {
//            printf("%d\n",i);
//        }
//    }



    return 0;


}*/

/*int main()
{
    char c;
    int lower,upper;

    printf("输入一个字母:");
    scanf("%c",&c);

    lower=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    upper=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');

    if(lower||upper)
        printf("%c是元音",c);
    else
        printf("%c是辅音",c);
    return  0;

}*/

/*int main()
{
    double a,b,c;
    printf("please input three number:");
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("The max number is %.2f",a);
    }
    else if(b>a&&b>c)
    {
        printf("The max number is %.2f",b);
    }
    else if(c>a&&b<c)
    {
        printf("The max number is %.2f",c);
    }
    else
        printf("三个数中至少两个相同");

    return 0;
}
*/
//一元二次方程
/*#include<math.h>
int main()
{
    float a,b,c,x1,x2,d;
    printf("请输入方程的三个系数：");
    scanf("%f %f %f",&a,&b,&c);
    if(a!=0)
    {
        d=sqrt(b*b-4*a*c);
        x1=(-b+d)/(2*a);
        x2=(-b-d)/(2*a);
        printf("方程的两个根：%0.2f %0.2f\n",x1,x2);
    }
    return 0;
}
*/
//判断闰年
/*int main()
{
    int year;
    printf("请输入年份：");
    scanf("%d",&year);

    if(year%4==0)
    {
        if(year%100==0)
        {
            if (year % 400 == 0)
            {
                printf("%d是闰年", year);
            }
            else {
                printf("%d不是闰年", year);
            }
        }
        else
        {
            printf("%d不是闰年",year);
        }
    }
    else
    {
        printf("%d不是闰年",year);
    }

return 0;
*/
/*int main(void)
{
    char c;
    printf("输入一个字符：");
    scanf("%c",&c);

    if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
    {
        printf("%c是字母",c);
    }
    else
    {
        printf("%c不是字母",c);
    }
}*/

//int main()
//{
//    int num;
//    printf("请输入一个自然数：");
//    while (scanf("%d", &num) == 1)
//    {
//        printf("Sum = %d", (num + 1) * num / 2);
//        break;
//    }
//    return 0;
//}
//自然数求和
//sn=n*a1+[n*(n-1)]*d/2
/*int main()
{
    int n,sum,i;

    printf("请输入一个整数:");
    scanf("%d",&n);
    i=n*(n-1)/2;
    sum=n+i;

    printf("sum=%d",sum);

    return 0;
}
*/
//int main()
//{
//    int i,n,sum=0;
//    printf("请输入一个整数：");
//    scanf("%d",&n);
//
//    for(i=1;i<=n;++i)
//    {
//        sum += 1;
//    }
//    printf("Sum = %d",sum);
//    return 0;
//}

/*int main()
{
    int n, i, sum = 0;

    printf("输入一个正整数: ");
    scanf("%d",&n);

    for(i=1; i <= n; ++i)
    {
        sum += i;   // sum = sum+i;
    }

    printf("Sum = %d",sum);

    return 0;
}*/

//int main()
//{
//    int n,i, sum=0;
//
//    printf("请输入一个正整数：");
//    scanf("%d",&n);
//
//    for(i=1;i <= n; ++i)
//    {
//        sum=sum+i;
//    }
//    printf("sum=%d",sum);
//    return 0;
//
//}
//int main()
//{
//    int i,n,sum=0;
//    printf("请输入一个正整数：");
//    scanf("%d",&n);
//
//    i=1;
//    while(i<=n)
//    {
//        sum+=i;
//        ++i;
//    }
//    printf("sum=%d",sum);
//    return 0;
//}
//int main()
//{
//    int i;
//    printf("%d",i);//int i的初始值73502592，所以使用时应先初始化；
//    return 0;
//}
/*int addnumbers(int n);

int main()
{
    int num;
    printf("输入一个整数：");
    scanf("%d",&num);
    printf("sum=%d", addnumbers(num));
    return 0;
}*/
//int main()
//{
//    int i=0,j=0;
//    for(i=1;i<=9;++i)
//    {
//        for(j=1;j<=i;++j)
//        {
//            printf("%d*%d=%d\t",i,j,i*j);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//