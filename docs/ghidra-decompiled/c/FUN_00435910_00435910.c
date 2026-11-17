
void __fastcall FUN_00435910(undefined4 *param_1)

{
  undefined4 *puVar1;
  CGridCellBase *this;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00448798;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = param_1 + 4;
  *param_1 = &PTR_FUN_0044beb4;
  *(undefined ***)(*(int *)(param_1[1] + 4) + -0xc + (int)puVar1) = &PTR_LAB_0044bf18;
  this = *(CGridCellBase **)(param_1[1] + 4);
  *(CGridCellBase **)(this + -0x10 + (int)puVar1) = this + -0xc;
  local_8 = 0;
  CGridCellBase::EndEdit(this);
  *param_1 = &PTR_purecall_0044be3c;
  *(undefined ***)(*(int *)(param_1[1] + 4) + -0xc + (int)puVar1) = &PTR_LAB_0044bea0;
  *(int *)(*(int *)(param_1[1] + 4) + -0x10 + (int)puVar1) = *(int *)(param_1[1] + 4) + -0xc;
  *puVar1 = CefBaseRefCounted::vftable;
  ExceptionList = local_10;
  return;
}

