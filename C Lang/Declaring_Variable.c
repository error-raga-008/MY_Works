#include<stdio.h>
// Keyword = reserverd Words for c lang as its alredy predefine in c lang libary
// int = interger
// float = decimal upto 8 digit
// double = decimal uptop 16 digit
// char = character

int main(int argc, char const *argv[])
{
    //declaring variable
    int a=10;
    //char var has to be in '' not in ""
    char b='S';
    //printing var
    printf("Value of a = %d", a);
    printf("\n");
    printf("Value of b = %c", b);
    return 0;
}

//Format Specifier put them in print stament then put a , in end of double qoute then space then var
//int = %d
//char = %c
//float = %f