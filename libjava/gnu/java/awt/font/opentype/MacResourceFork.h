
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_font_opentype_MacResourceFork__
#define __gnu_java_awt_font_opentype_MacResourceFork__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace font
        {
          namespace opentype
          {
              class MacResourceFork;
              class MacResourceFork$Resource;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace nio
    {
        class ByteBuffer;
    }
  }
}

class gnu::java::awt::font::opentype::MacResourceFork : public ::java::lang::Object
{

public:
  MacResourceFork(::java::nio::ByteBuffer *);
  JArray< ::gnu::java::awt::font::opentype::MacResourceFork$Resource * > * getResources(jint);
  ::gnu::java::awt::font::opentype::MacResourceFork$Resource * getResource(jint, jshort);
public: // actually package-private
  JArray< jint > * __attribute__((aligned(__alignof__( ::java::lang::Object)))) types;
  JArray< JArray< ::gnu::java::awt::font::opentype::MacResourceFork$Resource * > * > * resources;
  ::java::nio::ByteBuffer * buf;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_font_opentype_MacResourceFork__
