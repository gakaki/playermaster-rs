
/* public: void __thiscall CConfigInfo::SetLanEncryptionHeader(struct SLanEncryptionHeader &) */

void __thiscall CConfigInfo::SetLanEncryptionHeader(CConfigInfo *this,SLanEncryptionHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* 0x12d20  558
                       ?SetLanEncryptionHeader@CConfigInfo@@QAEXAAUSLanEncryptionHeader@@@Z */
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 200) = uVar1;
  *(undefined4 *)(this + 0xcc) = uVar2;
  *(undefined4 *)(this + 0xd0) = uVar3;
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0x10);
  return;
}

