
int __fastcall FUN_0041b610(int param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00447271;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    local_8 = 1;
    if (param_3 != 0) {
      Ordinal_280(param_1);
    }
    param_3 = param_3 + 4;
  }
  ExceptionList = local_10;
  return param_3;
}

