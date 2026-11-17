
bool __thiscall FUN_004271c0(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)((int)this + -4);
  if (((*puVar1 < 0x8c) || ((code *)puVar1[0x22] == (code *)0x0)) || (param_1 < 0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x22])(puVar1,param_1);
  return iVar2 != 0;
}

