
undefined4 __fastcall FUN_00403f90(ushort *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2 - (int)param_1;
  do {
    iVar2 = tolower((uint)*param_1);
    iVar3 = tolower((uint)*(ushort *)(iVar1 + (int)param_1));
    if (iVar2 == iVar3) {
      if (iVar2 == 0) {
        return 0;
      }
    }
    else {
      if (iVar2 < iVar3) {
        return 0xffffffff;
      }
      if (iVar3 < iVar2) {
        return 1;
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}

