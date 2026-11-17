
/* public: __thiscall CCustomDrawData::CCustomDrawData(void) */

CCustomDrawData * __thiscall CCustomDrawData::CCustomDrawData(CCustomDrawData *this)

{
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x15ac0  9  ??0CCustomDrawData@@QAE@XZ */
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446de8;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  *(undefined ***)this = _vftable_;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  Ordinal_296(uVar1);
  local_8 = 0;
  FUN_0041d1bc(this + 0x20,8,3,&LAB_00405ad0);
  local_8._0_1_ = 1;
  FUN_0041d1bc(this + 0x38,8,3,&LAB_00405ad0);
  Ordinal_296();
  Ordinal_296();
  Ordinal_296();
  Ordinal_296();
  local_8 = CONCAT31(local_8._1_3_,6);
  ::CCustomDrawData::SetUICount(this,0);
  ::CCustomDrawData::InitFont(this);
  ExceptionList = local_10;
  return this;
}

