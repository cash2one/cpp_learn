/***************************************************************************
 *
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file stl/testVectorDelete.cpp
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2016/01/21 16:24:23
 * @version $Revision$
 * @brief
 *
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */
#include <vector>
#include <iostream>
#include "../apple.h"

int main() {
    int a[] = {1, 2, 3, 4, 5, 6};
    std::vector<int> vi(a, a+6);
    int n = 0;

    for (std::vector<int>::iterator it = vi.begin(); it != vi.end();) {
        n++;
        if ((*it % 2) == 0) {
             vi.erase(it);
             print(n);
        } else {
            ++it;
        }
    }

}
