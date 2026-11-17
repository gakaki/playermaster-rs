
void __fastcall FUN_00419e30(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
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
    iVar4 = param_2 + 0x30;
    iVar3 = param_1 + 0x30;
    do {
      *(undefined4 *)(iVar3 + -0x30) = *(undefined4 *)(iVar3 + (param_2 - param_1) + -0x30);
      Ordinal_1518(iVar4 + -0x2c);
      Ordinal_1518(iVar4 + -0x28);
      Ordinal_1518(iVar4 + -0x24);
      *(undefined4 *)(iVar3 + -0x20) = *(undefined4 *)(iVar4 + -0x20);
      *(undefined4 *)(iVar3 + -0x1c) = *(undefined4 *)(iVar4 + -0x1c);
      *(undefined1 *)(iVar3 + -0x18) = *(undefined1 *)(iVar4 + -0x18);
      Ordinal_1518(iVar4 + -0x14);
      Ordinal_1518(iVar4 + -0x10);
      *(undefined1 *)(iVar3 + -0xc) = *(undefined1 *)(iVar4 + -0xc);
      Ordinal_1518(iVar4 + -8);
      Ordinal_1518(iVar4 + -4);
      Ordinal_1518(iVar4);
      Ordinal_1518(iVar4 + 4);
      *(undefined1 *)(iVar3 + 8) = *(undefined1 *)(iVar4 + 8);
      *(undefined1 *)(iVar3 + 9) = *(undefined1 *)(iVar4 + 9);
      *(undefined1 *)(iVar3 + 10) = *(undefined1 *)(iVar4 + 10);
      *(undefined1 *)(iVar3 + 0xb) = *(undefined1 *)(iVar4 + 0xb);
      *(undefined1 *)(iVar3 + 0xc) = *(undefined1 *)(iVar4 + 0xc);
      *(undefined1 *)(iVar3 + 0xd) = *(undefined1 *)(iVar4 + 0xd);
      *(undefined1 *)(iVar3 + 0xe) = *(undefined1 *)(iVar4 + 0xe);
      puVar1 = (undefined1 *)(iVar4 + 0xf);
      iVar4 = iVar4 + 0x40;
      *(undefined1 *)(iVar3 + 0xf) = *puVar1;
      iVar3 = iVar3 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

