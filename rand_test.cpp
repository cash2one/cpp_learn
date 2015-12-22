/***************************************************************************
 *
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file rand_test.cpp
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2015/11/18 11:03:56
 * @version $Revision$
 * @brief
 *
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */

#include <stdlib.h>
#include <time.h>
#include <stdint.h>
#include <iostream>

void test_rand(int seed) {
    /*
     *seed相同，那么rand的结果也是一样的，不变，所以每次都要先设置种子
     */
    srand(seed);
    int random = rand() % 10000;
    std::cout<<seed<<"  "<<random<<std::endl;
    return ;
}
int main() {
    for (int i = 0; i< 10; i++) {
        uint64_t ts = time(NULL);
        /*
         *必须加i，这个循环里，ts都是一样的，cpu运行速度太快的原因么
         */
        test_rand(ts + i);

    }
    return 0;
}
