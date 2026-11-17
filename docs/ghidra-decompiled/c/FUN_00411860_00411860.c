
void FUN_00411860(int *param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = std::_Syserror_map(param_2);
  *param_1 = param_2;
  if (pcVar1 == (char *)0x0) {
    param_1[1] = (int)&PTR_vftable_004641a4;
    return;
  }
  param_1[1] = (int)&PTR_vftable_004641a8;
  return;
}

