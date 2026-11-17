
void __fastcall FUN_0043b110(int param_1)

{
  (*(code *)**(undefined4 **)
              (*(int *)(param_1 + 8) + 4 + *(int *)(*(int *)(*(int *)(param_1 + 8) + 4) + 4)))();
  LOCK();
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  UNLOCK();
  return;
}

