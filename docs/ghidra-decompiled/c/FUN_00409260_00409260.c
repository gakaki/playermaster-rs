
undefined4 __thiscall FUN_00409260(void *this,int param_1)

{
  int iVar1;
  
  if ((6 < param_1) || (iVar1 = *(int *)((int)this + 0x98), iVar1 == 0)) {
    return 0;
  }
  if ((param_1 != 3) && (iVar1 != -0x138)) {
    *(undefined4 *)(iVar1 + 0x140) = 0;
  }
  if ((param_1 != 4) && (*(int *)((int)this + 0x98) != -0x1a0)) {
    *(undefined4 *)(*(int *)((int)this + 0x98) + 0x1a8) = 0;
  }
  if ((param_1 != 5) && (*(int *)((int)this + 0x98) != -0x208)) {
    *(undefined4 *)(*(int *)((int)this + 0x98) + 0x210) = 0;
  }
  if ((param_1 != 6) && (*(int *)((int)this + 0x98) != -0x270)) {
    *(undefined4 *)(*(int *)((int)this + 0x98) + 0x278) = 0;
  }
  *(undefined4 *)(param_1 * 0x68 + 8 + *(int *)((int)this + 0x98)) = 1;
  return 1;
}

