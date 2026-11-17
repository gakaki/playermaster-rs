
/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __thiscall CDaoRelationFieldInfo::`vector deleting destructor'(unsigned
   int)
    public: virtual void * __thiscall type_info::`vector deleting destructor'(unsigned int)
   
   Library: Visual Studio 2012 Release */

void * __thiscall FID_conflict__vector_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  
  if ((param_1 & 2) == 0) {
    type_info::~type_info(this);
    if ((param_1 & 1) != 0) {
      Ordinal_1508(this);
    }
  }
  else {
    piVar1 = (int *)((int)this + -4);
    _eh_vector_destructor_iterator_(this,0xc,*piVar1,type_info::~type_info);
    if ((param_1 & 1) != 0) {
      Ordinal_1508(piVar1);
    }
    this = piVar1;
  }
  return this;
}

