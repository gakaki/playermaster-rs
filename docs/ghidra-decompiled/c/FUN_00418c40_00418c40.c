
void __fastcall FUN_00418c40(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = param_1[2] - param_1[1];
  iVar1 = iVar3 >> 0x1f;
  if (iVar3 / 0x30 + iVar1 == iVar1) {
    iVar1 = (param_1[1] - *param_1) / 0x30;
    if (iVar1 == 0x5555555) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    uVar4 = iVar1 + 1;
    uVar2 = (param_1[2] - *param_1) / 0x30;
    if (0x5555555 - (uVar2 >> 1) < uVar2) {
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = uVar4;
      }
      FUN_00419330(param_1,uVar2);
      return;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar4) {
      uVar2 = uVar4;
    }
    FUN_00419330(param_1,uVar2);
  }
  return;
}

