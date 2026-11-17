
/* public: class CChipProperity & __thiscall CChipProperity::operator=(class CChipProperity const &)
    */

CChipProperity * __thiscall CChipProperity::operator=(CChipProperity *this,CChipProperity *param_1)

{
  int iVar1;
  CChipProperity *pCVar2;
  CChipProperity *pCVar3;
  int local_8;
  
                    /* 0x14820  26  ??4CChipProperity@@QAEAAV0@ABV0@@Z */
  local_8 = 0xf;
  pCVar3 = param_1 + 0xc;
  iVar1 = (int)param_1 - (int)this;
  pCVar2 = this + 4;
  do {
    *(undefined4 *)(pCVar2 + -4) = *(undefined4 *)(pCVar3 + -0xc);
    *(undefined4 *)pCVar2 = *(undefined4 *)(pCVar2 + iVar1);
    *(undefined4 *)(pCVar2 + 4) = *(undefined4 *)(pCVar3 + -4);
    *(undefined4 *)(pCVar2 + 8) = *(undefined4 *)pCVar3;
    *(undefined4 *)(pCVar2 + 0xc) = *(undefined4 *)(pCVar3 + 4);
    *(undefined4 *)(pCVar2 + 0x10) = *(undefined4 *)(pCVar3 + 8);
    *(undefined4 *)(pCVar2 + 0x14) = *(undefined4 *)(pCVar3 + 0xc);
    *(undefined4 *)(pCVar2 + 0x18) = *(undefined4 *)(pCVar3 + 0x10);
    FUN_00418780(pCVar2 + 0x1c,(int *)(pCVar3 + 0x14));
    FUN_004178f0(pCVar2 + 0x28,(int *)(pCVar3 + 0x20));
    local_8 = local_8 + -1;
    pCVar3 = pCVar3 + 0x38;
    pCVar2 = pCVar2 + 0x38;
  } while (local_8 != 0);
  pCVar3 = param_1 + 0x354;
  pCVar2 = this + 0x34c;
  param_1 = (CChipProperity *)0xf;
  do {
    *(undefined4 *)(pCVar2 + -4) = *(undefined4 *)(pCVar3 + -0xc);
    *(undefined4 *)pCVar2 = *(undefined4 *)(pCVar2 + iVar1);
    *(undefined4 *)(pCVar2 + 4) = *(undefined4 *)(pCVar3 + -4);
    *(undefined4 *)(pCVar2 + 8) = *(undefined4 *)pCVar3;
    *(undefined4 *)(pCVar2 + 0xc) = *(undefined4 *)(pCVar3 + 4);
    *(undefined4 *)(pCVar2 + 0x10) = *(undefined4 *)(pCVar3 + 8);
    *(undefined4 *)(pCVar2 + 0x14) = *(undefined4 *)(pCVar3 + 0xc);
    *(undefined4 *)(pCVar2 + 0x18) = *(undefined4 *)(pCVar3 + 0x10);
    FUN_00418780(pCVar2 + 0x1c,(int *)(pCVar3 + 0x14));
    FUN_004178f0(pCVar2 + 0x28,(int *)(pCVar3 + 0x20));
    param_1 = param_1 + -1;
    pCVar3 = pCVar3 + 0x38;
    pCVar2 = pCVar2 + 0x38;
  } while (param_1 != (CChipProperity *)0x0);
  return this;
}

