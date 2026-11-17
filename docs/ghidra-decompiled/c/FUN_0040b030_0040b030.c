
int __thiscall FUN_0040b030(void *this,byte param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004462c9;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_8 = 0;
  CAppChecking::~CAppChecking((CAppChecking *)((int)this + 0x118));
  local_8 = 0xffffffff;
  Ordinal_1468(uVar1);
  if ((param_1 & 1) != 0) {
    Ordinal_1508(this);
  }
  ExceptionList = local_10;
  return (int)this;
}

