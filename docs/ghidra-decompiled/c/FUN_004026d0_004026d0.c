
void __fastcall FUN_004026d0(int param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = 0;
  iVar3 = 0;
  iVar5 = 0x3c;
  puVar1 = (ushort *)(param_1 + 0x34);
  do {
    iVar2 = iVar2 + (uint)puVar1[-2];
    iVar3 = iVar3 + (uint)*puVar1;
    iVar5 = iVar5 + -1;
    puVar1 = puVar1 + 4;
  } while (iVar5 != 0);
  iVar5 = 0;
  iVar4 = 0;
  iVar6 = 0x40;
  puVar1 = (ushort *)(param_1 + 0x218);
  do {
    iVar5 = iVar5 + (uint)puVar1[-2];
    iVar4 = iVar4 + (uint)*puVar1;
    iVar6 = iVar6 + -1;
    puVar1 = puVar1 + 4;
  } while (iVar6 != 0);
  **(ushort **)(param_1 + 0x1af50) =
       (ushort)((uint)*(ushort *)(param_1 + 0x2c) + (uint)*(ushort *)(param_1 + 0x28) +
                (uint)*(ushort *)(param_1 + 0x24) + (uint)*(ushort *)(param_1 + 0x20) +
                (uint)*(ushort *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x18) +
                (uint)*(ushort *)(param_1 + 0x14) + iVar4 + iVar5 <=
               (uint)*(ushort *)(param_1 + 0x210) + iVar3 + iVar2 >> 2);
  return;
}

