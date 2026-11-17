
void __fastcall FUN_004061c0(int *param_1,size_t param_2,void *param_3)

{
  void *pvVar1;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00406530(-0x7ff8ffa9);
  }
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00406530(-0x7ff8ffa9);
  }
  if (param_3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00406530(-0x7ff8ffa9);
  }
  pvVar1 = (void *)*param_1;
  if (pvVar1 == param_3) {
    if ((int)param_2 < 0x81) goto LAB_00406201;
    pvVar1 = calloc(param_2,1);
  }
  else {
    if ((int)param_2 < 0x81) {
      free(pvVar1);
LAB_00406201:
      *param_1 = (int)param_3;
      goto LAB_00406203;
    }
    pvVar1 = _recalloc(pvVar1,param_2,1);
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00406530(-0x7ff8fff2);
    }
  }
  *param_1 = (int)pvVar1;
LAB_00406203:
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00406530(-0x7ff8fff2);
  }
  return;
}

