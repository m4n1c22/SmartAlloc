#include "constants.h"

#ifndef __SMART_ALLOC_H__

#define __SMART_ALLOC_H__


template <class T>
class SmartAllocBase {

  T base_ptr;
  SmartAllocBase(T in_base_ptr);

}


#endif //end if __SMART_ALLOC_H__
