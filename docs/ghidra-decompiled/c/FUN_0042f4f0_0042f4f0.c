
void __thiscall FUN_0042f4f0(void *this,int param_1)

{
  uint *puVar1;
  code *pcVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((0x97 < *puVar1) && (pcVar2 = (code *)puVar1[0x25], pcVar2 != (code *)0x0)) {
    if (param_1 != 0) {
      (*pcVar2)(puVar1,param_1 + 4);
      return;
    }
    (*pcVar2)(puVar1,0);
  }
  return;
}

