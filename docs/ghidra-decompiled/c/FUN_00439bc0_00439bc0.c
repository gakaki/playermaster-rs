
/* WARNING: Removing unreachable block (ram,0x00439ce9) */

undefined1 __thiscall
FUN_00439bc0(void *this,int param_1,int param_2,undefined4 param_3,int param_4,int param_5,
            undefined4 param_6)

{
  undefined1 uVar1;
  int *piVar2;
  int iStack_4c;
  undefined4 uStack_48;
  undefined ***pppuStack_44;
  undefined **local_20;
  int local_1c;
  char local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00448c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  CGridCellBase::EndEdit(this);
  if ((param_1 == 0) || (local_8 = 0xffffffff, param_2 == 0)) {
    ExceptionList = local_10;
    return 0;
  }
  pppuStack_44 = (undefined ***)0x439c2d;
  piVar2 = FUN_0043c590(&param_1,param_1);
  piVar2 = (int *)*piVar2;
  local_20 = CefStringBase<CefStringTraitsUTF16>::vftable;
  local_1c = 0;
  if (param_4 != 0) {
    local_1c = param_4;
  }
  local_18 = '\0';
  pppuStack_44 = &local_20;
  local_8 = 4;
  uStack_48 = param_3;
  FUN_0041f560(&iStack_4c,param_2);
  uVar1 = (**(code **)(*piVar2 + 0x18))();
  local_20 = CefStringBase<CefStringTraitsUTF16>::vftable;
  if (local_1c != 0) {
    if (local_18 != '\0') {
      cef_string_utf16_clear(local_1c);
      Ordinal_1508(local_1c);
    }
    local_1c = 0;
    local_18 = '\0';
  }
  local_8 = 0xffffffff;
  if (param_1 != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + param_1 + 4) + 4))();
  }
  ExceptionList = local_10;
  return uVar1;
}

