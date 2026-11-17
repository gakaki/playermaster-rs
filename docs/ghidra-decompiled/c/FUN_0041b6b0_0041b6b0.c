
void * __fastcall FUN_0041b6b0(int param_1,int param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_004472a1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x48) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_0041bfa0(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0x48);
  }
  ExceptionList = local_10;
  return param_3;
}

