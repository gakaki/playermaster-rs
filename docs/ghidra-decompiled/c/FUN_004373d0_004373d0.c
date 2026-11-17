
void __thiscall FUN_004373d0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)this + 0x40) == 0) {
    cef_string_utf16_clear((int)this + 8);
  }
  *(undefined4 **)((int)this + 0x40) = param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)((int)this + 4) = *param_1;
  *(undefined4 *)((int)this + 8) = uVar1;
  *(undefined4 *)((int)this + 0xc) = uVar2;
  *(undefined4 *)((int)this + 0x10) = uVar3;
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  *(undefined4 *)((int)this + 0x14) = param_1[4];
  *(undefined4 *)((int)this + 0x18) = uVar1;
  *(undefined4 *)((int)this + 0x1c) = uVar2;
  *(undefined4 *)((int)this + 0x20) = uVar3;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  *(undefined4 *)((int)this + 0x24) = param_1[8];
  *(undefined4 *)((int)this + 0x28) = uVar1;
  *(undefined4 *)((int)this + 0x2c) = uVar2;
  *(undefined4 *)((int)this + 0x30) = uVar3;
  *(undefined8 *)((int)this + 0x34) = *(undefined8 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x3c) = param_1[0xe];
  return;
}

