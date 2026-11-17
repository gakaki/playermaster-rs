
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0040cd60(int param_1)

{
  int iVar1;
  int iVar2;
  HWND hWnd;
  DWORD idAttachTo;
  DWORD idAttach;
  int *piVar3;
  HANDLE lParam;
  LPCWSTR unaff_ESI;
  float fVar4;
  undefined4 uStack_88;
  LPCWSTR name;
  int iVar5;
  undefined1 auStack_5c [12];
  int local_50;
  uint uStack_48;
  void *pvStack_40;
  int iStack_3c;
  int iStack_38;
  tagRECT tStack_34;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_0044668b;
  local_14 = ExceptionList;
  local_1c = DAT_0046400c ^ (uint)auStack_5c;
  ExceptionList = &local_14;
  local_50 = param_1;
  Ordinal_10353();
  GetSystemMenu(*(HWND *)(param_1 + 0x20),0);
  iVar2 = Ordinal_4842();
  if (iVar2 != 0) {
    Ordinal_296();
    puStack_10 = (undefined1 *)0x0;
    Ordinal_8346();
    if (*(int *)(unaff_ESI + -6) != 0) {
      uStack_88 = 0x40cdf7;
      AppendMenuW(*(HMENU *)(iVar2 + 4),0x800,0,(LPCWSTR)0x0);
      uStack_88 = 0x40ce04;
      AppendMenuW(*(HMENU *)(iVar2 + 4),0,0x10,unaff_ESI);
    }
    local_14 = (void *)0xffffffff;
    Ordinal_1042();
  }
  SendMessageW(*(HWND *)(param_1 + 0x20),0x80,1,*(LPARAM *)(param_1 + 0x98));
  SendMessageW(*(HWND *)(param_1 + 0x20),0x80,0,*(LPARAM *)(param_1 + 0x98));
  if (DAT_00464e48 != 0) {
    FUN_004108b0();
  }
  iVar1 = DAT_00464e48;
  *(undefined4 *)(*(int *)(param_1 + 0x9c) + 8) = 1;
  iVar2 = *(int *)(param_1 + 0xa4);
  iVar5 = *(int *)(iVar2 + 4);
  if (iVar5 != 0) {
    *(undefined4 *)(*(int *)(iVar5 + 0x98) + 0x430) = 0;
    *(undefined4 *)(*(int *)(*(int *)(iVar2 + 4) + 0x98) + 0x498) = 1;
  }
  if (iVar1 != 0) {
    FUN_004105f0();
  }
  Ordinal_14094();
  tStack_34.left = 0;
  tStack_34.top = 0;
  tStack_34.right = 0;
  tStack_34.bottom = 0;
  GetWindowRect(*(HWND *)(param_1 + 0x20),&tStack_34);
  Ordinal_2823();
  iStack_38 = iStack_38 + ((tStack_34.top - iStack_38) * 2) / 3;
  fVar4 = GetDpi();
  tStack_34.left = 0;
  tStack_34.top = iStack_38 - (int)(fVar4 * _DAT_0044ff60);
  fVar4 = GetDpi();
  iVar5 = 0x1fde;
  tStack_34.right = tStack_34.left - (int)(fVar4 * _DAT_0044ff5c);
  Ordinal_5327();
  name = (LPCWSTR)0x1;
  uStack_88 = tStack_34.left - iStack_3c;
  Ordinal_8699(iStack_3c,iStack_38);
  Ordinal_5327(0x1fde,0);
  Ordinal_14094();
  hWnd = GetForegroundWindow();
  idAttachTo = GetWindowThreadProcessId(hWnd,(LPDWORD)0x0);
  uStack_88 = idAttachTo;
  idAttach = GetCurrentThreadId();
  AttachThreadInput(idAttach,idAttachTo,1);
  SetWindowPos(*(HWND *)(iVar5 + 0x20),(HWND)0xffffffff,0,0,0,0,3);
  iVar2 = PeekMessageW((LPMSG)(auStack_5c + -0x18),(HWND)0x0,0,0,1);
  while (iVar2 != 0) {
    TranslateMessage((MSG *)(auStack_5c + -0x18));
    DispatchMessageW((MSG *)(auStack_5c + -0x18));
    iVar2 = PeekMessageW((LPMSG)(auStack_5c + -0x18),(HWND)0x0,0,0,1);
  }
  SetWindowPos(*(HWND *)(iVar5 + 0x20),(HWND)0xfffffffe,0,0,0,0,3);
  SetForegroundWindow(*(HWND *)(iVar5 + 0x20));
  AttachThreadInput(idAttach,uStack_88,0);
  CWndShadow::Create((CWndShadow *)(iVar5 + 0xa8),*(HWND__ **)(iVar5 + 0x20));
  fVar4 = GetDpi();
  CWndShadow::SetSize((CWndShadow *)(iVar5 + 0xa8),(int)(fVar4 * _DAT_0044fed0));
  CWndShadow::SetPosition((CWndShadow *)(iVar5 + 0xa8),0,0);
  piVar3 = (int *)FUN_00406550();
  iStack_38 = 1;
  FUN_00405ae0(auStack_5c + -0x24,piVar3,L"\\Resource\\PlayerMaster.ico");
  iStack_38 = CONCAT31(iStack_38._1_3_,3);
  Ordinal_1042();
  lParam = LoadImageW((HINSTANCE)0x0,name,1,0x20,0x20,0x10);
  SendMessageW(*(HWND *)(iVar5 + 0x20),0x80,0,(LPARAM)lParam);
  piVar3 = (int *)Ordinal_2214();
  if (piVar3 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(*piVar3 + 0x7c))();
  }
  SendMessageW(*(HWND *)(iVar2 + 0x20),0x80,1,(LPARAM)lParam);
  SetTimer(*(HWND *)(iVar5 + 0x20),0xfa1,500,(TIMERPROC)0x0);
  SetTimer(*(HWND *)(iVar5 + 0x20),4000,500,(TIMERPROC)0x0);
  SetTimer(*(HWND *)(iVar5 + 0x20),0xfa2,500,(TIMERPROC)0x0);
  SetTimer(*(HWND *)(iVar5 + 0x20),0xfa3,2000,(TIMERPROC)0x0);
  Ordinal_1042();
  ExceptionList = pvStack_40;
  FUN_0041d025(uStack_48 ^ (uint)&uStack_88);
  return;
}

