
CConfigInfo * __thiscall FUN_004133b0(void *this,uint param_1)

{
  CConfigInfo *pCVar1;
  
  if ((param_1 & 2) == 0) {
    CConfigInfo::~CConfigInfo(this);
    if ((param_1 & 1) != 0) {
      Ordinal_1508(this);
    }
    return this;
  }
  pCVar1 = (CConfigInfo *)((int)this + -4);
  _eh_vector_destructor_iterator_(this,0xe4,*(int *)pCVar1,~CConfigInfo_exref);
  if ((param_1 & 1) != 0) {
    Ordinal_266(pCVar1);
  }
  return pCVar1;
}

