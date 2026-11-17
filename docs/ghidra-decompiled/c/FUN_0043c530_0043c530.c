
void __thiscall FUN_0043c530(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *_Dst;
  undefined4 *puVar4;
  
  if (this == (void *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)((int)this + 4);
  }
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *param_1 = *puVar4;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = puVar4[5];
  uVar2 = puVar4[6];
  uVar3 = puVar4[7];
  param_1[4] = puVar4[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = puVar4[9];
  uVar2 = puVar4[10];
  uVar3 = puVar4[0xb];
  param_1[8] = puVar4[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  if (this == (void *)0x0) {
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)((int)this + 4);
  }
  memset(_Dst,0,0x30);
  *(undefined4 *)((int)this + 0x34) = 0;
  return;
}

