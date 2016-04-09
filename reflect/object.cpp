/***************************************************************************
 *
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file Object.cpp
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2016/01/19 17:19:01
 * @version $Revision$
 * @brief
 *
 **/

/* vim: set ts=4 sw=4 sts=4 tw=100 */
#include "object.h"

static std::map<string, create_fun> *g_info_map = NULL;
void Object::Register(ClassInfo *class_info) {
    if (NULL == g_info_map) {
        g_info_map = new std::map<string, create_fun>();
    }

    if (g_info_map->find(class_info->_class_name) == g_info_map->end()) {
         g_info_map->insert(std::make_pair(class_info->_class_name, class_info->_func));
    }
}

Object * Object::CreateObject(string class_name) {
    if (g_info_map->find(class_name) != g_info_map->end()) {
        return (g_info_map->find(class_name)->second)();
    }
    return NULL;
}


