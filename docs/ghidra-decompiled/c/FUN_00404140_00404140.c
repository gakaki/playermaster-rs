
void __cdecl FUN_00404140(void *param_1,void *param_2,undefined4 *param_3)

{
  void *pvVar1;
  
  if ((void *)*param_3 == (void *)0x0) {
    return;
  }
  pvVar1 = FUN_00404170(param_1,param_2,(void *)*param_3);
  if (pvVar1 != (void *)0x0) {
    *param_3 = 0;
  }
  return;
}

