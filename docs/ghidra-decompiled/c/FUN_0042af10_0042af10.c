
int * __thiscall FUN_0042af10(void *this,int *param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x5c) || ((code *)puVar1[0x16] == (code *)0x0)) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = (*(code *)puVar1[0x16])(puVar1,param_2);
  FUN_00422540(param_1,iVar2);
  return param_1;
}

