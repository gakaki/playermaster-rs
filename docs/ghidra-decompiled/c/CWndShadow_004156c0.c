
/* public: __thiscall CWndShadow::CWndShadow(class CWndShadow const &) */

CWndShadow * __thiscall CWndShadow::CWndShadow(CWndShadow *this,CWndShadow *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* 0x156c0  18  ??0CWndShadow@@QAE@ABV0@@Z */
  *(undefined ***)this = _vftable_;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  this[0xc] = param_1[0xc];
  this[0xd] = param_1[0xd];
  this[0xe] = param_1[0xe];
  this[0xf] = param_1[0xf];
  this[0x10] = param_1[0x10];
  this[0x11] = param_1[0x11];
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  this[0x18] = param_1[0x18];
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = uVar1;
  *(undefined4 *)(this + 0x2c) = uVar2;
  *(undefined4 *)(this + 0x30) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  uVar3 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = uVar1;
  *(undefined4 *)(this + 0x3c) = uVar2;
  *(undefined4 *)(this + 0x40) = uVar3;
  return this;
}

