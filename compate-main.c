方法一：
#include<stdio.h>
main()
{
    //声明函数
    float compate(float a,float b);
    int c;
    float x,y;
    printf("请输入两个需要比较的数:");
    scanf("%f,%f",&x,&y);
    c=(int)compate(x,y);//由于函数返回值不为整形，加前缀强制转换
    printf("%f和%f中比较大的数取整后值为：%d",x,y,c);
    
}

float compate(float a,float b)
{
    float z;
    z=a>b?a:b;
    return z;
}

方法二：
#include<stdio.h>
main()
{
    //声明函数
    int compate(float a,float b);
    int c;
    float x,y;
    printf("请输入两个需要比较的数:");
    scanf("%f,%f",&x,&y);
    c=compate(x,y);//由于函数返回值不为整形，加前缀强制转换
    printf("%f和%f中比较大的数取整后值为：%d",x,y,c);
    
}

int compate(float a,float b)
{
    float z;
    z=a>b?a:b;
    return z;
}
