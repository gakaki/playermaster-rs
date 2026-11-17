
void __fastcall FUN_0040b610(int param_1)

{
  FARPROC pFVar1;
  
  cef_shutdown();
  ColorLightControl_Release();
  CommonData_Release();
  CoUninitialize();
  if (*(int *)(param_1 + 0x148) != 0) {
    GdiplusShutdown(*(int *)(param_1 + 0x148));
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  if (*(int *)(param_1 + 0x150) != 0) {
    pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 0x14c),"StopCrashDoctor");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(*(undefined4 *)(param_1 + 0x150));
      *(undefined4 *)(param_1 + 0x150) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0040b67b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_4546();
  return;
}

