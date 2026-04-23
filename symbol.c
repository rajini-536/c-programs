#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the character \n");
    scanf("%c",&ch);
    int res=!((ch>='A')&&(ch=='z'))&&!((ch>='a')&&(ch<='z'))&& !((ch>='0')&&(ch<='9'));
    printf("%c is a symbol i.e is: %d",ch,res);
}
    