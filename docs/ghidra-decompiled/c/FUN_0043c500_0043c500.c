
void __fastcall FUN_0043c500(int param_1)

{
  (*(code *)**(undefined4 **)
              (*(int *)(param_1 + 8) + 4 + *(int *)(*(int *)(*(int *)(param_1 + 8) + 4) + 4)))();
  LOCK();
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  UNLOCK();
  return;
}

