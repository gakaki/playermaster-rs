
void __fastcall FUN_0042b950(int param_1)

{
  (*(code *)**(undefined4 **)
              (*(int *)(param_1 + 8) + 4 + *(int *)(*(int *)(*(int *)(param_1 + 8) + 4) + 4)))();
  LOCK();
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  UNLOCK();
  return;
}

