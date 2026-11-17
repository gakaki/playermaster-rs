
int * __thiscall FUN_00425e20(void *this,int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x54) || ((code *)puVar1[0x14] == (code *)0x0)) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = (*(code *)puVar1[0x14])(puVar1,param_2,param_3);
  FUN_0041f660(param_1,iVar2);
  return param_1;
}

