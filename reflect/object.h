/***************************************************************************
 *
 * Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file Object.h
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2016/01/19 16:52:38
 * @version $Revision$
 * @brief
 *
 **/
#ifndef OBJECT_H
#define OBJECT_H
#include <iostream>
#include <map>
#include <string>
using std::string;

class ClassInfo;
class Object{
public:
    static void Register(ClassInfo *class_info);
    static Object *CreateObject(string class_name);
    virtual ~Object(){}
};

typedef Object *(*create_fun)(void);
#define DECLARE_CLASS(NAME) protected: \
        static ClassInfo _class_info; \
        private: \
        static NAME *createObject##NAME() { return new NAME(); }

#define IMPLEMENT_CLASS(NAME) \
        ClassInfo NAME::_class_info(#NAME,(create_fun) NAME::createObject##NAME);

class ClassInfo {
    friend class Object;
public:
    ClassInfo(string name, create_fun fun):_class_name(name), _func(fun) {
        std::cout<<name<<"registered"<<std::endl;
        Object::Register(this);
    }

    virtual ~ClassInfo() {}

private:
    create_fun _func;
    string _class_name;
};
#endif  // OBJECT_H

/* vim: set ts=4 sw=4 sts=4 tw=100 */
