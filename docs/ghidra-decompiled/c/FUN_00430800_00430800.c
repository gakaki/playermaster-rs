
void __fastcall FUN_00430800(int param_1)

{
  (**(code **)**(undefined4 **)(param_1 + 8))();
  LOCK();
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  UNLOCK();
  return;
}

