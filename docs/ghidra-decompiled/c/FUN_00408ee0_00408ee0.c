
void __thiscall
FUN_00408ee0(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 *param_11,undefined1 param_12,
            uint param_13)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00445ed9;
  local_10 = ExceptionList;
  uVar3 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  local_8 = 0;
  if (*(int *)((int)this + 0x98) != 0) {
    iVar4 = param_1 * 0x68;
    *(int *)(iVar4 + *(int *)((int)this + 0x98)) = param_1;
    *(undefined4 *)(iVar4 + 0x2c + *(int *)((int)this + 0x98)) = param_2;
    *(undefined4 *)(iVar4 + 0x20 + *(int *)((int)this + 0x98)) = param_7;
    *(undefined4 *)(iVar4 + 0x1c + *(int *)((int)this + 0x98)) = param_9;
    puVar1 = (undefined4 *)(iVar4 + 0xc + *(int *)((int)this + 0x98));
    *puVar1 = param_3;
    puVar1[1] = param_4;
    puVar1[2] = param_5;
    puVar1[3] = param_6;
    *(undefined4 *)(iVar4 + 4 + *(int *)((int)this + 0x98)) = 0;
    Ordinal_1518(&param_12,uVar3);
    puVar2 = (uint *)(*(int *)((int)this + 0x98) + 100 + iVar4);
    *puVar2 = *puVar2 | param_13;
    if (param_11 != (undefined4 *)0x0) {
      *(undefined4 *)(*(int *)((int)this + 0x98) + 0x30 + param_1 * 0x68) = *param_11;
      *(undefined4 *)(*(int *)((int)this + 0x98) + 0x34 + param_1 * 0x68) = param_11[1];
      *(undefined4 *)(*(int *)((int)this + 0x98) + 0x38 + param_1 * 0x68) = param_11[2];
      *(undefined4 *)(*(int *)((int)this + 0x98) + 0x3c + param_1 * 0x68) = param_11[3];
    }
    *(undefined4 *)(iVar4 + 0x54 + *(int *)((int)this + 0x98)) = param_10;
  }
  Ordinal_1042();
  ExceptionList = local_10;
  return;
}

