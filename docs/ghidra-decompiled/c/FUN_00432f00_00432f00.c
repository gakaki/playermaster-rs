
int * __thiscall FUN_00432f00(void *this,int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x20) || ((code *)puVar1[7] == (code *)0x0)) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = (*(code *)puVar1[7])(puVar1);
  FUN_0042bbc0(param_1,iVar2);
  return param_1;
}

