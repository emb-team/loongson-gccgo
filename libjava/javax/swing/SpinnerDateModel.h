
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_SpinnerDateModel__
#define __javax_swing_SpinnerDateModel__

#pragma interface

#include <javax/swing/AbstractSpinnerModel.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
        class SpinnerDateModel;
    }
  }
}

class javax::swing::SpinnerDateModel : public ::javax::swing::AbstractSpinnerModel
{

public:
  SpinnerDateModel();
  SpinnerDateModel(::java::util::Date *, ::java::lang::Comparable *, ::java::lang::Comparable *, jint);
  virtual jint getCalendarField();
  virtual ::java::util::Date * getDate();
  virtual ::java::lang::Comparable * getStart();
  virtual ::java::lang::Comparable * getEnd();
  virtual ::java::lang::Object * getValue();
  virtual ::java::lang::Object * getNextValue();
  virtual ::java::lang::Object * getPreviousValue();
  virtual void setCalendarField(jint);
  virtual void setStart(::java::lang::Comparable *);
  virtual void setEnd(::java::lang::Comparable *);
  virtual void setValue(::java::lang::Object *);
private:
  ::java::util::Calendar * __attribute__((aligned(__alignof__( ::javax::swing::AbstractSpinnerModel)))) date;
  ::java::lang::Comparable * start;
  ::java::lang::Comparable * end;
  jint calendarField;
  static const jlong serialVersionUID = -4802518107105940612LL;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_SpinnerDateModel__
