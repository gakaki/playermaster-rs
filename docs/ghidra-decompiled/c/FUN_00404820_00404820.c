
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void __thiscall FUN_00404820(void *this,wchar_t *param_1,LPCWSTR param_2)

{
  char cVar1;
  wchar_t wVar2;
  undefined4 uVar3;
  bool bVar4;
  wchar_t *pwVar5;
  int iVar6;
  char *pcVar7;
  HWND pHVar8;
  DWORD DVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 *_Dst;
  undefined4 *puVar13;
  int iVar14;
  short sVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined1 uStack00000000;
  UINT aUStackY_5e0 [2];
  DWORD aDStackY_5d8 [3];
  undefined1 auStack_5ae [18];
  undefined4 local_59c;
  ushort local_598;
  short local_596;
  undefined4 local_594;
  undefined4 local_590;
  int local_58c;
  undefined4 local_588;
  int local_584;
  int local_580;
  size_t local_57c;
  undefined4 local_578;
  undefined2 local_574;
  undefined2 local_572;
  ushort local_570;
  undefined4 local_56c;
  int local_568;
  undefined4 *local_460;
  undefined8 *local_45c;
  undefined4 local_458;
  char local_454 [260];
  char local_350 [260];
  undefined4 local_24c;
  undefined4 local_244;
  int local_240;
  wchar_t local_23c [259];
  undefined2 local_36;
  char local_34 [12];
  undefined8 local_28;
  undefined1 local_20;
  undefined4 local_1c;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined4 local_8;
  
  local_8 = DAT_0046400c ^ (uint)(local_34 + 0x30);
  if (*(int *)((int)this + 0x14) != 0) goto LAB_00404dd9;
  if (*(char *)((int)this + 0x2c) != '\0') goto LAB_00404dd9;
  iVar14 = 0;
  if (*(int *)this != 0) {
    iVar14 = 0xc;
  }
  aDStackY_5d8[2] = 0x404888;
  wcsncpy_s(local_23c,0x104,param_1,0x103);
  local_36 = 0;
  if (local_23c[0] == L'\0') goto LAB_00404dd9;
  pwVar5 = local_23c;
  do {
    if (*pwVar5 == L'\\') {
      *pwVar5 = L'/';
    }
    pwVar5 = pwVar5 + 1;
  } while (*pwVar5 != L'\0');
  sVar15 = 8;
  bVar4 = FUN_00403ff0((ushort *)local_23c);
  if (bVar4) {
    sVar15 = 0;
  }
  iVar6 = FUN_004043a0(this,param_2);
  if (iVar6 != 0) goto LAB_00404dd9;
  pwVar5 = local_23c;
  local_240 = iVar6;
  do {
    wVar2 = *pwVar5;
    pwVar5 = pwVar5 + 1;
  } while (wVar2 != L'\0');
  iVar6 = ((int)pwVar5 - (int)(local_23c + 1) >> 1) + 1;
  if (iVar6 < 0x40000000) {
    iVar10 = iVar6 * -2;
    if (&uStack00000000 == (undefined1 *)0x5bc) goto LAB_00404955;
    *(undefined4 *)((int)aDStackY_5d8 + iVar10 + 0x18) = 0;
    *(undefined4 *)((int)aDStackY_5d8 + iVar10 + 0x14) = 0;
    *(int *)((int)aDStackY_5d8 + iVar10 + 0x10) = iVar6 * 2;
    *(undefined1 **)((int)aDStackY_5d8 + iVar10 + 0xc) = auStack_5ae + -0xe;
    *(undefined4 *)((int)aDStackY_5d8 + iVar10 + 8) = 0xffffffff;
    *(wchar_t **)((int)aDStackY_5d8 + iVar10 + 4) = local_23c;
    *(undefined4 *)((int)aDStackY_5d8 + iVar10) = 0;
    *(undefined4 *)((int)aUStackY_5e0 + iVar10 + 4) = 3;
    *(undefined4 *)((int)aUStackY_5e0 + iVar10) = 0x40494d;
    iVar6 = WideCharToMultiByte(*(UINT *)((int)aUStackY_5e0 + iVar10 + 4),
                                *(DWORD *)((int)aDStackY_5d8 + iVar10),
                                *(LPCWSTR *)((int)aDStackY_5d8 + iVar10 + 4),
                                *(int *)((int)aDStackY_5d8 + iVar10 + 8),
                                *(LPSTR *)((int)aDStackY_5d8 + iVar10 + 0xc),
                                *(int *)((int)aDStackY_5d8 + iVar10 + 0x10),
                                *(LPCSTR *)((int)aDStackY_5d8 + iVar10 + 0x14),
                                *(LPBOOL *)((int)aDStackY_5d8 + iVar10 + 0x18));
    pcVar7 = (char *)(-(uint)(iVar6 != 0) & (uint)(auStack_5ae + -0xe));
  }
  else {
LAB_00404955:
    pcVar7 = (char *)0x0;
  }
  strcpy_s(local_454,0x104,pcVar7);
  pcVar7 = local_454;
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_584 = (int)pcVar7 - (int)(local_454 + 1);
  strcpy_s(local_350,0x104,"");
  local_458 = 0;
  local_572 = 0;
  local_594 = *(undefined4 *)((int)this + 0x5c);
  local_570 = 8;
  local_578 = 0;
  local_24c = 1;
  local_244 = 0;
  local_59c = 0x140b17;
  local_590 = 0;
  local_598 = 8;
  if (*(int *)this != 0) {
    local_570 = 9;
    local_598 = 9;
  }
  if ((sVar15 == 0) && (-1 < *(int *)((int)this + 100))) {
    local_58c = *(int *)((int)this + 100) + iVar14;
  }
  else {
    local_58c = 0;
  }
  local_588 = *(undefined4 *)((int)this + 100);
  local_574 = 0;
  local_56c = *(undefined4 *)((int)this + 0x4c);
  uVar12 = *(undefined4 *)((int)this + 0x54);
  local_568 = *(int *)((int)this + 0x10) + *(int *)((int)this + 0x18);
  local_460 = &local_1c;
  local_45c = &local_28;
  uVar3 = *(undefined4 *)((int)this + 0x50);
  uStack_17 = *(undefined1 *)((int)this + 0x54);
  uStack_16 = (undefined1)((uint)uVar12 >> 8);
  uStack_15 = (undefined1)((uint)uVar12 >> 0x10);
  local_13 = *(undefined1 *)((int)this + 0x50);
  local_12 = (undefined1)((uint)uVar3 >> 8);
  local_11 = (undefined1)((uint)uVar3 >> 0x10);
  local_f = *(undefined1 *)((int)this + 0x58);
  local_10 = (undefined1)((uint)uVar3 >> 0x18);
  uVar3 = *(undefined4 *)((int)this + 0x58);
  local_e = (undefined1)((uint)uVar3 >> 8);
  local_1c = 0xd5455;
  uStack_18 = 7;
  local_c = (undefined1)((uint)uVar3 >> 0x18);
  local_580 = 0x11;
  local_57c = 9;
  local_20 = (undefined1)((uint)uVar12 >> 0x18);
  local_d = (undefined1)((uint)uVar3 >> 0x10);
  local_28 = CONCAT53((int5)(CONCAT17(uStack_15,CONCAT16(uStack_16,CONCAT15(uStack_17,0x7000d5455)))
                            >> 0x18),0x55455);
  local_596 = sVar15;
  local_14 = local_20;
  iVar6 = FUN_00403400(&local_59c,this);
  if (iVar6 == 0) {
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + local_580 + 0x1e + local_584;
    if (*(int *)((int)this + 0x14) == 0) {
      *(undefined4 *)((int)this + 0x30) = 0x12345678;
      *(undefined4 *)((int)this + 0x34) = 0x23456789;
      *(undefined4 *)((int)this + 0x38) = 0x34567890;
      for (pcVar7 = *(char **)this; (pcVar7 != (char *)0x0 && (*pcVar7 != '\0'));
          pcVar7 = pcVar7 + 1) {
        FUN_00403ed0((uint *)((int)this + 0x30),*pcVar7);
      }
      if (DAT_00464e44 == '\0') {
        pHVar8 = GetDesktopWindow();
        DVar9 = GetTickCount();
        srand((uint)pHVar8 ^ DVar9);
      }
      iVar6 = 0;
      do {
        iVar10 = rand();
        local_34[iVar6] = (char)(iVar10 >> 7);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0xc);
      iVar6 = 0;
      local_34[0xb] = (char)((uint)local_594 >> 8);
      do {
        uVar11 = FUN_00403f20((uint *)((int)this + 0x30),local_34[iVar6]);
        local_34[iVar6] = (char)uVar11;
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0xc);
      if (*(int *)this != 0) {
        FUN_00404170(this,local_34,(void *)0xc);
        *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 0xc;
      }
      iVar6 = 0;
      *(bool *)((int)this + 0x2d) = *(int *)this != 0;
      if (sVar15 == 8) {
        iVar6 = FUN_00404680(this,(int)&local_59c);
      }
      else if (sVar15 == 0) {
        iVar6 = FUN_004047b0(this);
      }
      *(undefined1 *)((int)this + 0x2d) = 0;
      if ((*(char *)((int)this + 0x74) != '\0') && (*(HANDLE *)((int)this + 0x70) != (HANDLE)0x0)) {
        CloseHandle(*(HANDLE *)((int)this + 0x70));
      }
      *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + *(int *)((int)this + 0x84);
      uVar12 = *(undefined4 *)((int)this + 0x68);
      *(undefined4 *)((int)this + 0x70) = 0;
      *(undefined4 *)((int)this + 100) = uVar12;
      if ((*(int *)((int)this + 0x14) == 0) && (iVar6 == 0)) {
        iVar14 = *(int *)((int)this + 0x84) + iVar14;
        bVar4 = local_58c != iVar14;
        local_590 = *(undefined4 *)((int)this + 0x6c);
        local_58c = iVar14;
        local_588 = uVar12;
        if ((*(char *)((int)this + 0x1c) == '\0') || (*(int *)this != 0)) {
          if ((local_596 != sVar15) ||
             (((sVar15 == 0 && (bVar4)) || (iVar14 = FUN_004036b0(&local_59c,this), iVar14 != 0))))
          goto LAB_00404dd9;
          *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 0x10;
          local_598 = local_570;
        }
        else {
          if ((local_598 & 1) == 0) {
            local_598 = local_598 & 0xfff7;
          }
          local_596 = sVar15;
          local_570 = local_598;
          uVar12 = FUN_004042c0(this,local_568 - *(int *)((int)this + 0x10));
          if (((char)uVar12 == '\0') || (iVar14 = FUN_00403400(&local_59c,this), iVar14 != 0))
          goto LAB_00404dd9;
          uVar12 = FUN_004042c0(this,*(uint *)((int)this + 0x18));
          if ((char)uVar12 == '\0') goto LAB_00404dd9;
        }
        if (*(int *)((int)this + 0x14) == 0) {
          _Dst = (undefined8 *)Ordinal_265();
          memcpy(_Dst,local_45c,local_57c);
          local_45c = _Dst;
          puVar13 = (undefined4 *)Ordinal_1506();
          puVar16 = &local_59c;
          puVar17 = puVar13;
          for (iVar14 = 0xd8; iVar14 != 0; iVar14 = iVar14 + -1) {
            *puVar17 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar17 = puVar17 + 1;
          }
          iVar14 = *(int *)((int)this + 0x44);
          if (iVar14 == 0) {
            *(undefined4 **)((int)this + 0x44) = puVar13;
          }
          else {
            iVar6 = *(int *)(iVar14 + 0x35c);
            while (iVar6 != 0) {
              iVar14 = *(int *)(iVar14 + 0x35c);
              iVar6 = *(int *)(iVar14 + 0x35c);
            }
            *(undefined4 **)(iVar14 + 0x35c) = puVar13;
          }
        }
      }
    }
    else {
      FUN_00404620((int)this);
    }
  }
  else {
    FUN_00404620((int)this);
  }
LAB_00404dd9:
  FUN_0041d025(local_8 ^ (uint)(local_34 + 0x30));
  return;
}

