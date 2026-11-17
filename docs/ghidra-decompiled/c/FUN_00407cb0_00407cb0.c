
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00407cb0(int param_1)

{
  uint uVar1;
  IDataManager *pIVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int *piVar7;
  code *pcVar8;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  int local_20;
  float local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445df4;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (uint)(local_24 + 0x20);
  ExceptionList = &local_10;
  pIVar2 = CommonData_Get();
  if (pIVar2 == (IDataManager *)0x0) {
    ExceptionList = local_10;
    return 0;
  }
  iVar3 = (**(code **)(*(int *)pIVar2 + 0x30))(uVar1);
  local_20 = *(int *)(iVar3 + 0x28);
  if (local_20 == *(int *)(param_1 + 0xa4)) {
    ExceptionList = local_10;
    return 0;
  }
  *(int *)(param_1 + 0xa4) = local_20;
  piVar7 = (int *)(param_1 + 0x78);
  iVar3 = 4;
  do {
    if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar7)(1);
      *piVar7 = 0;
    }
    piVar7 = piVar7 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00406550();
  local_8 = iVar3;
  FUN_00405ae0(&local_14,&local_18,L"Resource\\StyleWhite\\MainLable\\");
  local_8._0_1_ = 1;
  local_1c = GetDpi();
  if (local_1c <= _DAT_0044feb4) {
    if (local_1c <= _DAT_0044feb0) goto LAB_00407dc1;
    uVar4 = FUN_00405ae0(&local_1c,&local_18,L"Resource\\StyleWhite\\DPI150\\MainLable\\");
    local_8._0_1_ = 3;
  }
  else {
    uVar4 = FUN_00405ae0(&local_1c,&local_18,L"Resource\\StyleWhite\\DPI250\\MainLable\\");
    local_8._0_1_ = 2;
  }
  Ordinal_1518(uVar4);
  local_8._0_1_ = 1;
  Ordinal_1042();
LAB_00407dc1:
  iVar3 = 0;
  pcVar8 = GdipAlloc_exref;
  do {
    *(undefined4 *)(param_1 + 0x78 + iVar3 * 4) = 0;
    if (local_20 == 0) {
      if (iVar3 != 0) {
        if (iVar3 == 1) {
          pfVar5 = (float *)FUN_00405ae0(local_34,&local_14,L"user_off_hover.png");
          local_1c = *pfVar5;
          puVar6 = (undefined4 *)(*pcVar8)(0x10);
          if (puVar6 == (undefined4 *)0x0) {
            *(undefined4 *)(param_1 + 0x7c) = 0;
          }
          else {
            *puVar6 = Gdiplus::Image::vftable;
            puVar6[1] = 0;
            uVar4 = GdipLoadImageFromFile(local_1c,puVar6 + 1);
            puVar6[2] = uVar4;
            *(undefined4 **)(param_1 + 0x7c) = puVar6;
          }
        }
        else {
          if (iVar3 != 2) goto LAB_0040800c;
          pfVar5 = (float *)FUN_00405ae0(local_30,&local_14,L"user_off_down.png");
          local_1c = *pfVar5;
          puVar6 = (undefined4 *)(*pcVar8)(0x10);
          if (puVar6 == (undefined4 *)0x0) {
            *(undefined4 *)(param_1 + 0x80) = 0;
          }
          else {
            *puVar6 = Gdiplus::Image::vftable;
            puVar6[1] = 0;
            uVar4 = GdipLoadImageFromFile(local_1c,puVar6 + 1);
            puVar6[2] = uVar4;
            *(undefined4 **)(param_1 + 0x80) = puVar6;
          }
        }
        goto LAB_00408000;
      }
      pfVar5 = (float *)FUN_00405ae0(local_38,&local_14,L"user_off_normal.png");
      local_1c = *pfVar5;
      puVar6 = (undefined4 *)(*pcVar8)(0x10);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puVar6 = Gdiplus::Image::vftable;
        puVar6[1] = 0;
        uVar4 = GdipLoadImageFromFile(local_1c,puVar6 + 1);
        puVar6[2] = uVar4;
      }
LAB_00407ffd:
      *(undefined4 **)(param_1 + 0x78) = puVar6;
LAB_00408000:
      Ordinal_1042();
      pcVar8 = GdipAlloc_exref;
    }
    else {
      if (iVar3 == 0) {
        pfVar5 = (float *)FUN_00405ae0(local_2c,&local_14,L"user_normal.png");
        local_1c = *pfVar5;
        puVar6 = (undefined4 *)(*pcVar8)(0x10);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          *puVar6 = Gdiplus::Image::vftable;
          puVar6[1] = 0;
          uVar4 = GdipLoadImageFromFile(local_1c,puVar6 + 1);
          puVar6[2] = uVar4;
        }
        goto LAB_00407ffd;
      }
      if (iVar3 == 1) {
        pfVar5 = (float *)FUN_00405ae0(local_28,&local_14,L"user_hover.png");
        local_1c = *pfVar5;
        puVar6 = (undefined4 *)(*pcVar8)(0x10);
        if (puVar6 == (undefined4 *)0x0) {
          *(undefined4 *)(param_1 + 0x7c) = 0;
        }
        else {
          *puVar6 = Gdiplus::Image::vftable;
          puVar6[1] = 0;
          uVar4 = GdipLoadImageFromFile(local_1c,puVar6 + 1);
          puVar6[2] = uVar4;
          *(undefined4 **)(param_1 + 0x7c) = puVar6;
        }
        goto LAB_00408000;
      }
      if (iVar3 == 2) {
        pfVar5 = (float *)FUN_00405ae0(local_24,&local_14,L"user_down.png");
        local_1c = *pfVar5;
        puVar6 = (undefined4 *)(*pcVar8)(0x10);
        if (puVar6 == (undefined4 *)0x0) {
          *(undefined4 *)(param_1 + 0x80) = 0;
        }
        else {
          *puVar6 = Gdiplus::Image::vftable;
          puVar6[1] = 0;
          uVar4 = GdipLoadImageFromFile(local_1c,puVar6 + 1);
          puVar6[2] = uVar4;
          *(undefined4 **)(param_1 + 0x80) = puVar6;
        }
        goto LAB_00408000;
      }
    }
LAB_0040800c:
    iVar3 = iVar3 + 1;
    if (3 < iVar3) {
      *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x370) = *(undefined4 *)(param_1 + 0x78);
      *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x374) = *(undefined4 *)(param_1 + 0x7c);
      *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x378) = *(undefined4 *)(param_1 + 0x80);
      *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x37c) = *(undefined4 *)(param_1 + 0x84);
      Ordinal_1042();
      Ordinal_1042();
      ExceptionList = local_10;
      return 1;
    }
  } while( true );
}

