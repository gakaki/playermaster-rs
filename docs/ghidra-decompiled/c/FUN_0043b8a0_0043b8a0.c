
void __fastcall FUN_0043b8a0(int param_1)

{
  (*(code *)**(undefined4 **)
              (*(int *)(param_1 + 8) + 4 + *(int *)(*(int *)(*(int *)(param_1 + 8) + 4) + 4)))();
  LOCK();
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  UNLOCK();
  return;
}

