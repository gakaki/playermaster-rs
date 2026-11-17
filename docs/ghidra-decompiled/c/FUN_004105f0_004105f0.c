
void FUN_004105f0(void)

{
  int iVar1;
  
  iVar1 = DAT_00464e48;
  if (*(int *)(DAT_00464e48 + 8) == 0) {
    DeviceManager_Init((ILableBase **)(DAT_00464e48 + 8),
                       *(IPlayerMasterCallBack **)(DAT_00464e48 + 0x18));
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
    ProgramManager_Init((ILableBase **)(iVar1 + 0xc),*(IPlayerMasterCallBack **)(iVar1 + 0x18));
  }
  if (*(int *)(iVar1 + 0x14) == 0) {
    MediaLib_Init((ILableBase **)(iVar1 + 0x14),*(IPlayerMasterCallBack **)(iVar1 + 0x18));
  }
  if (*(int *)(iVar1 + 0x10) == 0) {
    ScheduleManager_Init((ILableBase **)(iVar1 + 0x10),*(IPlayerMasterCallBack **)(iVar1 + 0x18));
  }
  return;
}

