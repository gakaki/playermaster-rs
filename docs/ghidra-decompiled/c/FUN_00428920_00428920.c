
void __fastcall FUN_00428920(int param_1)

{
  (*(code *)**(undefined4 **)
              (*(int *)(param_1 + 8) + 4 + *(int *)(*(int *)(*(int *)(param_1 + 8) + 4) + 4)))();
  LOCK();
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  UNLOCK();
  return;
}

