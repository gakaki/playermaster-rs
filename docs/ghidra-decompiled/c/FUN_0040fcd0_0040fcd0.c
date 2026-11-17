
void FUN_0040fcd0(void)

{
  int iVar1;
  IDataManager *pIVar2;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446199;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  Ordinal_296(DAT_0046400c ^ (int)register0x00000010 - 4U);
  local_8 = 0;
  Ordinal_5332(0x1fde,&local_14);
  iVar1 = Ordinal_2948(L"colorlight");
  if (iVar1 == 0) {
    pIVar2 = CommonData_Get();
    if (pIVar2 != (IDataManager *)0x0) {
      pIVar2 = CommonData_Get();
      iVar1 = (**(code **)(*(int *)pIVar2 + 0x2c))();
      if ((*(uint *)(iVar1 + 0x3c) & 0x4000) == 0) {
        *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) | 0x4400;
      }
      if ((DAT_00464e48 != 0) && (*(int **)(DAT_00464e48 + 8) != (int *)0x0)) {
        (**(code **)(**(int **)(DAT_00464e48 + 8) + 0x7c))();
      }
    }
    Ordinal_13333(0x1fde,&DAT_0044d16c);
  }
  if (0x10 < *(int *)(local_14 + -0xc)) {
    Ordinal_13333(0x1fde,&DAT_0044d16c);
  }
  Ordinal_1042();
  ExceptionList = local_10;
  return;
}

