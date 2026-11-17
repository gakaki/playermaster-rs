
undefined4 * __cdecl FUN_00422d70(int *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00447a21;
  local_10 = ExceptionList;
  uVar4 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  if (param_1 == param_2) {
    return param_3;
  }
  piVar6 = param_1 + 1;
  ExceptionList = &local_10;
  do {
    local_8 = 0;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = CefStringBase<CefStringTraitsUTF16>::vftable;
      param_3[1] = 0;
      *(undefined1 *)(param_3 + 2) = 0;
      piVar1 = (int *)*piVar6;
      if (piVar1 != (int *)0x0) {
        iVar2 = piVar1[1];
        iVar3 = *piVar1;
        if ((iVar3 != 0) && (iVar2 != 0)) {
          puVar5 = (undefined8 *)Ordinal_1506(0xc,uVar4);
          param_3[1] = puVar5;
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 1) = 0;
          *(undefined1 *)(param_3 + 2) = 1;
          cef_string_utf16_set(iVar3,iVar2,param_3[1],1);
        }
      }
    }
    param_3 = param_3 + 3;
    piVar1 = piVar6 + 2;
    piVar6 = piVar6 + 3;
  } while (piVar1 != param_2);
  ExceptionList = local_10;
  return param_3;
}

