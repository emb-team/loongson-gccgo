
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue__
#define __java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue__

#pragma interface

#include <java/util/AbstractCollection.h>
#include <gcj/array.h>


class java::util::concurrent::ScheduledThreadPoolExecutor$DelayedWorkQueue : public ::java::util::AbstractCollection
{

  ScheduledThreadPoolExecutor$DelayedWorkQueue();
public:
  virtual ::java::lang::Runnable * ScheduledThreadPoolExecutor$DelayedWorkQueue$poll();
  virtual ::java::lang::Runnable * ScheduledThreadPoolExecutor$DelayedWorkQueue$peek();
  virtual ::java::lang::Runnable * ScheduledThreadPoolExecutor$DelayedWorkQueue$take();
  virtual ::java::lang::Runnable * ScheduledThreadPoolExecutor$DelayedWorkQueue$poll(jlong, ::java::util::concurrent::TimeUnit *);
  virtual jboolean ScheduledThreadPoolExecutor$DelayedWorkQueue$add(::java::lang::Runnable *);
  virtual jboolean ScheduledThreadPoolExecutor$DelayedWorkQueue$offer(::java::lang::Runnable *);
  virtual void ScheduledThreadPoolExecutor$DelayedWorkQueue$put(::java::lang::Runnable *);
  virtual jboolean ScheduledThreadPoolExecutor$DelayedWorkQueue$offer(::java::lang::Runnable *, jlong, ::java::util::concurrent::TimeUnit *);
  virtual ::java::lang::Runnable * ScheduledThreadPoolExecutor$DelayedWorkQueue$remove();
  virtual ::java::lang::Runnable * ScheduledThreadPoolExecutor$DelayedWorkQueue$element();
  virtual void clear();
  virtual jint drainTo(::java::util::Collection *);
  virtual jint drainTo(::java::util::Collection *, jint);
  virtual jint remainingCapacity();
  virtual jboolean remove(::java::lang::Object *);
  virtual jboolean contains(::java::lang::Object *);
  virtual jint size();
  virtual jboolean isEmpty();
  virtual JArray< ::java::lang::Object * > * toArray();
  virtual JArray< ::java::lang::Object * > * toArray(JArray< ::java::lang::Object * > *);
  virtual ::java::util::Iterator * iterator();
  virtual ::java::lang::Object * element();
  virtual ::java::lang::Object * poll(jlong, ::java::util::concurrent::TimeUnit *);
  virtual ::java::lang::Object * poll();
  virtual ::java::lang::Object * take();
  virtual jboolean offer(::java::lang::Object *, jlong, ::java::util::concurrent::TimeUnit *);
  virtual jboolean offer(::java::lang::Object *);
  virtual ::java::lang::Object * peek();
  virtual jboolean add(::java::lang::Object *);
  virtual ::java::lang::Object * remove();
  virtual void put(::java::lang::Object *);
public: // actually package-private
  static ::java::util::concurrent::DelayQueue * access$10(::java::util::concurrent::ScheduledThreadPoolExecutor$DelayedWorkQueue *);
  ScheduledThreadPoolExecutor$DelayedWorkQueue(::java::util::concurrent::ScheduledThreadPoolExecutor$DelayedWorkQueue *);
private:
  ::java::util::concurrent::DelayQueue * __attribute__((aligned(__alignof__( ::java::util::AbstractCollection)))) dq;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_concurrent_ScheduledThreadPoolExecutor$DelayedWorkQueue__
