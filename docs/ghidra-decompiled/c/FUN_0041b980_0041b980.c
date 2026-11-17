
void * __fastcall FUN_0041b980(int param_1,int param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_004473a1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x2c) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_004140c0(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0x2c);
  }
  ExceptionList = local_10;
  return param_3;
}

