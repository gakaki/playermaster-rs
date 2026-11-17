
bool __thiscall FUN_00427f90(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((*puVar1 < 0xa0) || ((code *)puVar1[0x27] == (code *)0x0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[0x27])(puVar1,*(undefined4 *)(param_1 + 4),param_2,param_3);
  return iVar2 != 0;
}

