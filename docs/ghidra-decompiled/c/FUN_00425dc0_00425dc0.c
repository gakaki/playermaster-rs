
int * __thiscall FUN_00425dc0(void *this,int *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x58) || ((code *)puVar1[0x15] == (code *)0x0)) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = (*(code *)puVar1[0x15])(puVar1,*(undefined4 *)(param_2 + 4));
  FUN_0041f660(param_1,iVar2);
  return param_1;
}

