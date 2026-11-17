
/* public: void __thiscall CCloudPrgScheduleInfo::PopBack(void) */

void __thiscall CCloudPrgScheduleInfo::PopBack(CCloudPrgScheduleInfo *this)

{
  int iVar1;
  int iVar2;
  CCloudPrgScheduleInfo *pCVar3;
  
                    /* 0x14740  430  ?PopBack@CCloudPrgScheduleInfo@@QAEXXZ */
  iVar1 = *(int *)(this + 8);
  iVar2 = *(int *)(iVar1 + -0xc);
  if (iVar2 != 0) {
    pCVar3 = this;
    FUN_0041b180(iVar2,*(int *)(iVar1 + -8));
    Ordinal_1508(*(undefined4 *)(iVar1 + -0xc),iVar2,pCVar3);
    *(undefined4 *)(iVar1 + -0xc) = 0;
    *(undefined4 *)(iVar1 + -8) = 0;
    *(undefined4 *)(iVar1 + -4) = 0;
  }
  Ordinal_1042();
  Ordinal_1042();
  *(int *)(this + 8) = *(int *)(this + 8) + -0x14;
  return;
}

