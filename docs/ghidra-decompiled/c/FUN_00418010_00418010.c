
void __fastcall FUN_00418010(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    puVar2 = param_1;
    FUN_0041b2e0(piVar1,(int *)param_1[1]);
    Ordinal_1508(*param_1,piVar1,puVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

