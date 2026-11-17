
CCustomDrawData * __thiscall FUN_00415cb0(void *this,uint param_1)

{
  CCustomDrawData *pCVar1;
  
  if ((param_1 & 2) == 0) {
    CCustomDrawData::~CCustomDrawData(this);
    if ((param_1 & 1) != 0) {
      Ordinal_1508(this);
    }
    return this;
  }
  pCVar1 = (CCustomDrawData *)((int)this + -4);
  _eh_vector_destructor_iterator_(this,0x60,*(int *)pCVar1,~CCustomDrawData_exref);
  if ((param_1 & 1) != 0) {
    Ordinal_266(pCVar1);
  }
  return pCVar1;
}

