
/* public: void __thiscall CConfigInfo::SetPswInfoCfg(struct sInfoCfger &) */

void __thiscall CConfigInfo::SetPswInfoCfg(CConfigInfo *this,sInfoCfger *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* 0x12ca0  584  ?SetPswInfoCfg@CConfigInfo@@QAEXAAUsInfoCfger@@@Z */
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x78) = uVar1;
  *(undefined4 *)(this + 0x7c) = uVar2;
  *(undefined4 *)(this + 0x80) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x88) = uVar1;
  *(undefined4 *)(this + 0x8c) = uVar2;
  *(undefined4 *)(this + 0x90) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x98) = uVar1;
  *(undefined4 *)(this + 0x9c) = uVar2;
  *(undefined4 *)(this + 0xa0) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0xa8) = uVar1;
  *(undefined4 *)(this + 0xac) = uVar2;
  *(undefined4 *)(this + 0xb0) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x44);
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  uVar3 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0xb8) = uVar1;
  *(undefined4 *)(this + 0xbc) = uVar2;
  *(undefined4 *)(this + 0xc0) = uVar3;
  return;
}

