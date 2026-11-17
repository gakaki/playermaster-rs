
undefined4 * __fastcall FUN_0040ab30(undefined4 *param_1)

{
  param_1[1] = &DAT_0044e500;
  param_1[3] = &DAT_0044e4f8;
  param_1[6] = CefBaseRefCounted::vftable;
  *param_1 = CefApp::vftable;
  *(undefined ***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = CefApp::vftable;
  param_1[2] = CefBrowserProcessHandler::vftable;
  *(undefined ***)(*(int *)(param_1[3] + 4) + 0xc + (int)param_1) =
       CefBrowserProcessHandler::vftable;
  *param_1 = SimpleApp::vftable;
  param_1[2] = SimpleApp::vftable;
  *(undefined ***)(*(int *)(param_1[1] + 4) + 4 + (int)param_1) = SimpleApp::vftable;
  *(int *)(*(int *)(param_1[1] + 4) + (int)param_1) = *(int *)(param_1[1] + 4) + -0x14;
  param_1[4] = 0;
  return param_1;
}

