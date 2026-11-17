
CWndShadow * __thiscall FUN_004157b0(void *this,uint param_1)

{
  CWndShadow *pCVar1;
  
  if ((param_1 & 2) == 0) {
    CWndShadow::~CWndShadow(this);
    if ((param_1 & 1) != 0) {
      Ordinal_1508(this);
    }
    return this;
  }
  pCVar1 = (CWndShadow *)((int)this + -4);
  _eh_vector_destructor_iterator_(this,0x44,*(int *)pCVar1,~CWndShadow_exref);
  if ((param_1 & 1) != 0) {
    Ordinal_266(pCVar1);
  }
  return pCVar1;
}

