// myclass.h 
#include "TNamed.h" 
class myclass: public TNamed 
{ 
 public: 
  Double32_t a; 
  myclass(); 
  myclass(const char* name); 
  ClassDef(myclass,1); 
}; 

#ifdef __MAKECINT__ 
#pragma link C++ class myclass+; 
#endif
