
void __thiscall
FUN_0042f530(void *this,int param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((0x9b < *puVar1) && ((code *)puVar1[0x26] != (code *)0x0)) {
    if (param_1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1 + 4;
    }
    (*(code *)puVar1[0x26])(puVar1,iVar2,param_2,param_3,param_4);
  }
  return;
}

