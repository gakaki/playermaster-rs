
void __fastcall FUN_0040eeb0(int param_1)

{
  void *this;
  int iVar1;
  IDataManager *pIVar2;
  CConfigSaveAndLoad *this_00;
  
  this = *(void **)(param_1 + 0x9c);
  if (this != (void *)0x0) {
    FUN_00408090(this,*(int *)((int)this + 0xc));
    FUN_0040d3f0(param_1);
  }
  iVar1 = DAT_00464e48;
  FUN_004108b0();
  if (*(int **)(iVar1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + 8) + 8))();
  }
  if (*(int **)(iVar1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + 0xc) + 8))();
  }
  if (*(int **)(iVar1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + 0x10) + 8))();
  }
  if (*(int **)(iVar1 + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + 0x14) + 8))();
  }
  pIVar2 = CommonData_Get();
  this_00 = (CConfigSaveAndLoad *)(**(code **)(*(int *)pIVar2 + 0x34))();
  if (this_00 == (CConfigSaveAndLoad *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0040ef1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CConfigSaveAndLoad::SaveConfigFile(this_00);
  return;
}

