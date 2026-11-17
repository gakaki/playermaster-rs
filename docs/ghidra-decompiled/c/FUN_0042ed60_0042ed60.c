
int * __thiscall FUN_0042ed60(void *this,int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x38) || ((code *)puVar1[0xd] == (code *)0x0)) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = (*(code *)puVar1[0xd])(puVar1);
  FUN_0042fc80(param_1,iVar2);
  return param_1;
}

