
int * __thiscall FUN_00430c40(void *this,int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x1c) || ((code *)puVar1[6] == (code *)0x0)) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = (*(code *)puVar1[6])(puVar1);
  FUN_00423da0(param_1,iVar2);
  return param_1;
}

