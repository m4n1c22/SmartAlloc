#include "SmartAlloc.h"

SmartAllocBase::SmartAllocBase(T in_base_ptr) {
  base_ptr = in_base_ptr;
  cout<<size(base_ptr)<<endl;
}
