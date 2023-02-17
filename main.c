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
<<<<<<< HEAD
int main()
=======
/*int main()
>>>>>>> Initial commit
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
<<<<<<< HEAD
}
=======
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
>>>>>>> Initial commit
