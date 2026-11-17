
int * __thiscall FUN_00435ea0(void *this,int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x70) || ((code *)puVar1[0x1b] == (code *)0x0)) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = (*(code *)puVar1[0x1b])(puVar1);
  FUN_00435220(param_1,iVar2);
  return param_1;
}

