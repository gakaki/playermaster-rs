
int * __thiscall FUN_0042a280(void *this,int *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((((*puVar1 < 100) || ((code *)puVar1[0x18] == (code *)0x0)) ||
      (iVar2 = *(int *)(param_2 + 4), iVar2 == 0)) || (*(int *)(iVar2 + 4) == 0)) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = (*(code *)puVar1[0x18])(puVar1,iVar2);
  FUN_00422640(param_1,iVar2);
  return param_1;
}

