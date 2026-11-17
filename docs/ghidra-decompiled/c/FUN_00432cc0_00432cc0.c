
void __cdecl FUN_00432cc0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = &PTR_FUN_0044bd28;
      *(undefined8 *)(param_3 + 1) = 0;
      param_3[3] = 0;
      if (param_1 == 0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1 = (undefined4 *)(param_1 + 4);
      }
      param_3[1] = *puVar1;
      param_3[2] = puVar1[1];
      *param_3 = &PTR_FUN_0044bd28;
    }
    param_3 = param_3 + 4;
  }
  return;
}

