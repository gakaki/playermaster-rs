
CGridCellBase * __thiscall FUN_0042c280(void *this,byte param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00448cc8;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  *(undefined ***)this = &PTR_FUN_0044b514;
  local_8 = 0;
  CGridCellBase::EndEdit(this);
  *(undefined ***)this = CefBaseRefCounted::vftable;
  if ((param_1 & 1) != 0) {
    Ordinal_1508(this,uVar1);
  }
  ExceptionList = local_10;
  return this;
}

