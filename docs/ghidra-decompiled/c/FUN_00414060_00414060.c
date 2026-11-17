
CGraphicInfo * __thiscall FUN_00414060(void *this,uint param_1)

{
  CGraphicInfo *pCVar1;
  
  if ((param_1 & 2) == 0) {
    CGraphicInfo::~CGraphicInfo(this);
    if ((param_1 & 1) != 0) {
      Ordinal_1508(this);
    }
    return this;
  }
  pCVar1 = (CGraphicInfo *)((int)this + -4);
  _eh_vector_destructor_iterator_(this,0x10,*(int *)pCVar1,~CGraphicInfo_exref);
  if ((param_1 & 1) != 0) {
    Ordinal_266(pCVar1);
  }
  return pCVar1;
}

