
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0040af80(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446299;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  Ordinal_993(1,DAT_0046400c ^ (int)register0x00000010 - 4U,&DAT_00464e80);
  local_8 = 0;
  CAppChecking::CAppChecking((CAppChecking *)&DAT_00464f98);
  _DAT_00464e80 = CPlayerMasterApp::vftable;
  _DAT_00464fb8 = 1;
  _DAT_00464fbc = 0;
  _DAT_00464fc0 = 0;
  _DAT_00464fc4 = 0;
  _DAT_00464fcc = 0;
  _DAT_00464fd0 = 0;
  _DAT_00464fc8 = 0;
  ExceptionList = local_10;
  return &DAT_00464e80;
}

