
undefined4 __fastcall FUN_0040f660(int param_1)

{
  bool bVar1;
  IDataManager *pIVar2;
  int iVar3;
  int iVar4;
  CConfigSaveAndLoad *pCVar5;
  int *piVar6;
  int iVar7;
  code *pcVar8;
  int local_8;
  
  pcVar8 = CommonData_Get_exref;
  pIVar2 = CommonData_Get();
  iVar3 = (**(code **)(*(int *)pIVar2 + 0x2c))();
  iVar7 = DAT_00464e48;
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 8) == 1) {
      pIVar2 = CommonData_Get();
      iVar4 = (**(code **)(*(int *)pIVar2 + 0x2c))();
      *(undefined4 *)(iVar4 + 8) = 1;
      pIVar2 = CommonData_Get();
      pCVar5 = (CConfigSaveAndLoad *)(**(code **)(*(int *)pIVar2 + 0x34))();
      if (pCVar5 != (CConfigSaveAndLoad *)0x0) {
        CConfigSaveAndLoad::SaveConfigFile(pCVar5);
      }
      if (*(int **)(iVar7 + 8) != (int *)0x0) {
        (**(code **)(**(int **)(iVar7 + 8) + 0xc))();
      }
      if (*(int **)(iVar7 + 0x14) != (int *)0x0) {
        (**(code **)(**(int **)(iVar7 + 0x14) + 0xc))();
      }
      if (*(int **)(iVar7 + 0xc) != (int *)0x0) {
        (**(code **)(**(int **)(iVar7 + 0xc) + 0xc))();
      }
      if (*(int **)(iVar7 + 0x10) != (int *)0x0) {
        (**(code **)(**(int **)(iVar7 + 0x10) + 0xc))();
      }
      iVar7 = *(int *)(*(int *)(param_1 + 0x9c) + 0x98);
      if (iVar7 != 0) {
        *(undefined4 *)(iVar7 + 0x360) = 0;
        if (*(int *)(DAT_00464e48 + 4) == 1) {
          iVar7 = *(int *)(DAT_00464e48 + 4);
          if (((-1 < iVar7) && (iVar7 < 4)) && (iVar7 != 0)) {
            *(undefined4 *)(DAT_00464e48 + 4) = 0;
            FUN_00410660();
          }
          FUN_00409260(*(void **)(param_1 + 0x9c),3);
          FUN_004091c0(3,2);
        }
        FUN_00408090(*(void **)(param_1 + 0x9c),*(int *)((int)*(void **)(param_1 + 0x9c) + 0xc));
        FUN_0040d3f0(param_1);
      }
      pcVar8 = CommonData_Get_exref;
    }
    if (*(int *)(iVar3 + 8) == 0) {
      local_8 = 0;
      bVar1 = false;
      piVar6 = (int *)(*pcVar8)();
      iVar3 = (**(code **)(*piVar6 + 0x30))();
      iVar7 = DAT_00464e48;
      if (*(int *)(iVar3 + 0x20) == 0) {
        if (((DAT_00464e48 != 0) && (iVar7 = *(int *)(DAT_00464e48 + 4), -1 < iVar7)) &&
           ((iVar7 < 4 && (iVar7 != 0)))) {
          *(undefined4 *)(DAT_00464e48 + 4) = 0;
          FUN_00410660();
        }
        iVar7 = DAT_00464e48;
        FUN_00409260(*(void **)(param_1 + 0x9c),3);
        local_8 = FUN_004091c0(3,2);
        iVar3 = *(int *)(*(int *)(param_1 + 0x9c) + 0x98);
        if (iVar3 == 0) {
          bVar1 = false;
        }
        else {
          *(undefined4 *)(iVar3 + 0x360) = 0;
          bVar1 = true;
        }
      }
      pIVar2 = CommonData_Get();
      iVar3 = (**(code **)(*(int *)pIVar2 + 0x2c))();
      *(undefined4 *)(iVar3 + 8) = 0;
      pIVar2 = CommonData_Get();
      pCVar5 = (CConfigSaveAndLoad *)(**(code **)(*(int *)pIVar2 + 0x34))();
      if (pCVar5 != (CConfigSaveAndLoad *)0x0) {
        CConfigSaveAndLoad::SaveConfigFile(pCVar5);
      }
      if (*(int **)(iVar7 + 8) != (int *)0x0) {
        (**(code **)(**(int **)(iVar7 + 8) + 0xc))();
      }
      if (*(int **)(iVar7 + 0x14) != (int *)0x0) {
        (**(code **)(**(int **)(iVar7 + 0x14) + 0xc))();
      }
      if (*(int **)(iVar7 + 0xc) != (int *)0x0) {
        (**(code **)(**(int **)(iVar7 + 0xc) + 0xc))();
      }
      if (*(int **)(iVar7 + 0x10) != (int *)0x0) {
        (**(code **)(**(int **)(iVar7 + 0x10) + 0xc))();
      }
      FUN_00408090(*(void **)(param_1 + 0x9c),*(int *)((int)*(void **)(param_1 + 0x9c) + 0xc));
      pIVar2 = CommonData_Get();
      iVar7 = (**(code **)(*(int *)pIVar2 + 0x30))();
      if (*(int *)(iVar7 + 0x20) == 0) {
        if ((bVar1) || (local_8 != 0)) {
          FUN_0040d3f0(param_1);
        }
      }
      else {
        iVar7 = *(int *)(*(int *)(param_1 + 0x9c) + 0x98);
        if (iVar7 != 0) {
          *(undefined4 *)(iVar7 + 0x360) = 1;
          FUN_0040d3f0(param_1);
          return 0;
        }
      }
    }
  }
  return 0;
}

