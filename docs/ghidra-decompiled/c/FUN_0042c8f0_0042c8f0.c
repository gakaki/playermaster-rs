
undefined4 * __thiscall FUN_0042c8f0(void *this,undefined4 *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined **local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00448458;
  local_10 = ExceptionList;
  uVar3 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_14 = 0;
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((0x6b < *puVar1) && ((code *)puVar1[0x1a] != (code *)0x0)) {
    local_8 = 0xffffffff;
    iVar2 = *(int *)(param_2 + 4);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
      puVar4 = (undefined8 *)(*(code *)puVar1[0x1a])(puVar1,iVar2,uVar3);
      local_20 = CefStringBase<CefStringTraitsUTF16>::vftable;
      local_1c = 0;
      local_18 = 0;
      local_8 = 1;
      FUN_0041e2a0(&local_20,puVar4);
      FUN_0041e200(param_1,(int)&local_20);
      FUN_0040b8c0(&local_20);
      ExceptionList = local_10;
      return param_1;
    }
  }
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[1] = 0;
  *param_1 = CefStringBase<CefStringTraitsUTF16>::vftable;
  ExceptionList = local_10;
  return param_1;
}

