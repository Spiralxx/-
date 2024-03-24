#include <stdio.h>
#include <stdlib.h>

typedef __int64 int64; //定义__int64的别名为int64

int64 phi(int64 a){ //求a的欧拉函数值,即phi(a)
    int64 temp=a;
    for (int64 i=2;i*i<=a;i++) //寻找a的质因子
    {
        if (a%i == 0)
        {
            while(!(a%i))
                a /= i;
            temp = temp/i * (i-1);
        }
    }
    if(a!=1)
        temp = temp/a * (a-1);

    return temp;
}

int main()
{
    int64 a;
    while(scanf("%I64d",&a)!=EOF)
        printf("%I64d\n",phi(a)); //__int64的格式化输出
return 0;
}
