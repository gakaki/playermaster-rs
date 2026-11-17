
void __thiscall FUN_00433420(void *this,int param_1,int param_2,undefined1 param_3)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((0x2b < *puVar1) && (pcVar2 = (code *)puVar1[10], pcVar2 != (code *)0x0)) {
    if (param_2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_2 + 4;
    }
    if (param_1 != 0) {
      (*pcVar2)(puVar1,param_1 + 4,iVar3,param_3);
      return;
    }
    (*pcVar2)(puVar1,0,iVar3,param_3);
  }
  return;
}

