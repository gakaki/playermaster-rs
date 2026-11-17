
void __fastcall FUN_00430760(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)param_1[1];
  piVar3 = (int *)*param_1;
  if (piVar3 == piVar1) {
    param_1[1] = (int)piVar3;
    return;
  }
  do {
    iVar2 = *piVar3;
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + *(int *)(*(int *)(iVar2 + 4) + 4) + 4) + 4))();
    }
    piVar3 = piVar3 + 1;
  } while (piVar3 != piVar1);
  param_1[1] = *param_1;
  return;
}

