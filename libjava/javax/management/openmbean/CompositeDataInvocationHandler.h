
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_management_openmbean_CompositeDataInvocationHandler__
#define __javax_management_openmbean_CompositeDataInvocationHandler__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace management
    {
      namespace openmbean
      {
          class CompositeData;
          class CompositeDataInvocationHandler;
      }
    }
  }
}

class javax::management::openmbean::CompositeDataInvocationHandler : public ::java::lang::Object
{

public:
  CompositeDataInvocationHandler(::javax::management::openmbean::CompositeData *);
  virtual ::javax::management::openmbean::CompositeData * getCompositeData();
  virtual ::java::lang::Object * invoke(::java::lang::Object *, ::java::lang::reflect::Method *, JArray< ::java::lang::Object * > *);
private:
  ::javax::management::openmbean::CompositeData * __attribute__((aligned(__alignof__( ::java::lang::Object)))) data;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_management_openmbean_CompositeDataInvocationHandler__