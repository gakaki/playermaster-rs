
undefined4 * __thiscall
FUN_0041b3c0(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00447240;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = *(undefined4 **)this;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = FUN_0041bbe0(this,(int)(param_1 + 4));
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    local_8 = 0;
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    puVar2 = FUN_0041b3c0(this,(undefined4 *)*param_1,puVar1,param_3);
    *puVar1 = puVar2;
    puVar2 = FUN_0041b3c0(this,(undefined4 *)param_1[2],puVar1,param_3);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}

