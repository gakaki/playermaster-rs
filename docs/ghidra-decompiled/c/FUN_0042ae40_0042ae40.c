
int * __thiscall FUN_0042ae40(void *this,int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x2c) || ((code *)puVar1[10] == (code *)0x0)) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = (*(code *)puVar1[10])(puVar1);
  FUN_00422640(param_1,iVar2);
  return param_1;
}

