
int * __cdecl FUN_0043ddd0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044778c;
  local_10 = ExceptionList;
  if (param_2 == 0) {
    *param_1 = 0;
    return param_1;
  }
  ExceptionList = &local_10;
  puVar4 = (undefined4 *)Ordinal_1506(0x1c,DAT_0046400c ^ (int)register0x00000010 - 4U);
  local_8 = 1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00443a90(puVar4 + 2,1);
  }
  uVar3 = DAT_00464180;
  puVar4[1] = param_2;
  puVar1 = puVar4 + 2;
  local_8 = local_8 & 0xffffff00;
  *puVar4 = uVar3;
  if (puVar1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(*(int *)(puVar4[3] + 4) + 4 + (int)puVar1))();
  }
  local_8 = 2;
  pcVar2 = *(code **)(puVar4[1] + 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(puVar4[1]);
  }
  *param_1 = (int)puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(*(int *)(puVar4[3] + 4) + 4 + (int)puVar1))();
  }
  local_8 = local_8 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)(*(int *)(*(int *)(puVar4[3] + 4) + 4 + (int)puVar1) + 4))();
  }
  ExceptionList = local_10;
  return param_1;
}

