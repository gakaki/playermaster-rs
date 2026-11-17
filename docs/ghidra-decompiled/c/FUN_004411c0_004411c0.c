
int * __thiscall FUN_004411c0(void *this,int *param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((((*puVar1 < 0x34) || ((code *)puVar1[0xc] == (code *)0x0)) ||
      (iVar2 = *(int *)(param_3 + 4), iVar2 == 0)) || (*(int *)(iVar2 + 4) == 0)) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = (*(code *)puVar1[0xc])(puVar1,param_2,iVar2);
  FUN_00438ec0(param_1,iVar2);
  return param_1;
}

