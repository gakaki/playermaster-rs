
void __fastcall FUN_00418ce0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    piVar2 = param_1;
    FUN_0041b1f0(iVar1,param_1[1]);
    Ordinal_1508(*param_1,iVar1,piVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

