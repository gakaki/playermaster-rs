
void __fastcall FUN_00410840(int param_1)

{
  int iVar1;
  IDataManager *pIVar2;
  int iVar3;
  CConfigSaveAndLoad *this;
  
  iVar1 = DAT_00464e48;
  if (-1 < param_1) {
    pIVar2 = CommonData_Get();
    iVar3 = (**(code **)(*(int *)pIVar2 + 0x2c))();
    *(int *)(iVar3 + 8) = param_1;
    pIVar2 = CommonData_Get();
    this = (CConfigSaveAndLoad *)(**(code **)(*(int *)pIVar2 + 0x34))();
    if (this != (CConfigSaveAndLoad *)0x0) {
      CConfigSaveAndLoad::SaveConfigFile(this);
    }
    if (*(int **)(iVar1 + 8) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 8) + 0xc))();
    }
    if (*(int **)(iVar1 + 0x14) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x14) + 0xc))();
    }
    if (*(int **)(iVar1 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0xc) + 0xc))();
    }
    if (*(int **)(iVar1 + 0x10) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004108a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(iVar1 + 0x10) + 0xc))();
      return;
    }
  }
  return;
}

