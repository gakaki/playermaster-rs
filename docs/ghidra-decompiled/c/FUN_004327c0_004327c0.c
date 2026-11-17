
void __fastcall FUN_004327c0(int param_1)

{
  CGridCellBase *this;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_004485e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)(param_1 + -0x10) = &PTR_FUN_0044bcd0;
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0xc) + 4) + -0xc + param_1) = &PTR_LAB_0044bcd8;
  this = *(CGridCellBase **)(*(int *)(param_1 + -0xc) + 4);
  *(CGridCellBase **)(this + param_1 + -0x10) = this + -0xc;
  local_8 = 0;
  CGridCellBase::EndEdit(this);
  *(undefined ***)(param_1 + -0x10) = &PTR_purecall_0044bcb4;
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0xc) + 4) + -0xc + param_1) = &PTR_LAB_0044bcbc;
  iVar1 = *(int *)(*(int *)(param_1 + -0xc) + 4);
  *(int *)(iVar1 + -0x10 + param_1) = iVar1 + -0xc;
  ExceptionList = local_10;
  return;
}

