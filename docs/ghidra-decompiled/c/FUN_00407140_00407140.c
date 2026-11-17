
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00407140(void *this,float param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  IDataManager *pIVar3;
  CModuleLanguageTrans *this_00;
  undefined4 uVar4;
  HFONT pHVar5;
  float fVar6;
  wchar_t *pwVar7;
  undefined4 *local_70;
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00445d7f;
  local_10 = ExceptionList;
  uVar1 = DAT_0046400c ^ (uint)(local_28 + 0x24);
  ExceptionList = &local_10;
  *(undefined ***)this = CMainInterfaceData::vftable;
  local_1c = this;
  local_20 = (undefined4 *)GetDpi();
  fVar6 = (float)local_20 * _DAT_0044ff00;
  *(undefined4 *)((int)this + 8) = 0;
  *(int *)((int)this + 4) = (int)fVar6;
  puVar2 = (undefined4 *)Ordinal_1506(8,uVar1);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    *puVar2 = CFont::vftable;
  }
  *(undefined4 **)((int)this + 0x10) = puVar2;
  puVar2 = (undefined4 *)Ordinal_1506(8,uVar1);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    *puVar2 = CFont::vftable;
  }
  *(undefined4 **)((int)this + 0x14) = puVar2;
  puVar2 = (undefined4 *)Ordinal_1506(8,uVar1);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    *puVar2 = CFont::vftable;
  }
  *(undefined4 **)((int)this + 0x18) = puVar2;
  *(undefined4 *)((int)this + 0x1c) = 0xf4f4f4;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  local_70 = (undefined4 *)Ordinal_265(0x54c);
  local_8 = 0;
  if (local_70 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = local_70 + 1;
    *local_70 = 0xd;
    FUN_0041d1bc(puVar2,0x68,0xd,FUN_00407a90);
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 0x98) = puVar2;
  pIVar3 = CommonData_Get();
  pwVar7 = (wchar_t *)0x5;
  uVar1 = (int)this + 0x9c;
  this_00 = (CModuleLanguageTrans *)
            (**(code **)(*(int *)pIVar3 + 0x28))(uVar1,5,L"ID_PlayerMaster_PSW_Title");
  CModuleLanguageTrans::TranslateString(this_00,uVar1,pwVar7);
  local_8 = 1;
  *(float *)((int)this + 0xa0) = param_1;
  *(undefined4 *)((int)this + 0xa4) = 1;
  FUN_00406550();
  local_8._0_1_ = 2;
  FUN_00405ae0(&local_14,&local_18,L"Resource\\StyleWhite\\MainLable\\");
  local_8._0_1_ = 3;
  param_1 = GetDpi();
  if (param_1 <= _DAT_0044feb4) {
    if (param_1 <= _DAT_0044feb0) goto LAB_00407320;
    uVar4 = FUN_00405ae0(&param_1,&local_18,L"Resource\\StyleWhite\\DPI150\\MainLable\\");
    local_8._0_1_ = 5;
  }
  else {
    uVar4 = FUN_00405ae0(&param_1,&local_18,L"Resource\\StyleWhite\\DPI250\\MainLable\\");
    local_8._0_1_ = 4;
  }
  Ordinal_1518(uVar4);
  local_8._0_1_ = 3;
  Ordinal_1042();
LAB_00407320:
  param_1 = 0.0;
  do {
    local_20 = (undefined4 *)FUN_00405ae0(local_28,&local_14,L"logo.png");
    local_20 = (undefined4 *)*local_20;
    local_24 = (undefined4 *)GdipAlloc(0x10);
    if (local_24 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *local_24 = Gdiplus::Image::vftable;
      local_24[1] = 0;
      uVar4 = GdipLoadImageFromFile(local_20,local_24 + 1);
      local_24[2] = uVar4;
      puVar2 = local_24;
    }
    *(undefined4 **)((int)this + (int)param_1 * 4 + 0x28) = puVar2;
    Ordinal_1042();
    *(undefined4 *)((int)this + (int)param_1 * 4 + 0x38) = 0;
    *(undefined4 *)((int)this + (int)param_1 * 4 + 0x48) = 0;
    *(undefined4 *)((int)this + (int)param_1 * 4 + 0x58) = 0;
    *(undefined4 *)((int)this + (int)param_1 * 4 + 0x68) = 0;
    *(undefined4 *)((int)this + (int)param_1 * 4 + 0x78) = 0;
    *(undefined4 *)((int)this + (int)param_1 * 4 + 0x88) = 0;
    if (param_1 == 0.0) {
      local_24 = (undefined4 *)FUN_00405ae0(local_5c,&local_14,L"close_normal.png");
      local_24 = (undefined4 *)*local_24;
      local_20 = (undefined4 *)GdipAlloc(0x10);
      if (local_20 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *local_20 = Gdiplus::Image::vftable;
        local_20[1] = 0;
        uVar4 = GdipLoadImageFromFile(local_24,local_20 + 1);
        local_20[2] = uVar4;
        puVar2 = local_20;
      }
      *(undefined4 **)((int)this + 0x38) = puVar2;
      Ordinal_1042();
      local_24 = (undefined4 *)FUN_00405ae0(local_60,&local_14,L"min_normal.png");
      local_24 = (undefined4 *)*local_24;
      local_20 = (undefined4 *)GdipAlloc(0x10);
      if (local_20 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *local_20 = Gdiplus::Image::vftable;
        local_20[1] = 0;
        uVar4 = GdipLoadImageFromFile(local_24,local_20 + 1);
        local_20[2] = uVar4;
        puVar2 = local_20;
      }
      *(undefined4 **)((int)this + 0x48) = puVar2;
      Ordinal_1042();
      local_24 = (undefined4 *)FUN_00405ae0(local_64,&local_14,L"max_normal.png");
      local_24 = (undefined4 *)*local_24;
      local_20 = (undefined4 *)GdipAlloc(0x10);
      if (local_20 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *local_20 = Gdiplus::Image::vftable;
        local_20[1] = 0;
        uVar4 = GdipLoadImageFromFile(local_24,local_20 + 1);
        local_20[2] = uVar4;
        puVar2 = local_20;
      }
      *(undefined4 **)((int)this + 0x58) = puVar2;
      Ordinal_1042();
      local_24 = (undefined4 *)FUN_00405ae0(local_68,&local_14,L"restore_normal.png");
      local_24 = (undefined4 *)*local_24;
      local_20 = (undefined4 *)GdipAlloc(0x10);
      if (local_20 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *local_20 = Gdiplus::Image::vftable;
        local_20[1] = 0;
        uVar4 = GdipLoadImageFromFile(local_24,local_20 + 1);
        local_20[2] = uVar4;
        puVar2 = local_20;
      }
      *(undefined4 **)((int)this + 0x68) = puVar2;
      Ordinal_1042();
      local_24 = (undefined4 *)FUN_00405ae0(local_6c,&local_14,L"user_normal.png");
      local_24 = (undefined4 *)*local_24;
      local_20 = (undefined4 *)GdipAlloc(0x10);
      if (local_20 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *local_20 = Gdiplus::Image::vftable;
        local_20[1] = 0;
        uVar4 = GdipLoadImageFromFile(local_24,local_20 + 1);
        local_20[2] = uVar4;
        puVar2 = local_20;
      }
      *(undefined4 **)((int)this + 0x78) = puVar2;
      Ordinal_1042();
      local_24 = (undefined4 *)FUN_00405ae0(&local_70,&local_14,L"set_normal.png");
      local_24 = (undefined4 *)*local_24;
      local_20 = (undefined4 *)GdipAlloc(0x10);
      if (local_20 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *local_20 = Gdiplus::Image::vftable;
        local_20[1] = 0;
        uVar4 = GdipLoadImageFromFile(local_24,local_20 + 1);
        local_20[2] = uVar4;
        puVar2 = local_20;
      }
      *(undefined4 **)((int)this + 0x88) = puVar2;
LAB_0040796c:
      Ordinal_1042();
    }
    else {
      if (param_1 == 1.4013e-45) {
        local_24 = (undefined4 *)FUN_00405ae0(local_44,&local_14,L"close_hover.png");
        local_24 = (undefined4 *)*local_24;
        local_20 = (undefined4 *)GdipAlloc(0x10);
        if (local_20 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          *local_20 = Gdiplus::Image::vftable;
          local_20[1] = 0;
          uVar4 = GdipLoadImageFromFile(local_24,local_20 + 1);
          local_20[2] = uVar4;
          puVar2 = local_20;
        }
        *(undefined4 **)((int)this + 0x3c) = puVar2;
        Ordinal_1042();
        local_24 = (undefined4 *)FUN_00405ae0(local_48,&local_14,L"min_hover.png");
        local_24 = (undefined4 *)*local_24;
        local_20 = (undefined4 *)GdipAlloc(0x10);
        if (local_20 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          *local_20 = Gdiplus::Image::vftable;
          local_20[1] = 0;
          uVar4 = GdipLoadImageFromFile(local_24,local_20 + 1);
          local_20[2] = uVar4;
          puVar2 = local_20;
        }
        *(undefined4 **)((int)this + 0x4c) = puVar2;
        Ordinal_1042();
        local_24 = (undefined4 *)FUN_00405ae0(local_4c,&local_14,L"max_hover.png");
        local_24 = (undefined4 *)*local_24;
        local_20 = (undefined4 *)GdipAlloc(0x10);
        if (local_20 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          *local_20 = Gdiplus::Image::vftable;
          local_20[1] = 0;
          uVar4 = GdipLoadImageFromFile(local_24,local_20 + 1);
          local_20[2] = uVar4;
          puVar2 = local_20;
        }
        *(undefined4 **)((int)this + 0x5c) = puVar2;
        Ordinal_1042();
        local_24 = (undefined4 *)FUN_00405ae0(local_50,&local_14,L"restore_hover.png");
        local_24 = (undefined4 *)*local_24;
        local_20 = (undefined4 *)GdipAlloc(0x10);
        if (local_20 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          *local_20 = Gdiplus::Image::vftable;
          local_20[1] = 0;
          uVar4 = GdipLoadImageFromFile(local_24,local_20 + 1);
          local_20[2] = uVar4;
          puVar2 = local_20;
        }
        *(undefined4 **)((int)this + 0x6c) = puVar2;
        Ordinal_1042();
        local_24 = (undefined4 *)FUN_00405ae0(local_54,&local_14,L"user_hover.png");
        local_24 = (undefined4 *)*local_24;
        local_20 = (undefined4 *)GdipAlloc(0x10);
        if (local_20 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          *local_20 = Gdiplus::Image::vftable;
          local_20[1] = 0;
          uVar4 = GdipLoadImageFromFile(local_24,local_20 + 1);
          local_20[2] = uVar4;
          puVar2 = local_20;
        }
        *(undefined4 **)((int)this + 0x7c) = puVar2;
        Ordinal_1042();
        local_24 = (undefined4 *)FUN_00405ae0(local_58,&local_14,L"set_hover.png");
        local_24 = (undefined4 *)*local_24;
        local_20 = (undefined4 *)GdipAlloc(0x10);
        if (local_20 == (undefined4 *)0x0) {
          *(undefined4 *)((int)this + 0x8c) = 0;
        }
        else {
          *local_20 = Gdiplus::Image::vftable;
          local_20[1] = 0;
          uVar4 = GdipLoadImageFromFile(local_24,local_20 + 1);
          local_20[2] = uVar4;
          *(undefined4 **)((int)this + 0x8c) = local_20;
        }
        goto LAB_0040796c;
      }
      if (param_1 == 2.8026e-45) {
        local_24 = (undefined4 *)FUN_00405ae0(local_2c,&local_14,L"close_down.png");
        local_24 = (undefined4 *)*local_24;
        local_20 = (undefined4 *)GdipAlloc(0x10);
        if (local_20 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          *local_20 = Gdiplus::Image::vftable;
          local_20[1] = 0;
          uVar4 = GdipLoadImageFromFile(local_24,local_20 + 1);
          local_20[2] = uVar4;
          puVar2 = local_20;
        }
        *(undefined4 **)((int)this + 0x40) = puVar2;
        Ordinal_1042();
        local_24 = (undefined4 *)FUN_00405ae0(local_30,&local_14,L"min_down.png");
        local_24 = (undefined4 *)*local_24;
        local_20 = (undefined4 *)GdipAlloc(0x10);
        if (local_20 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          *local_20 = Gdiplus::Image::vftable;
          local_20[1] = 0;
          uVar4 = GdipLoadImageFromFile(local_24,local_20 + 1);
          local_20[2] = uVar4;
          puVar2 = local_20;
        }
        *(undefined4 **)((int)this + 0x50) = puVar2;
        Ordinal_1042();
        local_24 = (undefined4 *)FUN_00405ae0(local_34,&local_14,L"max_down.png");
        local_24 = (undefined4 *)*local_24;
        local_20 = (undefined4 *)GdipAlloc(0x10);
        if (local_20 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          *local_20 = Gdiplus::Image::vftable;
          local_20[1] = 0;
          uVar4 = GdipLoadImageFromFile(local_24,local_20 + 1);
          local_20[2] = uVar4;
          puVar2 = local_20;
        }
        *(undefined4 **)((int)this + 0x60) = puVar2;
        Ordinal_1042();
        local_24 = (undefined4 *)FUN_00405ae0(local_38,&local_14,L"restore_down.png");
        local_24 = (undefined4 *)*local_24;
        local_20 = (undefined4 *)GdipAlloc(0x10);
        if (local_20 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          *local_20 = Gdiplus::Image::vftable;
          local_20[1] = 0;
          uVar4 = GdipLoadImageFromFile(local_24,local_20 + 1);
          local_20[2] = uVar4;
          puVar2 = local_20;
        }
        *(undefined4 **)((int)this + 0x70) = puVar2;
        Ordinal_1042();
        local_24 = (undefined4 *)FUN_00405ae0(local_3c,&local_14,L"user_down.png");
        local_24 = (undefined4 *)*local_24;
        local_20 = (undefined4 *)GdipAlloc(0x10);
        if (local_20 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          *local_20 = Gdiplus::Image::vftable;
          local_20[1] = 0;
          uVar4 = GdipLoadImageFromFile(local_24,local_20 + 1);
          local_20[2] = uVar4;
          puVar2 = local_20;
        }
        *(undefined4 **)((int)this + 0x80) = puVar2;
        Ordinal_1042();
        local_24 = (undefined4 *)FUN_00405ae0(local_40,&local_14,L"set_down.png");
        local_24 = (undefined4 *)*local_24;
        local_20 = (undefined4 *)GdipAlloc(0x10);
        if (local_20 == (undefined4 *)0x0) {
          *(undefined4 *)((int)this + 0x90) = 0;
        }
        else {
          *local_20 = Gdiplus::Image::vftable;
          local_20[1] = 0;
          uVar4 = GdipLoadImageFromFile(local_24,local_20 + 1);
          local_20[2] = uVar4;
          *(undefined4 **)((int)this + 0x90) = local_20;
        }
        goto LAB_0040796c;
      }
    }
    param_1 = (float)((int)param_1 + 1);
    if (3 < (int)param_1) {
      param_1 = GetDpi();
      pHVar5 = CreateFontW((int)(param_1 * _DAT_0044fee0),0,0,0,400,0,0,0,1,0,0,0,0x20,L"Arial");
      Ordinal_2480(pHVar5);
      param_1 = GetDpi();
      pHVar5 = CreateFontW((int)(param_1 * _DAT_0044fee0),0,0,0,700,0,0,0,1,0,0,0,0x20,L"Arial");
      Ordinal_2480(pHVar5);
      param_1 = GetDpi();
      pHVar5 = CreateFontW((int)(param_1 * _DAT_0044fee4),0,0,0,700,0,0,0,1,0,0,0,0x20,
                           L"微软雅黑");
      Ordinal_2480(pHVar5);
      Ordinal_1042();
      Ordinal_1042();
      ExceptionList = local_10;
      return local_1c;
    }
  } while( true );
}

