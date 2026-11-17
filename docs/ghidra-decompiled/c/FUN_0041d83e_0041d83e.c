
_ATL_BASE_MODULE70 * __fastcall FUN_0041d83e(_ATL_BASE_MODULE70 *param_1)

{
  uint uVar1;
  BOOL BVar2;
  
  ATL::_ATL_BASE_MODULE70::_ATL_BASE_MODULE70(param_1);
  *(undefined4 *)param_1 = 0x38;
  *(undefined4 *)(param_1 + 8) = 0x400000;
  *(undefined4 *)(param_1 + 4) = 0x400000;
  *(undefined4 *)(param_1 + 0xc) = 0xc00;
  *(undefined **)(param_1 + 0x10) = &DAT_0044ab08;
  uVar1 = FUN_004117a0((LPCRITICAL_SECTION)(param_1 + 0x14));
  if ((int)uVar1 < 0) {
    BVar2 = IsDebuggerPresent();
    if (BVar2 != 0) {
      OutputDebugStringW(L"ERROR : Unable to initialize critical section in CAtlBaseModule\n");
    }
    DAT_00464fdc = 1;
  }
  return param_1;
}

