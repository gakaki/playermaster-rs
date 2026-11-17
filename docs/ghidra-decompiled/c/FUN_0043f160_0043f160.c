
int * __thiscall
FUN_0043f160(void *this,int *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
            undefined4 param_5)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x44) || ((code *)puVar1[0x10] == (code *)0x0)) {
    *param_1 = 0;
    return param_1;
  }
  iVar2 = (*(code *)puVar1[0x10])(puVar1,param_2,param_3,param_4,param_5);
  FUN_0041e640(param_1,iVar2);
  return param_1;
}

