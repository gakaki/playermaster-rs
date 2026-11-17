
int * __thiscall FUN_0042ec00(void *this,int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x34) || ((code *)puVar1[0xc] == (code *)0x0)) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = (*(code *)puVar1[0xc])(puVar1);
  FUN_0042f950(param_1,iVar2);
  return param_1;
}

