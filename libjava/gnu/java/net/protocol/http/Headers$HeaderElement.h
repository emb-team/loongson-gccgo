
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_net_protocol_http_Headers$HeaderElement__
#define __gnu_java_net_protocol_http_Headers$HeaderElement__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace net
      {
        namespace protocol
        {
          namespace http
          {
              class Headers$HeaderElement;
          }
        }
      }
    }
  }
}

class gnu::java::net::protocol::http::Headers$HeaderElement : public ::java::lang::Object
{

public: // actually package-private
  Headers$HeaderElement(::java::lang::String *, ::java::lang::String *);
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object)))) name;
  ::java::lang::String * value;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_net_protocol_http_Headers$HeaderElement__
