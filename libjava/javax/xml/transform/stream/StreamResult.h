
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_xml_transform_stream_StreamResult__
#define __javax_xml_transform_stream_StreamResult__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace xml
    {
      namespace transform
      {
        namespace stream
        {
            class StreamResult;
        }
      }
    }
  }
}

class javax::xml::transform::stream::StreamResult : public ::java::lang::Object
{

public:
  StreamResult();
  StreamResult(::java::io::OutputStream *);
  StreamResult(::java::io::Writer *);
  StreamResult(::java::lang::String *);
  StreamResult(::java::io::File *);
  virtual void setOutputStream(::java::io::OutputStream *);
  virtual ::java::io::OutputStream * getOutputStream();
  virtual void setWriter(::java::io::Writer *);
  virtual ::java::io::Writer * getWriter();
  virtual void setSystemId(::java::lang::String *);
  virtual void setSystemId(::java::io::File *);
  virtual ::java::lang::String * getSystemId();
  static ::java::lang::String * FEATURE;
private:
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object)))) systemId;
  ::java::io::OutputStream * outputStream;
  ::java::io::Writer * writer;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_xml_transform_stream_StreamResult__
