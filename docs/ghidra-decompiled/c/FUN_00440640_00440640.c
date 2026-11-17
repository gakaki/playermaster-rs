
void __fastcall FUN_00440640(int param_1)

{
  (*(code *)**(undefined4 **)
              (*(int *)(param_1 + 8) + 4 + *(int *)(*(int *)(*(int *)(param_1 + 8) + 4) + 4)))();
  LOCK();
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  UNLOCK();
  return;
}

