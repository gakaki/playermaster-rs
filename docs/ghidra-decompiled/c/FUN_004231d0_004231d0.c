
int __cdecl FUN_004231d0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (param_1[1] - *param_1) * 0x2aaaaaab;
  iVar3 = (param_1[1] - *param_1) / 0xc;
  if (iVar3 != 0) {
    iVar2 = 0;
    do {
      iVar1 = cef_string_list_append(param_2,*(undefined4 *)(*param_1 + 4 + iVar2));
      iVar2 = iVar2 + 0xc;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}

