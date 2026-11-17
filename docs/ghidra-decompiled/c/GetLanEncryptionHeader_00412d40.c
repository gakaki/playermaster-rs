
/* public: void __thiscall CConfigInfo::GetLanEncryptionHeader(struct SLanEncryptionHeader &) */

void __thiscall CConfigInfo::GetLanEncryptionHeader(CConfigInfo *this,SLanEncryptionHeader *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* 0x12d40  236
                       ?GetLanEncryptionHeader@CConfigInfo@@QAEXAAUSLanEncryptionHeader@@@Z */
  uVar1 = *(undefined4 *)(this + 200);
  uVar2 = *(undefined4 *)(this + 0xcc);
  uVar3 = *(undefined4 *)(this + 0xd0);
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0xc4);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this + 0xd4);
  return;
}

