
undefined1 * FUN_0040bb60(undefined1 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)std::_Syserror_map(param_2);
  piVar3 = (int *)"unknown error";
  if (piVar2 != (int *)0x0) {
    piVar3 = piVar2;
  }
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  if ((char)*piVar3 == '\0') {
    FUN_0040bdf0(param_1,piVar3,0);
    return param_1;
  }
  piVar2 = piVar3;
  do {
    iVar1 = *piVar2;
    piVar2 = (int *)((int)piVar2 + 1);
  } while ((char)iVar1 != '\0');
  FUN_0040bdf0(param_1,piVar3,(int)piVar2 - ((int)piVar3 + 1));
  return param_1;
}

