
CCloudPublishDetailInfo * __thiscall FUN_004143a0(void *this,uint param_1)

{
  CCloudPublishDetailInfo *pCVar1;
  
  if ((param_1 & 2) == 0) {
    CCloudPublishDetailInfo::~CCloudPublishDetailInfo(this);
    if ((param_1 & 1) != 0) {
      Ordinal_1508(this);
    }
    return this;
  }
  pCVar1 = (CCloudPublishDetailInfo *)((int)this + -4);
  _eh_vector_destructor_iterator_(this,0x10,*(int *)pCVar1,~CCloudPublishDetailInfo_exref);
  if ((param_1 & 1) != 0) {
    Ordinal_266(pCVar1);
  }
  return pCVar1;
}

