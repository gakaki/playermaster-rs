
int * __thiscall FUN_004443c0(void *this,int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x18) || ((code *)puVar1[5] == (code *)0x0)) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = (*(code *)puVar1[5])(puVar1);
  FUN_00444570(param_1,iVar2);
  return param_1;
}

