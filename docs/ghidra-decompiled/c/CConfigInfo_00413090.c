
/* public: __thiscall CConfigInfo::CConfigInfo(class CConfigInfo const &) */

CConfigInfo * __thiscall CConfigInfo::CConfigInfo(CConfigInfo *this,CConfigInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x13090  7  ??0CConfigInfo@@QAE@ABV0@@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446bc0;
  local_10 = ExceptionList;
  uVar4 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  *(undefined ***)this = _vftable_;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  Ordinal_280(param_1 + 0x44,uVar4);
  local_8 = 0;
  Ordinal_280(param_1 + 0x48);
  local_8._0_1_ = 1;
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  Ordinal_280(param_1 + 0x50);
  local_8._0_1_ = 2;
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  Ordinal_280(param_1 + 0x58);
  local_8 = CONCAT31(local_8._1_3_,3);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  Ordinal_280(param_1 + 0x70);
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  uVar3 = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x78) = uVar1;
  *(undefined4 *)(this + 0x7c) = uVar2;
  *(undefined4 *)(this + 0x80) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x88);
  uVar2 = *(undefined4 *)(param_1 + 0x8c);
  uVar3 = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(this + 0x88) = uVar1;
  *(undefined4 *)(this + 0x8c) = uVar2;
  *(undefined4 *)(this + 0x90) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x98);
  uVar2 = *(undefined4 *)(param_1 + 0x9c);
  uVar3 = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(this + 0x98) = uVar1;
  *(undefined4 *)(this + 0x9c) = uVar2;
  *(undefined4 *)(this + 0xa0) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0xa8);
  uVar2 = *(undefined4 *)(param_1 + 0xac);
  uVar3 = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(this + 0xa8) = uVar1;
  *(undefined4 *)(this + 0xac) = uVar2;
  *(undefined4 *)(this + 0xb0) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  uVar2 = *(undefined4 *)(param_1 + 0xbc);
  uVar3 = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(this + 0xb8) = uVar1;
  *(undefined4 *)(this + 0xbc) = uVar2;
  *(undefined4 *)(this + 0xc0) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 200);
  uVar2 = *(undefined4 *)(param_1 + 0xcc);
  uVar3 = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(this + 200) = uVar1;
  *(undefined4 *)(this + 0xcc) = uVar2;
  *(undefined4 *)(this + 0xd0) = uVar3;
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  ExceptionList = local_10;
  return this;
}

