
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_00404ed0(LPCWSTR param_1)

{
  uint uVar1;
  int *this;
  undefined4 *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044591c;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  this = (int *)Ordinal_1506(0x4088,uVar1);
  if (this == (int *)0x0) {
    this = (int *)0x0;
  }
  else {
    *this = 0;
    this[1] = 0;
    *(undefined1 *)(this + 2) = 0;
    this[3] = 0;
    this[4] = 0;
    this[5] = 0;
    this[6] = 0;
    this[8] = 0;
    *(undefined2 *)(this + 0xb) = 0;
    this[0xf] = 0;
    this[0x11] = 0;
    this[0x12] = 0;
    this[0x1c] = 0;
  }
  local_8 = 0xffffffff;
  _DAT_00464e40 = FUN_004040c0(this,param_1);
  if (_DAT_00464e40 == 0) {
    puVar2 = (undefined4 *)Ordinal_1506(8,uVar1);
    *puVar2 = 2;
    puVar2[1] = this;
    ExceptionList = local_10;
    return puVar2;
  }
  if (this != (int *)0x0) {
    FUN_00404fd0(this);
  }
  ExceptionList = local_10;
  return (undefined4 *)0x0;
}

