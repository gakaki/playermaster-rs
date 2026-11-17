
void __fastcall FUN_0043e0d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  if (piVar3 != (int *)0x0) {
    piVar1 = (int *)param_1[1];
    for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
      iVar2 = *piVar3;
      if (iVar2 != 0) {
        (**(code **)(*(int *)(iVar2 + *(int *)(*(int *)(iVar2 + 4) + 4) + 4) + 4))();
      }
    }
    Ordinal_1508(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

