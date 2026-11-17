
void __thiscall FUN_00420990(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((((0x3b < *puVar1) && ((code *)puVar1[0xe] != (code *)0x0)) &&
      (iVar2 = *(int *)(param_1 + 4), iVar2 != 0)) && (*(int *)(iVar2 + 4) != 0)) {
    (*(code *)puVar1[0xe])(puVar1,iVar2,0);
  }
  return;
}

