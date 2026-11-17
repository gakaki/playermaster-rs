
undefined4 * __thiscall FUN_00416540(void *this,uint param_1)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446e49;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  if ((param_1 & 2) == 0) {
    *(undefined ***)this = CProgressCtrlX::_vftable__for__CProgressCtrl__;
    *(undefined ***)((int)this + 0x74) = CProgressCtrlX::_vftable__for__IColorProgressBar__;
    local_8 = 0;
    Ordinal_1128(uVar1);
    local_8 = 0xffffffff;
    Ordinal_1400();
    if ((param_1 & 1) != 0) {
      Ordinal_1508(this);
    }
    ExceptionList = local_10;
    return this;
  }
  _eh_vector_destructor_iterator_
            (this,0xbc,*(int *)((int)this + -4),CProgressCtrlX::~CProgressCtrlX);
  if ((param_1 & 1) != 0) {
    Ordinal_266((undefined4 *)((int)this + -4));
  }
  ExceptionList = local_10;
  return (undefined4 *)((int)this + -4);
}

