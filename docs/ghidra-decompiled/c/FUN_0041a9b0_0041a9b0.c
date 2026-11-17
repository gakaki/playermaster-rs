
int __fastcall FUN_0041a9b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == param_2) {
    return param_3;
  }
  iVar5 = param_1 + 8;
  do {
    Ordinal_1518(iVar5 + -8);
    Ordinal_1518(iVar5 + -4);
    Ordinal_1518(iVar5);
    *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(iVar5 + 4);
    *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(iVar5 + 8);
    *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(iVar5 + 0xc);
    *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(iVar5 + 0x10);
    *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(iVar5 + 0x14);
    *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(iVar5 + 0x18);
    *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(iVar5 + 0x1c);
    *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(iVar5 + 0x20);
    *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(iVar5 + 0x24);
    Ordinal_1518(iVar5 + 0x28);
    Ordinal_1518(iVar5 + 0x2c);
    uVar2 = *(undefined4 *)(iVar5 + 0x34);
    uVar3 = *(undefined4 *)(iVar5 + 0x38);
    uVar4 = *(undefined4 *)(iVar5 + 0x3c);
    *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(iVar5 + 0x30);
    *(undefined4 *)(param_3 + 0x3c) = uVar2;
    *(undefined4 *)(param_3 + 0x40) = uVar3;
    *(undefined4 *)(param_3 + 0x44) = uVar4;
    param_3 = param_3 + 0x48;
    iVar1 = iVar5 + 0x40;
    iVar5 = iVar5 + 0x48;
  } while (iVar1 != param_2);
  return param_3;
}

