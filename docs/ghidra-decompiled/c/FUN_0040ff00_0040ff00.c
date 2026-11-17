
void FUN_0040ff00(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_00464e7c - DAT_00464e78 >> 2 == 0) {
    iVar2 = DAT_00464e78 - DAT_00464e74 >> 2;
    if (iVar2 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    uVar3 = iVar2 + 1;
    uVar1 = DAT_00464e7c - DAT_00464e74 >> 2;
    if (0x3fffffff - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar3;
      }
      FUN_0040ff70(uVar1);
      return;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar3) {
      uVar1 = uVar3;
    }
    FUN_0040ff70(uVar1);
  }
  return;
}

