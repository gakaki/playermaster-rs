
bool __thiscall FUN_00427ad0(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)((int)this + -4);
  if (((*puVar1 < 0x84) || ((code *)puVar1[0x20] == (code *)0x0)) || (param_1 < 0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x20])(puVar1,param_1);
  return iVar2 != 0;
}

