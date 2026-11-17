
bool __thiscall FUN_00424ea0(void *this,int param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = *(uint **)((int)this + -4);
  if ((((*puVar1 < 0xc) || ((code *)puVar1[2] == (code *)0x0)) ||
      (iVar2 = *(int *)(param_1 + 4), iVar2 == 0)) || (*(int *)(iVar2 + 4) == 0)) {
    return false;
  }
  iVar2 = (*(code *)puVar1[2])(puVar1,iVar2,param_2,0);
  return iVar2 != 0;
}

