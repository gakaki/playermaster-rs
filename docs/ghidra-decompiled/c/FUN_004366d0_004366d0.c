
int __fastcall FUN_004366d0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  uint3 uVar4;
  uint3 extraout_var;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004494b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pcVar3 = *(code **)(param_1[-1] + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_1[-1],DAT_0046400c ^ (int)register0x00000010 - 4U);
  }
  piVar1 = param_1 + 1;
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  uVar4 = (uint3)((uint)piVar1 >> 8);
  if (iVar2 != 1) {
    ExceptionList = local_10;
    return (uint)uVar4 << 8;
  }
  if (param_1 + -2 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_0044bf34;
    local_8 = 0;
    CGridCellBase::EndEdit((CGridCellBase *)0x0);
    *param_1 = CefBaseRefCounted::vftable;
    Ordinal_1508(param_1 + -2);
    uVar4 = extraout_var;
  }
  ExceptionList = local_10;
  return CONCAT31(uVar4,1);
}

