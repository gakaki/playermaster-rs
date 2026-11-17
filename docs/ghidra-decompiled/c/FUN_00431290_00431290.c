
bool __thiscall FUN_00431290(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((((*puVar1 < 0x48) || ((code *)puVar1[0x11] == (code *)0x0)) ||
      (iVar2 = *(int *)(param_1 + 4), iVar2 == 0)) || (*(int *)(iVar2 + 4) == 0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x11])(puVar1,iVar2,0);
  return iVar2 != 0;
}

