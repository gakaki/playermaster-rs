
/* public: __thiscall CConfigSaveAndLoad::CConfigSaveAndLoad(class CConfigSaveAndLoad const &) */

CConfigSaveAndLoad * __thiscall
CConfigSaveAndLoad::CConfigSaveAndLoad(CConfigSaveAndLoad *this,CConfigSaveAndLoad *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x14590  8  ??0CConfigSaveAndLoad@@QAE@ABV0@@Z */
  puStack_c = &LAB_00446d02;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = _vftable_;
  *(code **)(this + 4) = _vftable__exref;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  local_8 = 0;
  FUN_00418f20(this + 0x14,(int *)(param_1 + 0x14));
  local_8._0_1_ = 1;
  FUN_004184f0(this + 0x1c,(int *)(param_1 + 0x1c));
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_004184f0(this + 0x28,(int *)(param_1 + 0x28));
  ExceptionList = local_10;
  return this;
}

