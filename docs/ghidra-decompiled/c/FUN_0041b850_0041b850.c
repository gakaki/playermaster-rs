
int __fastcall FUN_0041b850(int param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0044736a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    local_8 = 1;
    if (param_3 != 0) {
      Ordinal_280(param_1);
      local_8 = 2;
      Ordinal_280(param_1 + 4);
      local_8 = 3;
      Ordinal_280(param_1 + 8);
      local_8 = 4;
      Ordinal_280(param_1 + 0xc);
      local_8 = 5;
      Ordinal_280(param_1 + 0x10);
      local_8 = 6;
      FUN_0041c110((void *)(param_3 + 0x14),(int *)(param_1 + 0x14));
    }
    param_3 = param_3 + 0x20;
  }
  ExceptionList = local_10;
  return param_3;
}

