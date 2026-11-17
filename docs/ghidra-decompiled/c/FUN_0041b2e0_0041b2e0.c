
void __fastcall FUN_0041b2e0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 != param_2) {
    piVar1 = param_1 + 5;
    do {
      iVar2 = *piVar1;
      if (iVar2 != 0) {
        piVar3 = param_2;
        FUN_0041b1f0(iVar2,piVar1[1]);
        Ordinal_1508(*piVar1,iVar2,piVar3);
        *piVar1 = 0;
        piVar1[1] = 0;
        piVar1[2] = 0;
      }
      Ordinal_1042();
      Ordinal_1042();
      Ordinal_1042();
      Ordinal_1042();
      Ordinal_1042();
      piVar3 = piVar1 + 3;
      piVar1 = piVar1 + 8;
    } while (piVar3 != param_2);
  }
  return;
}

