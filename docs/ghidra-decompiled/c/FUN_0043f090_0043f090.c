
int * __thiscall
FUN_0043f090(void *this,int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x40) || ((code *)puVar1[0xf] == (code *)0x0)) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = (*(code *)puVar1[0xf])(puVar1,param_2,param_3,param_4,param_5,param_6);
  FUN_0041e640(param_1,iVar2);
  return param_1;
}

