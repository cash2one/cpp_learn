/***************************************************************************
 *
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

/**
 * @file snprintf_test.c
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2016/03/24 14:09:51
 * @version $Revision$
 * @brief
 *
 **/
#include <stdio.h>

int main() {
    char tlist_1[1024] = {0},tlist_2[1024]={0};
    char fname[7][8] = {"a1","b1","c1","d1","e1","f1","g1"};
    int i = 0, len_1,len_2 = 0;

    len_1 = snprintf(tlist_1,1024,"%s;",fname[0]);
    len_2 = snprintf(tlist_2,1024,"%s;",fname[0]);

    for(i=1;i<7;i++)
    {
        len_1 = snprintf(tlist_1,1024,"%s%s;",tlist_1,fname[i]);
        len_2 = sprintf(tlist_2,"%s%s;",tlist_2,fname[i]);
    }

    printf("tlist_1: %s\n",tlist_1);
    printf("tlist_2: %s\n",tlist_2);
}
