
void __fastcall FUN_0043fa70(int param_1)

{
  (*(code *)**(undefined4 **)
              (*(int *)(param_1 + 8) + 4 + *(int *)(*(int *)(*(int *)(param_1 + 8) + 4) + 4)))();
  LOCK();
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  UNLOCK();
  return;
}

