#include <stdio.h>
#include <stdlib.h>

typedef __int64 int64; //����__int64�ı���Ϊint64

int64 phi(int64 a){ //��a��ŷ������ֵ,��phi(a)
    int64 temp=a;
    for (int64 i=2;i*i<=a;i++) //Ѱ��a��������
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
        printf("%I64d\n",phi(a)); //__int64�ĸ�ʽ�����
return 0;
}
