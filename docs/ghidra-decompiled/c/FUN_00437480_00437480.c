
void __thiscall FUN_00437480(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(undefined4 **)((int)this + 0x40) != param_1) {
    cef_string_utf16_clear(param_1 + 1);
  }
  uVar1 = *(undefined4 *)((int)this + 8);
  uVar2 = *(undefined4 *)((int)this + 0xc);
  uVar3 = *(undefined4 *)((int)this + 0x10);
  *param_1 = *(undefined4 *)((int)this + 4);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = *(undefined4 *)((int)this + 0x18);
  uVar2 = *(undefined4 *)((int)this + 0x1c);
  uVar3 = *(undefined4 *)((int)this + 0x20);
  param_1[4] = *(undefined4 *)((int)this + 0x14);
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = *(undefined4 *)((int)this + 0x28);
  uVar2 = *(undefined4 *)((int)this + 0x2c);
  uVar3 = *(undefined4 *)((int)this + 0x30);
  param_1[8] = *(undefined4 *)((int)this + 0x24);
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)((int)this + 0x34);
  param_1[0xe] = *(undefined4 *)((int)this + 0x3c);
  memset((void *)((int)this + 4),0,0x3c);
  *(undefined4 *)((int)this + 0x40) = 0;
  return;
}

