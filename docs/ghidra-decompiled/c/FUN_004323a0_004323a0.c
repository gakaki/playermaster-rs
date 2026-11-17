
void __fastcall FUN_004323a0(int param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(int *)(param_1 + -0x14) + 4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(*(int *)(param_1 + -0x14));
  }
  LOCK();
  *(int *)(param_1 + -8) = *(int *)(param_1 + -8) + 1;
  UNLOCK();
  return;
}

