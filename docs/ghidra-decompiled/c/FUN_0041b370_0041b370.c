
void __fastcall FUN_0041b370(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 != param_2) {
    piVar2 = param_1 + 8;
    do {
      if (*piVar2 != 0) {
        Ordinal_1508(*piVar2);
        *piVar2 = 0;
        piVar2[1] = 0;
        piVar2[2] = 0;
      }
      Ordinal_1042();
      piVar1 = piVar2 + 3;
      piVar2 = piVar2 + 0xb;
    } while (piVar1 != param_2);
  }
  return;
}

