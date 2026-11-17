
void __cdecl FUN_0043a8c0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = &PTR_FUN_0044bd28;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[6] = 0;
      if (param_1 == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)(param_1 + 4);
      }
      uVar1 = puVar4[1];
      uVar2 = puVar4[2];
      uVar3 = puVar4[3];
      param_3[1] = *puVar4;
      param_3[2] = uVar1;
      param_3[3] = uVar2;
      param_3[4] = uVar3;
      param_3[5] = puVar4[4];
      *param_3 = &PTR_FUN_0044bd28;
    }
    param_3 = param_3 + 7;
  }
  return;
}

