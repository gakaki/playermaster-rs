
bool __thiscall FUN_00427e00(void *this,undefined1 param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x7c) || ((code *)puVar1[0x1e] == (code *)0x0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x1e])(puVar1,param_1);
  return iVar2 != 0;
}

