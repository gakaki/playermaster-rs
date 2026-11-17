
void __thiscall FUN_00420300(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((((0x5f < *puVar1) && ((code *)puVar1[0x17] != (code *)0x0)) &&
      (iVar2 = *(int *)(param_1 + 4), iVar2 != 0)) && (*(int *)(iVar2 + 4) != 0)) {
    (*(code *)puVar1[0x17])(puVar1,iVar2,0);
  }
  return;
}

