
void FUN_00449ac0(void)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004462fb;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_8 = 0;
  CAppChecking::~CAppChecking((CAppChecking *)&DAT_00464f98);
  local_8 = 0xffffffff;
  Ordinal_1468(uVar1);
  ExceptionList = local_10;
  return;
}

