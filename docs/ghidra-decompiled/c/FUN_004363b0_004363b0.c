
int * __cdecl FUN_004363b0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004487e1;
  local_10 = ExceptionList;
  if (param_2 == 0) {
    *param_1 = 0;
    return param_1;
  }
  ExceptionList = &local_10;
  iVar4 = Ordinal_1506(0x1c,DAT_0046400c ^ (int)register0x00000010 - 4U);
  if (iVar4 == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)FUN_00435850(iVar4);
  }
  uVar3 = DAT_004640e0;
  puVar5[1] = param_2;
  puVar1 = puVar5 + 2;
  *puVar5 = uVar3;
  if (puVar1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(*(int *)(puVar5[3] + 4) + 4 + (int)puVar1))();
  }
  local_8 = 1;
  pcVar2 = *(code **)(puVar5[1] + 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(puVar5[1]);
  }
  *param_1 = (int)puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(*(int *)(puVar5[3] + 4) + 4 + (int)puVar1))();
  }
  local_8 = local_8 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)(*(int *)(*(int *)(puVar5[3] + 4) + 4 + (int)puVar1) + 4))();
  }
  ExceptionList = local_10;
  return param_1;
}

