//
// Created by 郭瑞 on 2023/2/18.
//
#include <stdio.h>

extern int addnumbers(int n)
{
    if(n!=0)
    {
        return n + addnumbers(n-1);

    }
    else
    {
        return n;
    }
}