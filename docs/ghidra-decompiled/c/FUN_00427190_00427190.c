
bool __thiscall FUN_00427190(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0x88) || ((code *)puVar1[0x21] == (code *)0x0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x21])(puVar1,*(undefined4 *)(param_1 + 4));
  return iVar2 != 0;
}

