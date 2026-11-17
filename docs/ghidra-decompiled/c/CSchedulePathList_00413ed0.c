
/* public: __thiscall CSchedulePathList::CSchedulePathList(class CSchedulePathList const &) */

CSchedulePathList * __thiscall
CSchedulePathList::CSchedulePathList(CSchedulePathList *this,CSchedulePathList *param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x13ed0  17  ??0CSchedulePathList@@QAE@ABV0@@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446c92;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  *(undefined ***)this = _vftable_;
  FUN_00417cd0(this + 4,(int *)(param_1 + 4));
  local_8 = 0;
  FUN_00417f70(this + 0x10,(int *)(param_1 + 0x10));
  local_8._0_1_ = 1;
  Ordinal_280(param_1 + 0x1c,uVar1);
  local_8 = CONCAT31(local_8._1_3_,2);
  Ordinal_280(param_1 + 0x20);
  ExceptionList = local_10;
  return this;
}

