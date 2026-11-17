
CSchedulePathList * __thiscall FUN_00413fb0(void *this,uint param_1)

{
  CSchedulePathList *pCVar1;
  
  if ((param_1 & 2) == 0) {
    CSchedulePathList::~CSchedulePathList(this);
    if ((param_1 & 1) != 0) {
      Ordinal_1508(this);
    }
    return this;
  }
  pCVar1 = (CSchedulePathList *)((int)this + -4);
  _eh_vector_destructor_iterator_(this,0x24,*(int *)pCVar1,~CSchedulePathList_exref);
  if ((param_1 & 1) != 0) {
    Ordinal_266(pCVar1);
  }
  return pCVar1;
}

