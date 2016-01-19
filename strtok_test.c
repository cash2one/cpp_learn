/***************************************************************************
 *
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file strtok_test.c
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2015/08/10 18:40:59
 * @version $Revision$
 * @brief
 *
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */
#include<string.h>
#include<stdio.h>
int main(void)
{
    char input[16]="abc,d";
    char*p;
    /*strtok places a NULL terminator
    infront of the token,if found*/
    p=strtok(input,",");
    if(p)
        printf("%s\n",p);
        /*Asecond call to strtok using a NULL
        as the first parameter returns a pointer
        to the character following the token*/
    p=strtok(NULL,",");
    if(p)
        printf("%s\n",p);
    return 0;
}
