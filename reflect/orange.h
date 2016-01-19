/***************************************************************************
 *
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file orange.h
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2016/01/19 19:17:07
 * @version $Revision$
 * @brief
 *
 **/
#ifndef ORANGE_H
#define ORANGE_H
#include "object.h"
class orange : public Object {
    orange() {std::cout<<"construct orange"<<std::endl;}
    ~orange() {std::cout<<"disconstruct orange"<<std::endl;}
    DECLARE_CLASS(orange)
};
IMPLEMENT_CLASS(orange)

#endif  // ORANGE_H

/* vim: set ts=4 sw=4 sts=4 tw=100 */
