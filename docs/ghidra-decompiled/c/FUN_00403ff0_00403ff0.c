
bool __fastcall FUN_00403ff0(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  
  puVar3 = param_1;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
  } while (uVar1 != 0);
  for (puVar3 = param_1 + ((int)puVar3 - (int)(param_1 + 1) >> 1);
      (param_1 < puVar3 && (*puVar3 != 0x2e)); puVar3 = puVar3 + -1) {
  }
  if ((puVar3 == param_1) && (*puVar3 != 0x2e)) {
    return false;
  }
  iVar2 = FUN_00403f90(puVar3,0x44ca0c);
  if ((((iVar2 == 0) || (iVar2 = FUN_00403f90(puVar3,0x44ca14), iVar2 == 0)) ||
      (iVar2 = FUN_00403f90(puVar3,0x44ca20), iVar2 == 0)) ||
     (((iVar2 = FUN_00403f90(puVar3,0x44ca2c), iVar2 == 0 ||
       (iVar2 = FUN_00403f90(puVar3,0x44ca38), iVar2 == 0)) ||
      ((iVar2 = FUN_00403f90(puVar3,0x44ca44), iVar2 == 0 ||
       (iVar2 = FUN_00403f90(puVar3,0x44ca50), iVar2 == 0)))))) {
    return true;
  }
  iVar2 = FUN_00403f90(puVar3,0x44ca58);
  return iVar2 == 0;
}

