
CFormCellData * __thiscall FUN_00415990(void *this,uint param_1)

{
  CFormCellData *pCVar1;
  
  if ((param_1 & 2) == 0) {
    CFormCellData::~CFormCellData(this);
    if ((param_1 & 1) != 0) {
      Ordinal_1508(this);
    }
    return this;
  }
  pCVar1 = (CFormCellData *)((int)this + -4);
  _eh_vector_destructor_iterator_(this,0x5c,*(int *)pCVar1,~CFormCellData_exref);
  if ((param_1 & 1) != 0) {
    Ordinal_266(pCVar1);
  }
  return pCVar1;
}

