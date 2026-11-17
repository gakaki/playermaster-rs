
void __fastcall FUN_0043dc40(int param_1)

{
  (*(code *)**(undefined4 **)
              (*(int *)(param_1 + 8) + 4 + *(int *)(*(int *)(*(int *)(param_1 + 8) + 4) + 4)))();
  LOCK();
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  UNLOCK();
  return;
}

