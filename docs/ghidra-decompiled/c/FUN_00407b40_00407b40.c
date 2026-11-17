
void __fastcall FUN_00407b40(undefined4 *param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00445daf;
  local_10 = ExceptionList;
  uVar2 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  *param_1 = CMainInterfaceData::vftable;
  local_8 = 0;
  pvVar1 = (void *)param_1[0x26];
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x68,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_00407b00);
    Ordinal_266((int)pvVar1 + -4);
    param_1[0x26] = 0;
  }
  piVar4 = param_1 + 0xe;
  iVar3 = 4;
  do {
    if ((undefined4 *)piVar4[-4] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar4[-4])(1,uVar2);
      piVar4[-4] = 0;
    }
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
      *piVar4 = 0;
    }
    if ((undefined4 *)piVar4[4] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar4[4])(1);
      piVar4[4] = 0;
    }
    if ((undefined4 *)piVar4[0xc] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar4[0xc])(1);
      piVar4[0xc] = 0;
    }
    if ((undefined4 *)piVar4[8] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar4[8])(1);
      piVar4[8] = 0;
    }
    if ((undefined4 *)piVar4[0x14] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)piVar4[0x14])(1);
      piVar4[0x14] = 0;
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (param_1[4] != 0) {
    Ordinal_3839();
    if ((int *)param_1[4] != (int *)0x0) {
      (**(code **)(*(int *)param_1[4] + 4))(1);
    }
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    Ordinal_3839();
    if ((int *)param_1[5] != (int *)0x0) {
      (**(code **)(*(int *)param_1[5] + 4))(1);
    }
    param_1[5] = 0;
  }
  if (param_1[6] != 0) {
    Ordinal_3839();
    if ((int *)param_1[6] != (int *)0x0) {
      (**(code **)(*(int *)param_1[6] + 4))(1);
    }
    param_1[6] = 0;
  }
  Ordinal_1042();
  ExceptionList = local_10;
  return;
}

