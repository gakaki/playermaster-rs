
void * __fastcall FUN_0041bd90(int param_1,int param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0044752c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; local_8 = 0, param_1 != param_2; param_1 = param_1 + 0x30) {
    if (param_3 != (void *)0x0) {
      Ordinal_296();
      Ordinal_296();
      *(undefined4 *)((int)param_3 + 4) = 0;
      Ordinal_296();
      Ordinal_296();
      Ordinal_296();
      Ordinal_296();
      Ordinal_296();
      Ordinal_296();
      local_8 = 5;
      FUN_00411a30(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0x30);
  }
  ExceptionList = local_10;
  return param_3;
}

