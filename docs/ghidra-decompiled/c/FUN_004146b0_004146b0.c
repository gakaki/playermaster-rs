
CConfigSaveAndLoad * __thiscall FUN_004146b0(void *this,uint param_1)

{
  CConfigSaveAndLoad *pCVar1;
  
  if ((param_1 & 2) == 0) {
    CConfigSaveAndLoad::~CConfigSaveAndLoad(this);
    if ((param_1 & 1) != 0) {
      Ordinal_1508(this);
    }
    return this;
  }
  pCVar1 = (CConfigSaveAndLoad *)((int)this + -4);
  _eh_vector_destructor_iterator_(this,0x34,*(int *)pCVar1,~CConfigSaveAndLoad_exref);
  if ((param_1 & 1) != 0) {
    Ordinal_266(pCVar1);
  }
  return pCVar1;
}

