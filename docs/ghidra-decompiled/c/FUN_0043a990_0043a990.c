
void __fastcall FUN_0043a990(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)param_1[1];
    for (; puVar2 != puVar1; puVar2 = puVar2 + 7) {
      (**(code **)*puVar2)(0);
    }
    Ordinal_1508(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

