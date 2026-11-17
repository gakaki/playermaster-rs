
void __fastcall FUN_0041a940(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 != 0) {
    if ((param_1 == 0) || (param_2 == 0)) {
      Ordinal_2341();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = param_2 + 0xc;
    iVar3 = param_1 + 0xc;
    do {
      Ordinal_1518((param_2 - param_1) + -0xc + iVar3);
      *(undefined4 *)(iVar3 + -8) = *(undefined4 *)(iVar4 + -8);
      *(undefined4 *)(iVar3 + -4) = *(undefined4 *)(iVar4 + -4);
      Ordinal_1518(iVar4);
      puVar1 = (undefined4 *)(iVar4 + 4);
      iVar4 = iVar4 + 0x14;
      *(undefined4 *)(iVar3 + 4) = *puVar1;
      iVar3 = iVar3 + 0x14;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

