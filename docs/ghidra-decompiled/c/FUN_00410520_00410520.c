
void __fastcall FUN_00410520(undefined4 *param_1)

{
  IDataManager *pIVar1;
  int iVar2;
  CConfigSaveAndLoad *this;
  
  *param_1 = CPMManager::vftable;
  pIVar1 = CommonData_Get();
  if (pIVar1 != (IDataManager *)0x0) {
    iVar2 = (**(code **)(*(int *)pIVar1 + 0x2c))();
    if (*(int *)(iVar2 + 0xe0) == 1) {
      iVar2 = (**(code **)(*(int *)pIVar1 + 0x2c))();
      *(undefined4 *)(iVar2 + 0xe0) = 0;
    }
    this = (CConfigSaveAndLoad *)(**(code **)(*(int *)pIVar1 + 0x34))();
    if (this != (CConfigSaveAndLoad *)0x0) {
      CConfigSaveAndLoad::SaveConfigFile(this);
      CConfigSaveAndLoad::SaveLanDataToFile(this);
      CConfigSaveAndLoad::SaveLanEncryptionFile(this);
      CConfigSaveAndLoad::SaveCltGifFile(this);
    }
  }
  if (param_1[2] != 0) {
    DeviceManager_Release();
    param_1[2] = 0;
  }
  if (param_1[5] != 0) {
    MediaLib_Release();
    param_1[5] = 0;
  }
  if (param_1[3] != 0) {
    ProgramManager_Release();
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    ScheduleManager_Release();
    param_1[4] = 0;
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 0x50))(1);
    param_1[6] = 0;
  }
  return;
}

