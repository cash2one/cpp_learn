/***************************************************************************
 *
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file banala.h
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2016/01/19 19:19:51
 * @version $Revision$
 * @brief
 *
 **/
#ifndef BANALA_H
#define BANALA_H
#include "object.h"
class banala : public Object {
    banala() {std::cout<<"construct banala"<<std::endl;}
    ~banala() {std::cout<<"disconstruct banala"<<std::endl;}
    DECLARE_CLASS(banala)
};
IMPLEMENT_CLASS(banala)


#endif  // BANALA_H

/* vim: set ts=4 sw=4 sts=4 tw=100 */
