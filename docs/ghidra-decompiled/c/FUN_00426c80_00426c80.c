
void __thiscall FUN_00426c80(void *this,int param_1,int param_2,undefined1 param_3)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((((0x4b < *puVar1) && ((code *)puVar1[0x12] != (code *)0x0)) &&
      (iVar2 = *(int *)(param_1 + 4), iVar2 != 0)) && (*(int *)(iVar2 + 4) != 0)) {
    (*(code *)puVar1[0x12])(puVar1,iVar2,*(undefined4 *)(param_2 + 4),param_3);
  }
  return;
}

