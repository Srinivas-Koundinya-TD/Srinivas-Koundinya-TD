#include<stdio.h>
main()
{
    int a,b;
    char op;
    printf("enter a valid expression");
    scanf("%d%c%d",&a,&op,&b);

    if(op=='+')
    {
        printf("%d",(a+b));
    }

    else if (op=='-')
    {
        printf("%d",(a-b));
    }

    else if(op=='*')
    {
        printf("%d",(a*b));
    }

    else if(op=='/')
    {
       printf("%d",(a/b));
    }

    else if(op=='%')
    {
        printf("%d",(a%b));
    }
    else
    {
        printf("invalid expression");
    }

    return 0;
}



