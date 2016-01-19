/***************************************************************************
 *
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * $Id$
 *
 **************************************************************************/

 /**
 * @file Exception.h
 * @author zhangfangjie(zhangfangjie@baidu.com)
 * @date 2015/09/07 19:16:30
 * @version $Revision$
 * @brief
 *
 **/
#ifndef EXCEPTION_H
#define EXCEPTION_H

//#include <muduo/base/Types.h>
#include <exception>
#include <string>
using namespace std;

class Exception : public std::exception
{
 public:
  explicit Exception(const char* what);
  explicit Exception(const string& what);
  virtual ~Exception() throw();
  virtual const char* what() const throw();
  const char* stackTrace() const throw();

 private:
  void fillStackTrace();

  string message_;
  string stack_;
};


#endif  // EXCEPTION_H

/* vim: set ts=4 sw=4 sts=4 tw=100 */
