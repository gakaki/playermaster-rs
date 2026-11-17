
int __fastcall FUN_00435850(int param_1)

{
  int iVar1;
  
  *(undefined **)(param_1 + 0xc) = &DAT_0044bf2c;
  *(undefined ***)(param_1 + 0x18) = CefBaseRefCounted::vftable;
  *(undefined ***)(param_1 + 8) = &PTR_purecall_0044be3c;
  *(undefined ***)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0xc + param_1) = &PTR_purecall_0044b804;
  *(undefined ***)(param_1 + 8) = &PTR_purecall_0044be3c;
  *(undefined ***)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0xc + param_1) = &PTR_LAB_0044bea0;
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  *(int *)(iVar1 + 8 + param_1) = iVar1 + -0xc;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined ***)(param_1 + 8) = &PTR_FUN_0044beb4;
  *(undefined ***)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0xc + param_1) = &PTR_LAB_0044bf18;
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  *(int *)(iVar1 + 8 + param_1) = iVar1 + -0xc;
  return param_1;
}

