
void __fastcall FUN_0041eac0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)param_1[1];
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 == puVar1) {
    param_1[1] = (int)puVar2;
    return;
  }
  do {
    (**(code **)*puVar2)(0);
    puVar2 = puVar2 + 3;
  } while (puVar2 != puVar1);
  param_1[1] = *param_1;
  return;
}

