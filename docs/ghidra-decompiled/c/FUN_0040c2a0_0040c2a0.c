
void __thiscall FUN_0040c2a0(void *this,LPARAM param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    PostMessageW(*(HWND *)(*(int *)((int)this + 4) + 0x20),0xe13,0,param_1);
  }
  iVar1 = DAT_00464e48;
  if (DAT_00464e48 != 0) {
    if (*(int **)(DAT_00464e48 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(DAT_00464e48 + 0xc) + 0xc))();
    }
    if (*(int **)(iVar1 + 0x10) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040c2df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(iVar1 + 0x10) + 0x3c))();
      return;
    }
  }
  return;
}

