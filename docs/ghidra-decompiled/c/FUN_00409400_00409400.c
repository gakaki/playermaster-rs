
undefined4 __thiscall FUN_00409400(void *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  HBITMAP pHVar3;
  HDC pHVar4;
  HGDIOBJ ho;
  int iVar5;
  HDC local_30;
  undefined **local_20;
  undefined4 local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445f19;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 != 0) {
    if (*(int *)((int)this + 8) != 0) {
      Ordinal_3821(DAT_0046400c ^ (int)register0x00000010 - 4U);
      if (*(int **)((int)this + 8) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 8) + 4))(1);
      }
      *(undefined4 *)((int)this + 8) = 0;
    }
    iVar5 = *(int *)(param_1 + 4);
    iVar1 = *(int *)(param_1 + 0xc);
    Ordinal_994(*(undefined4 *)((int)this + 4));
    local_8 = 0;
    local_18 = Ordinal_1506(0x10);
    local_8._0_1_ = 1;
    if (local_18 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = Ordinal_450();
    }
    *(undefined4 *)((int)this + 8) = uVar2;
    local_1c = 0;
    local_20 = CBitmap::vftable;
    iVar5 = iVar5 + 1;
    local_8 = CONCAT31(local_8._1_3_,2);
    pHVar3 = CreateCompatibleBitmap(local_30,iVar1 + 1,iVar5);
    Ordinal_2480(pHVar3);
    pHVar4 = CreateCompatibleDC(local_30);
    Ordinal_2478(pHVar4);
    ho = (HGDIOBJ)Ordinal_12941(*(undefined4 *)(*(int *)((int)this + 8) + 4),local_1c);
    if (ho != (HGDIOBJ)0x0) {
      DeleteObject(ho);
    }
    Ordinal_4605(0,0,iVar1 + 1,iVar5,0xffffff);
    local_8 = local_8 & 0xffffff00;
    local_20 = CBitmap::vftable;
    FUN_00405d20(&local_20);
    local_8 = 0xffffffff;
    Ordinal_1469();
  }
  ExceptionList = local_10;
  return 0;
}

