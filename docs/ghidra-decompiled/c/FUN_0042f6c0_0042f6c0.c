
void __thiscall FUN_0042f6c0(void *this,undefined1 param_1,int param_2,int param_3)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((0xef < *puVar1) && (pcVar2 = (code *)puVar1[0x3b], pcVar2 != (code *)0x0)) {
    if (param_3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_3 + 4;
    }
    if (param_2 != 0) {
      (*pcVar2)(puVar1,param_1,param_2 + 4,iVar3);
      return;
    }
    (*pcVar2)(puVar1,param_1,0,iVar3);
  }
  return;
}

