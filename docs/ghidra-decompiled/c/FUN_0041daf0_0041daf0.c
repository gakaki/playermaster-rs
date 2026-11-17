
void __fastcall FUN_0041daf0(int param_1)

{
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
    Ordinal_1508(**(undefined4 **)(param_1 + 0xc));
  }
  **(undefined4 **)(param_1 + 0xc) = 0;
  **(undefined4 **)(param_1 + 0x1c) = 0;
  **(undefined4 **)(param_1 + 0x2c) = 0;
  **(undefined4 **)(param_1 + 0x10) = 0;
  **(undefined4 **)(param_1 + 0x20) = 0;
  **(undefined4 **)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}

