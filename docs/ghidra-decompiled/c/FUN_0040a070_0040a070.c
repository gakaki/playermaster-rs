
undefined4 __thiscall FUN_0040a070(void *this,int param_1)

{
  IDataManager *pIVar1;
  int iVar2;
  CConfigSaveAndLoad *this_00;
  
  if (param_1 == 1) {
    *(undefined4 *)((int)this + 0x268) = 1;
  }
  else {
    if (param_1 != 2) {
      if (param_1 != 3) {
        return 0;
      }
      pIVar1 = CommonData_Get();
      if (pIVar1 != (IDataManager *)0x0) {
        iVar2 = (**(code **)(*(int *)pIVar1 + 0x2c))();
        if (iVar2 != 0) {
          *(uint *)(iVar2 + 8) = (uint)(*(int *)((int)this + 0x268) != 0);
        }
        this_00 = (CConfigSaveAndLoad *)(**(code **)(*(int *)pIVar1 + 0x34))();
        if (this_00 != (CConfigSaveAndLoad *)0x0) {
          CConfigSaveAndLoad::SaveConfigFile(this_00);
        }
      }
      (**(code **)(*(int *)this + 0x184))();
      return 0;
    }
    *(undefined4 *)((int)this + 0x268) = 0;
  }
  FUN_00409cb0((int)this);
  (**(code **)(*(int *)this + 0x1b8))();
  return 0;
}

