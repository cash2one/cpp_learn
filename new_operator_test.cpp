/***************************************************************************
 *
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file new_operator_test.cpp
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2016/01/19 10:13:03
 * @version $Revision$
 * @brief
 *
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */
#include "apple.h"

class Test : public Apple {
public:
    /**
     * @brief 覆盖全局的 new操作符
     *
     * @param [in] size   : size_t
     * @param [in] output   : ostream&
     * @return  void* operator
     * @retval
     * @see
     * @author zhangfangjie
     * @date 2016/01/19 10:20:20
    **/
    void *operator new(size_t size, ostream &output) {
        output<<"new size: "<<size<<std::endl;
        return ::operator new(size);
    }
};

int main() {
     Test *t = new (cout) Test;
     //t = new Test(cout);          [>*<   error call operator new     <]
     //t = new Test();          [>*< error no match new        <]
     t->printA();
     return 0;
}
