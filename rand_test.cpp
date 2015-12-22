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
     *seed��ͬ����ôrand�Ľ��Ҳ��һ���ģ����䣬����ÿ�ζ�Ҫ����������
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
         *�����i�����ѭ���ts����һ���ģ�cpu�����ٶ�̫���ԭ��ô
         */
        test_rand(ts + i);

    }
    return 0;
}
