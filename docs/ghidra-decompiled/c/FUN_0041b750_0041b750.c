
int __fastcall FUN_0041b750(int param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_004472fe;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    local_8 = 1;
    if (param_3 != 0) {
      Ordinal_280(param_1);
      local_8 = 2;
      Ordinal_280(param_1 + 4);
      local_8 = 3;
      Ordinal_280(param_1 + 8);
      local_8 = 4;
      *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
      Ordinal_280(param_1 + 0x20);
      local_8 = 5;
      FUN_0041c070((void *)(param_3 + 0x24),(int *)(param_1 + 0x24));
    }
    param_3 = param_3 + 0x30;
  }
  ExceptionList = local_10;
  return param_3;
}

