
int __fastcall FUN_0041bb10(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0044742a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    local_8 = 1;
    if (param_3 != 0) {
      Ordinal_280(param_1);
      local_8 = 2;
      uVar1 = *(undefined4 *)(param_1 + 8);
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(param_3 + 8) = uVar1;
      *(undefined4 *)(param_3 + 0xc) = uVar2;
      *(undefined4 *)(param_3 + 0x10) = uVar3;
      *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_1 + 0x14);
      Ordinal_280(param_1 + 0x18);
      *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    }
    param_3 = param_3 + 0x20;
  }
  ExceptionList = local_10;
  return param_3;
}

