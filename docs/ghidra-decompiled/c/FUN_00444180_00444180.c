
int * __thiscall FUN_00444180(void *this,int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x30) || ((code *)puVar1[0xb] == (code *)0x0)) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = (*(code *)puVar1[0xb])(puVar1);
  FUN_0041e640(param_1,iVar2);
  return param_1;
}

