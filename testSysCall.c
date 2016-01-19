/***************************************************************************
 *
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file testSysCall.c
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2015/10/20 16:03:02
 * @version $Revision$
 * @brief
 *
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */

#include <stdio.h>
#include <syscall.h>

int main() {
    int tid = syscall(__NR_gettid);
    printf("%d\n", tid);

    if (syscall(__NR_fork) == 0) {
        int tid = syscall(__NR_gettid);
        printf("chid is %d\n", tid);
    }
    else {
        int tid = syscall(__NR_gettid);
        printf("father is %d\n", tid);
    }

    return 0;
}
