
void __thiscall FUN_0042ef20(void *this,int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  code *pcVar2;
  
  CGridCellBase::EndEdit(this);
  puVar1 = *(uint **)((int)this + -4);
  if ((0xc3 < *puVar1) && (pcVar2 = (code *)puVar1[0x30], pcVar2 != (code *)0x0)) {
    if (param_2 != 0) {
      (*pcVar2)(puVar1,*(undefined4 *)(param_1 + 4),param_2 + 4,param_3);
      return;
    }
    (*pcVar2)(puVar1,*(undefined4 *)(param_1 + 4),0,param_3);
  }
  return;
}

