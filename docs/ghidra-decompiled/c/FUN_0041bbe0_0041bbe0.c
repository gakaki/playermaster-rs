
undefined4 * __thiscall FUN_0041bbe0(void *this,int param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044746a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = FUN_0041be80(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  local_8 = 1;
  if (puVar1 != (undefined4 *)0xfffffff0) {
    Ordinal_280(param_1);
    local_8 = CONCAT31(local_8._1_3_,2);
    Ordinal_280(param_1 + 4);
    puVar1[6] = *(undefined4 *)(param_1 + 8);
    puVar1[7] = *(undefined4 *)(param_1 + 0xc);
  }
  ExceptionList = local_10;
  return puVar1;
}

