
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_DuplicateFormatFlagsException__
#define __java_util_DuplicateFormatFlagsException__

#pragma interface

#include <java/util/IllegalFormatException.h>

class java::util::DuplicateFormatFlagsException : public ::java::util::IllegalFormatException
{

public:
  DuplicateFormatFlagsException(::java::lang::String *);
  virtual ::java::lang::String * getFlags();
private:
  static const jlong serialVersionUID = 18890531LL;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::util::IllegalFormatException)))) flags;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_DuplicateFormatFlagsException__
