
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00408090(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  HDC pHVar5;
  int *piVar6;
  CModuleLanguageTrans *pCVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint uVar8;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  int iVar9;
  CModuleLanguageTrans *unaff_EDI;
  float fVar10;
  float fVar11;
  char cVar12;
  uint uVar13;
  undefined1 uVar14;
  IDataManager *pIVar15;
  CModuleLanguageTrans *pCVar16;
  void *pvVar17;
  CModuleLanguageTrans *this_00;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  CModuleLanguageTrans *pCStack_c8;
  int iStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  int *piStack_b8;
  tagSIZE tStack_b4;
  IDataManager *pIStack_ac;
  CModuleLanguageTrans *pCStack_a8;
  int iStack_a4;
  uint uStack_a0;
  float fStack_9c;
  uint uStack_98;
  uint uStack_94;
  float fStack_8c;
  tagSIZE tStack_88;
  CModuleLanguageTrans *pCStack_80;
  undefined1 auStack_7c [4];
  uint uStack_78;
  int aiStack_74 [6];
  undefined1 auStack_5c [8];
  void *local_54;
  undefined1 uStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  LONG local_34;
  uint uStack_30;
  void *pvStack_28;
  uint local_24;
  undefined4 uStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_00445e9f;
  local_1c = ExceptionList;
  local_24 = DAT_0046400c ^ (uint)&pCStack_c8;
  uStack_d4 = (CModuleLanguageTrans *)(DAT_0046400c ^ (uint)(auStack_7c + -0x54));
  ExceptionList = &local_1c;
  tStack_88.cy = *(LONG *)((int)this + 4);
  uStack_d8 = (CModuleLanguageTrans *)0x1;
  uVar14 = 0x6c;
  local_40 = 0;
  local_3c = 0;
  local_38 = param_1;
  pvVar17 = this;
  local_54 = this;
  local_34 = tStack_88.cy;
  Ordinal_286();
  FUN_00408ee0(this,0,1,uStack_44,local_40,local_3c,local_38,1,extraout_ECX,1,0,(undefined4 *)0x0,
               uVar14,(uint)pvVar17);
  tStack_88.cy = (LONG)GetDpi();
  iStack_c4 = (int)((float)tStack_88.cy * _DAT_0044fef4);
  tStack_88.cy = (LONG)GetDpi();
  pIStack_ac = (IDataManager *)(int)((float)tStack_88.cy * _DAT_0044fef4);
  pCStack_a8 = (CModuleLanguageTrans *)((*(int *)((int)this + 4) - iStack_c4) / 2);
  uStack_a0 = (uint)pCStack_a8;
  if (*(int *)((int)this + 8) != 0) {
    tStack_88.cy = (LONG)GetDpi();
    uStack_a0 = (int)pCStack_a8 + (int)((float)tStack_88.cy * _DAT_0044feb8);
  }
  uStack_98 = iStack_c4 + uStack_a0;
  tStack_88.cy = (LONG)GetDpi();
  this_00 = (CModuleLanguageTrans *)0x1;
  iStack_a4 = (int)((float)tStack_88.cy * _DAT_0044fedc);
  fStack_9c = (float)(iStack_a4 + (int)pIStack_ac);
  uVar14 = 0x6c;
  pIVar15 = pIStack_ac;
  aiStack_74[0] = (int)fStack_9c;
  Ordinal_286();
  FUN_00408ee0(this,1,1,pCStack_a8,iStack_a4,uStack_a0,fStack_9c,
               *(undefined4 *)(*(int *)((int)this + 0x98) + 0x88),extraout_ECX_00,1,0,
               (undefined4 *)((int)this + 0x28),uVar14,(uint)pIVar15);
  tStack_88.cx = (LONG)GetDpi();
  iStack_a4 = 0;
  pCStack_c8 = (CModuleLanguageTrans *)(uStack_78 - (int)((float)tStack_88.cx * _DAT_0044ff54));
  pCStack_a8 = pCStack_c8;
  if (*(int *)((int)this + 8) != 0) {
    fVar10 = GetDpi();
    iStack_a4 = (int)(fVar10 * _DAT_0044fed4);
  }
  fStack_9c = fStack_8c;
  tStack_88.cx = 0;
  pIStack_ac = CommonData_Get();
  uVar8 = extraout_ECX_01;
  if (pIStack_ac != (IDataManager *)0x0) {
    iVar2 = (**(code **)(*(int *)pIStack_ac + 0x28))();
    uVar8 = extraout_ECX_02;
    if ((iVar2 != 0) && ((*(int *)(iVar2 + 8) == 1 || (*(int *)(iVar2 + 8) == 2)))) {
      tStack_88.cx = 1;
    }
  }
  if (*(int *)((int)this + 0xa0) != 0) {
    GetDC(*(HWND *)(*(int *)((int)this + 0xa0) + 0x20));
    tStack_b4.cx = Ordinal_4838();
    if ((int *)tStack_b4.cx == (int *)0x0) goto LAB_00408eaf;
    (**(code **)(*(int *)tStack_b4.cx + 0x30))();
    GetTextExtentPoint32W
              ((HDC)piStack_b8[2],*(LPCWSTR *)((int)this + 0x9c),
               *(int *)(*(LPCWSTR *)((int)this + 0x9c) + -6),&tStack_88);
    pCStack_80 = (CModuleLanguageTrans *)(tStack_88.cx + (int)unaff_EDI);
    (**(code **)(*piStack_b8 + 0x30))();
    ReleaseDC(*(HWND *)(*(int *)((int)this + 0xa0) + 0x20),*(HDC *)(tStack_b4.cy + 4));
    uStack_a0 = uStack_78;
    uVar8 = uStack_78;
  }
  pCVar16 = (CModuleLanguageTrans *)0x1;
  fStack_9c = fStack_8c;
  cVar12 = (char)this + -100;
  Ordinal_280();
  FUN_00408ee0(this,2,0,pIStack_ac,pCStack_a8,iStack_a4,uStack_a0,
               *(undefined4 *)(*(int *)((int)this + 0x98) + 0xf0),extraout_ECX_03,1,
               *(undefined4 *)((int)this + 0x10),(undefined4 *)0x0,cVar12,uVar8);
  fVar10 = GetDpi();
  tStack_b4.cx = (LONG)(fVar10 * _DAT_0044fefc);
  fVar10 = GetDpi();
  iStack_a4 = param_1;
  uStack_94 = (uint)(fVar10 * _DAT_0044feec);
  if (*(int *)((int)this + 8) != 0) {
    fVar10 = GetDpi();
    iStack_a4 = param_1 - (int)(fVar10 * _DAT_0044fed4);
  }
  iVar2 = iStack_a4 - tStack_b4.cx;
  pCStack_a8 = (CModuleLanguageTrans *)0x0;
  pIStack_ac = (IDataManager *)iVar2;
  if (*(int *)((int)this + 8) != 0) {
    fVar10 = GetDpi();
    pCStack_a8 = (CModuleLanguageTrans *)(int)(fVar10 * _DAT_0044fed4);
  }
  uStack_a0 = (int)pCStack_a8 + uStack_94;
  uVar14 = 0x6c;
  uVar8 = uStack_94;
  Ordinal_286();
  FUN_00408ee0(this,0xc,1,tStack_b4.cy,pIStack_ac,pCStack_a8,iStack_a4,
               *(undefined4 *)(*(int *)((int)this + 0x98) + 0x500),extraout_ECX_04,1,0,
               (undefined4 *)((int)this + 0x38),uVar14,uVar8);
  iVar9 = iVar2;
  if (*(int *)(*(int *)((int)this + 0x98) + 0x430) != 0) {
    iVar9 = iVar2 - (int)piStack_b8;
    pIStack_ac = (IDataManager *)0x0;
    tStack_b4.cy = iVar9;
    pCStack_a8 = (CModuleLanguageTrans *)iVar2;
    if (*(int *)((int)this + 8) != 0) {
      unaff_EDI = (CModuleLanguageTrans *)GetDpi();
      pIStack_ac = (IDataManager *)(int)((float)unaff_EDI * _DAT_0044fed4);
    }
    iStack_a4 = (int)pIStack_ac + uStack_98;
    uVar13 = 1;
    uVar14 = 0x6c;
    uVar8 = uStack_98;
    Ordinal_286();
    FUN_00408ee0(this,10,1,tStack_b4.cx,tStack_b4.cy,pIStack_ac,pCStack_a8,1,extraout_ECX_05,1,0,
                 (undefined4 *)((int)this + 0x58),uVar14,uVar8);
    uVar14 = 1;
    Ordinal_286();
    FUN_00408ee0(this,0xb,1,tStack_b4.cy,pIStack_ac,pCStack_a8,iStack_a4,0,extraout_ECX_06,0,0,
                 (undefined4 *)((int)this + 0x68),uVar14,uVar13);
  }
  iVar2 = iVar9;
  if (*(int *)(*(int *)((int)this + 0x98) + 0x498) != 0) {
    iVar2 = iVar9 - (int)piStack_b8;
    pIStack_ac = (IDataManager *)0x0;
    tStack_b4.cy = iVar2;
    pCStack_a8 = (CModuleLanguageTrans *)iVar9;
    if (*(int *)((int)this + 8) != 0) {
      unaff_EDI = (CModuleLanguageTrans *)GetDpi();
      pIStack_ac = (IDataManager *)(int)((float)unaff_EDI * _DAT_0044fed4);
    }
    iStack_a4 = (int)pIStack_ac + uStack_98;
    uVar13 = 1;
    uVar14 = 0x6c;
    uVar8 = uStack_98;
    Ordinal_286();
    FUN_00408ee0(this,0xb,1,tStack_b4.cx,tStack_b4.cy,pIStack_ac,pCStack_a8,1,extraout_ECX_07,1,0,
                 (undefined4 *)((int)this + 0x68),uVar14,uVar8);
    uVar14 = 1;
    Ordinal_286();
    FUN_00408ee0(this,10,1,tStack_b4.cy,pIStack_ac,pCStack_a8,iStack_a4,0,extraout_ECX_08,0,0,
                 (undefined4 *)((int)this + 0x58),uVar14,uVar13);
  }
  iVar9 = iVar2 - (int)piStack_b8;
  pIStack_ac = (IDataManager *)0x0;
  tStack_b4.cy = iVar9;
  pCStack_a8 = (CModuleLanguageTrans *)iVar2;
  if (*(int *)((int)this + 8) != 0) {
    unaff_EDI = (CModuleLanguageTrans *)GetDpi();
    pIStack_ac = (IDataManager *)(int)((float)unaff_EDI * _DAT_0044fed4);
  }
  iStack_a4 = (int)pIStack_ac + uStack_98;
  uVar14 = 0x6c;
  uVar8 = uStack_98;
  Ordinal_286();
  FUN_00408ee0(this,9,1,tStack_b4.cx,tStack_b4.cy,pIStack_ac,pCStack_a8,
               *(undefined4 *)(*(int *)((int)this + 0x98) + 0x3c8),extraout_ECX_09,1,0,
               (undefined4 *)((int)this + 0x48),uVar14,uVar8);
  uStack_d4 = (CModuleLanguageTrans *)GetDpi();
  iVar2 = iVar9 - (int)((float)uStack_d4 * _DAT_0044fefc);
  tStack_b4.cy = 0;
  tStack_b4.cx = iVar2;
  pIStack_ac = (IDataManager *)iVar9;
  if (*(int *)((int)this + 8) != 0) {
    uStack_d4 = (CModuleLanguageTrans *)GetDpi();
    tStack_b4.cy = (LONG)((float)uStack_d4 * _DAT_0044fed4);
  }
  pCStack_a8 = (CModuleLanguageTrans *)(tStack_b4.cy + (int)fStack_9c);
  uVar14 = 0x6c;
  fVar10 = fStack_9c;
  Ordinal_286();
  FUN_00408ee0(this,7,1,piStack_b8,tStack_b4.cx,tStack_b4.cy,pIStack_ac,
               *(undefined4 *)(*(int *)((int)this + 0x98) + 0x2f8),extraout_ECX_10,1,0,
               (undefined4 *)((int)this + 0x88),uVar14,(uint)fVar10);
  uStack_d8 = (CModuleLanguageTrans *)GetDpi();
  fVar10 = (float)uStack_d8 * _DAT_0044feec;
  fVar11 = GetDpi();
  uStack_d8 = (CModuleLanguageTrans *)(int)(fVar11 * _DAT_0044feec);
  fStack_9c = GetDpi();
  tStack_b4.cy = iVar2 - (int)(fStack_9c * _DAT_0044fec8);
  piVar3 = (int *)(tStack_b4.cy - (int)fVar10);
  uStack_c0 = (int)(uStack_a0 - (int)uStack_d8) / 2;
  piStack_b8 = piVar3;
  tStack_b4.cx = uStack_c0;
  if (*(int *)((int)this + 8) != 0) {
    fStack_9c = GetDpi();
    tStack_b4.cx = uStack_c0 + (int)(fStack_9c * _DAT_0044fed4);
  }
  pIStack_ac = (IDataManager *)(uStack_d8 + tStack_b4.cx);
  uVar14 = 0x6c;
  uVar8 = tStack_b4.cx;
  Ordinal_286();
  FUN_00408ee0(this,8,1,uStack_bc,piStack_b8,tStack_b4.cx,tStack_b4.cy,
               *(undefined4 *)(*(int *)((int)this + 0x98) + 0x360),extraout_ECX_11,1,0,
               (undefined4 *)((int)this + 0x78),uVar14,uVar8);
  Ordinal_286();
  local_34 = 0;
  Ordinal_286();
  local_38 = CONCAT31(local_38._1_3_,1);
  Ordinal_286(&DAT_0044dbb4);
  local_3c = CONCAT31(local_3c._1_3_,2);
  Ordinal_286(&DAT_0044dbc0);
  local_40 = 3;
  if (unaff_EDI != (CModuleLanguageTrans *)0x0) {
    uStack_d4 = (CModuleLanguageTrans *)(**(code **)(*(int *)unaff_EDI + 0x28))();
    if (uStack_d4 != (CModuleLanguageTrans *)0x0) {
      uVar4 = CModuleLanguageTrans::TranslateString
                        (uStack_d4,(uint)(auStack_7c + -0x70),(wchar_t *)0x5);
      local_40 = CONCAT31(local_40._1_3_,4);
      Ordinal_1518(uVar4);
      uStack_44._0_1_ = 3;
      Ordinal_1042();
      uVar4 = CModuleLanguageTrans::TranslateString
                        (uStack_d8,(uint)(auStack_7c + -0x74),(wchar_t *)0x5);
      uStack_44 = CONCAT31(uStack_44._1_3_,5);
      Ordinal_1518(uVar4);
      uStack_48 = 3;
      Ordinal_1042();
      uVar4 = CModuleLanguageTrans::TranslateString
                        (this_00,(uint)(auStack_7c + -0x78),(wchar_t *)0x5);
      uStack_48 = 6;
      Ordinal_1518(uVar4);
      uStack_4c = 3;
      Ordinal_1042();
      uVar4 = CModuleLanguageTrans::TranslateString
                        (pCVar16,(uint)(auStack_7c + -0x7c),(wchar_t *)0x1);
      uStack_4c = 7;
      Ordinal_1518(uVar4);
      uStack_50 = 3;
      Ordinal_1042();
    }
  }
  aiStack_74[2] = 0;
  aiStack_74[3] = 0;
  aiStack_74[4] = 0;
  aiStack_74[5] = 0;
  fVar10 = GetDpi();
  tStack_b4.cx = *(undefined4 *)((int)this + 0x14);
  uStack_d4 = (CModuleLanguageTrans *)(int)(fVar10 * _DAT_0044ff08);
  iVar2 = 0;
  iVar9 = 0;
  if (pIStack_ac != (IDataManager *)0x0) {
    tStack_b4.cx = *(undefined4 *)((int)this + 0x18);
  }
  if (*(int *)((int)this + 0xa0) != 0) {
    pHVar5 = GetDC(*(HWND *)(*(int *)((int)this + 0xa0) + 0x20));
    tStack_b4.cx = Ordinal_4838(pHVar5);
    pIStack_ac = (IDataManager *)(**(code **)(*(int *)tStack_b4.cx + 0x30))(piStack_b8);
    iVar2 = (**(code **)(*(int *)uStack_d8 + 0x2c))();
    piVar6 = (int *)(4 - (uint)(*(int *)(iVar2 + 8) != 0));
    iVar2 = iVar9;
    tStack_b4.cx = (LONG)piVar6;
    if (0 < (int)piVar6) {
      iVar2 = 0;
      do {
        GetTextExtentPoint32W
                  ((HDC)piStack_b8[2],*(LPCWSTR *)(auStack_7c + iVar2 * 4 + -8),
                   *(int *)(*(LPCWSTR *)(auStack_7c + iVar2 * 4 + -8) + -6),&tStack_b4);
        aiStack_74[iVar2] = tStack_b4.cx;
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)piVar6);
      this = (void *)tStack_88.cx;
      iVar2 = iVar9;
    }
    (**(code **)(*piStack_b8 + 0x30))(pIStack_ac);
    ReleaseDC(*(HWND *)(*(int *)((int)this + 0xa0) + 0x20),*(HDC *)(tStack_b4.cy + 4));
  }
  pCStack_c8 = (CModuleLanguageTrans *)0x0;
  uStack_c0 = *(undefined4 *)((int)this + 4);
  iVar9 = (int)fStack_9c + ((int)piVar3 + (((int)uStack_d4 * -2 - iVar2) - (int)fStack_9c)) / 2;
  iStack_c4 = aiStack_74[2] + iVar9;
  Ordinal_280(auStack_7c);
  iVar2 = *(int *)((int)this + 0x98);
  uVar4 = *(undefined4 *)(iVar2 + 0x158);
  uStack_44._0_1_ = 8;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x138) = 3;
    *(undefined4 *)(*(int *)((int)this + 0x98) + 0x164) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x98) + 0x158) = uVar4;
    *(undefined4 *)(*(int *)((int)this + 0x98) + 0x154) = 1;
    iVar2 = *(int *)((int)this + 0x98);
    *(CModuleLanguageTrans **)(iVar2 + 0x144) = unaff_EDI;
    *(int *)(iVar2 + 0x148) = iVar9;
    *(CModuleLanguageTrans **)(iVar2 + 0x14c) = pCStack_c8;
    *(int *)(iVar2 + 0x150) = iStack_c4;
    *(undefined4 *)(*(int *)((int)this + 0x98) + 0x13c) = 0;
    Ordinal_1518(auStack_7c + -0x74);
    puVar1 = (uint *)(*(int *)((int)this + 0x98) + 0x19c);
    *puVar1 = *puVar1 | 1;
    *(int **)(*(int *)((int)this + 0x98) + 0x18c) = piStack_b8;
  }
  uStack_44 = CONCAT31(uStack_44._1_3_,3);
  Ordinal_1042();
  piVar3 = (int *)uStack_d4;
  iVar2 = (**(code **)(*(int *)uStack_d4 + 0x2c))();
  if (*(int *)(iVar2 + 8) == 0) {
    unaff_EDI = uStack_d8 + (int)pCStack_c8;
    pCStack_c8 = unaff_EDI + aiStack_74[4];
  }
  iVar2 = (**(code **)(*piVar3 + 0x2c))();
  if (*(int *)((int)this + 0x98) != 0) {
    *(uint *)(*(int *)((int)this + 0x98) + 0x1c0) = (uint)(*(int *)(iVar2 + 8) == 0);
  }
  Ordinal_280(aiStack_74);
  iVar2 = *(int *)((int)this + 0x98);
  uVar4 = *(undefined4 *)(iVar2 + 0x1c0);
  uStack_48 = 9;
  if (iVar2 == 0) {
    uStack_48 = 3;
    Ordinal_1042();
    uVar8 = uStack_bc;
  }
  else {
    *(undefined4 *)(iVar2 + 0x1a0) = 4;
    *(undefined4 *)(*(int *)((int)this + 0x98) + 0x1cc) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x98) + 0x1c0) = uVar4;
    *(undefined4 *)(*(int *)((int)this + 0x98) + 0x1bc) = 1;
    iVar2 = *(int *)((int)this + 0x98);
    *(CModuleLanguageTrans **)(iVar2 + 0x1ac) = uStack_d4;
    *(CModuleLanguageTrans **)(iVar2 + 0x1b0) = unaff_EDI;
    *(int *)(iVar2 + 0x1b4) = iVar9;
    *(CModuleLanguageTrans **)(iVar2 + 0x1b8) = pCStack_c8;
    *(undefined4 *)(*(int *)((int)this + 0x98) + 0x1a4) = 0;
    Ordinal_1518(&uStack_d8);
    uVar8 = uStack_c0;
    puVar1 = (uint *)(*(int *)((int)this + 0x98) + 0x204);
    *puVar1 = *puVar1 | 1;
    uStack_4c = 3;
    *(uint *)(*(int *)((int)this + 0x98) + 500) = uStack_c0;
    Ordinal_1042();
  }
  uStack_d4 = this_00 + iVar9;
  pCVar7 = uStack_d4 + aiStack_74[1];
  Ordinal_280(&pCStack_80);
  iVar2 = *(int *)((int)this + 0x98);
  uVar4 = *(undefined4 *)(iVar2 + 0x228);
  uStack_4c = 10;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x208) = 5;
    *(undefined4 *)(*(int *)((int)this + 0x98) + 0x234) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x98) + 0x228) = uVar4;
    *(undefined4 *)(*(int *)((int)this + 0x98) + 0x224) = 1;
    iVar2 = *(int *)((int)this + 0x98);
    *(CModuleLanguageTrans **)(iVar2 + 0x214) = uStack_d8;
    *(CModuleLanguageTrans **)(iVar2 + 0x218) = uStack_d4;
    *(CModuleLanguageTrans **)(iVar2 + 0x21c) = unaff_EDI;
    *(CModuleLanguageTrans **)(iVar2 + 0x220) = pCVar7;
    *(undefined4 *)(*(int *)((int)this + 0x98) + 0x20c) = 0;
    Ordinal_1518(auStack_7c + -0x60);
    puVar1 = (uint *)(*(int *)((int)this + 0x98) + 0x26c);
    *puVar1 = *puVar1 | 1;
    *(uint *)(*(int *)((int)this + 0x98) + 0x25c) = uVar8;
  }
  uStack_4c = 3;
  Ordinal_1042();
  uStack_d8 = unaff_EDI + (int)pCVar16;
  pCVar16 = uStack_d8 + aiStack_74[1];
  Ordinal_280(&pCStack_80);
  iVar2 = *(int *)((int)this + 0x98);
  uVar4 = *(undefined4 *)(iVar2 + 0x290);
  uStack_50 = 0xb;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x270) = 6;
    *(undefined4 *)(*(int *)((int)this + 0x98) + 0x29c) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x98) + 0x290) = uVar4;
    *(undefined4 *)(*(int *)((int)this + 0x98) + 0x28c) = 1;
    iVar2 = *(int *)((int)this + 0x98);
    *(CModuleLanguageTrans **)(iVar2 + 0x27c) = this_00;
    *(CModuleLanguageTrans **)(iVar2 + 0x280) = uStack_d8;
    *(CModuleLanguageTrans **)(iVar2 + 0x284) = uStack_d4;
    *(CModuleLanguageTrans **)(iVar2 + 0x288) = pCVar16;
    *(undefined4 *)(*(int *)((int)this + 0x98) + 0x274) = 0;
    Ordinal_1518(auStack_7c + -100);
    puVar1 = (uint *)(*(int *)((int)this + 0x98) + 0x2d4);
    *puVar1 = *puVar1 | 1;
    *(uint *)(*(int *)((int)this + 0x98) + 0x2c4) = uVar8;
  }
  Ordinal_1042();
  uStack_20 = 0xffffffff;
  _eh_vector_destructor_iterator_(auStack_5c,4,4,Ordinal_1042_exref);
LAB_00408eaf:
  ExceptionList = pvStack_28;
  uStack_d8 = (CModuleLanguageTrans *)0x408ece;
  FUN_0041d025(uStack_30 ^ (uint)&uStack_d4);
  return;
}

