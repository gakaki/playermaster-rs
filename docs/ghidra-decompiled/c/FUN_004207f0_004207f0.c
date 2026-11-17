
bool __thiscall FUN_004207f0(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((((*puVar1 < 0x44) || ((code *)puVar1[0x10] == (code *)0x0)) ||
      (iVar2 = *(int *)(param_1 + 4), iVar2 == 0)) || (*(int *)(iVar2 + 4) == 0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x10])(puVar1,iVar2,0);
  return iVar2 != 0;
}

