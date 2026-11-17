
void __fastcall FUN_0043f7b0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + -4) + 4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(int *)(param_1 + -4));
  }
  LOCK();
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  UNLOCK();
  return;
}

