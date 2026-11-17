
undefined4 * __thiscall FUN_00410470(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  IDataManager *pIVar2;
  CConfigSaveAndLoad *this_00;
  
  *(undefined ***)this = CPMManager::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  puVar1 = (undefined4 *)Ordinal_1506(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = CPlayerMasterCallBack::vftable;
    puVar1[1] = 0;
  }
  *(undefined4 **)((int)this + 0x18) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_1;
  }
  pIVar2 = CommonData_Get();
  if (pIVar2 != (IDataManager *)0x0) {
    this_00 = (CConfigSaveAndLoad *)(**(code **)(*(int *)pIVar2 + 0x34))();
    CConfigSaveAndLoad::LoadLanDataFromFile(this_00);
  }
  return this;
}

