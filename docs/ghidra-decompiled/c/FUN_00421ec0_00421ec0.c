
bool __fastcall FUN_00421ec0(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(int *)(param_1 + -0x14) + 0xc);
  if (pcVar1 == (code *)0x0) {
    return false;
  }
  iVar2 = (*pcVar1)(*(int *)(param_1 + -0x14));
  return iVar2 != 0;
}

