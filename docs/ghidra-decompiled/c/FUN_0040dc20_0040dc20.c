
void __thiscall FUN_0040dc20(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  IDataManager *pIVar3;
  CModuleLanguageTrans *pCVar4;
  undefined4 *puVar5;
  CWnd *pCVar6;
  int *piVar7;
  ICustomControl *pIVar8;
  HANDLE hHandle;
  DWORD DVar9;
  undefined4 extraout_ECX;
  code *pcVar10;
  code *pcVar11;
  wchar_t *pwVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  wchar_t *pwVar16;
  int iVar17;
  int iVar18;
  undefined1 auStack_42 [2];
  int iStack_34;
  int aiStack_30 [2];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 *puStack_20;
  void *pvStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_0044676d;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *(undefined4 *)((int)this + 0xf4) = 0;
  if (*(int *)((int)this + 0x9c) == 0) {
    Ordinal_3790();
    ExceptionList = local_14;
    return;
  }
  ScreenToClient(*(HWND *)((int)this + 0x20),(LPPOINT)&param_2);
  param_3 = param_3 + *(int *)((int)*(void **)((int)this + 0x9c) + 4);
  uVar1 = FUN_00409000(*(void **)((int)this + 0x9c),(POINT *)&param_2);
  pcVar11 = Ordinal_3790_exref;
  pcVar10 = CommonData_Get_exref;
  switch(uVar1) {
  case 9:
    Ordinal_14094();
    break;
  case 10:
    if (*(int *)((int)this + 0xa4) != 0) {
      FUN_00406740(*(int *)((int)this + 0xa4));
    }
    if (*(int *)((int)this + 0x9c) != 0) {
      *(undefined4 *)(*(int *)((int)this + 0x9c) + 8) = 1;
    }
    Ordinal_14094();
    break;
  case 0xb:
    Ordinal_14094();
    break;
  case 0xc:
    iStack_34 = 0;
    aiStack_30[0] = 0;
    if (DAT_00464e48 != 0) {
      if ((*(int **)(DAT_00464e48 + 8) != (int *)0x0) &&
         (iVar2 = (**(code **)(**(int **)(DAT_00464e48 + 8) + 0x98))(), iVar2 != 0)) {
        pIVar3 = CommonData_Get();
        pwVar16 = (wchar_t *)0x0;
        piVar7 = aiStack_30 + 1;
        pCVar4 = (CModuleLanguageTrans *)(**(code **)(*(int *)pIVar3 + 0x28))();
        puVar5 = (undefined4 *)CModuleLanguageTrans::TranslateString(pCVar4,(uint)piVar7,pwVar16);
        uStack_c = 0;
        iVar2 = Ordinal_2204();
        iVar18 = 1;
        iVar17 = 5;
        iVar14 = 0;
        uVar13 = 0x21;
        pwVar16 = *(wchar_t **)(*(int *)(iVar2 + 4) + 0x50);
        pwVar12 = (wchar_t *)*puVar5;
        pCVar6 = (CWnd *)FUN_004103a0();
        iVar2 = MsgBox(pCVar6,pwVar12,pwVar16,uVar13,iVar14,iVar17,iVar18);
        uStack_c = 0xffffffff;
        Ordinal_1042();
        if (iVar2 != 1) {
          ExceptionList = local_14;
          return;
        }
        aiStack_30[0] = 1;
        pcVar10 = CommonData_Get_exref;
      }
      iVar2 = 0;
      iVar14 = FUN_00410ab0();
      if (iVar14 != 0) {
        piVar7 = (int *)(*pcVar10)();
        pwVar16 = (wchar_t *)0x1;
        puVar15 = auStack_28;
        pCVar4 = (CModuleLanguageTrans *)(**(code **)(*piVar7 + 0x28))();
        puVar5 = (undefined4 *)CModuleLanguageTrans::TranslateString(pCVar4,(uint)puVar15,pwVar16);
        uStack_c = 1;
        iVar2 = Ordinal_2204();
        iVar18 = 1;
        iVar17 = 5;
        iVar14 = 0;
        uVar13 = 0x21;
        pwVar16 = *(wchar_t **)(*(int *)(iVar2 + 4) + 0x50);
        pwVar12 = (wchar_t *)*puVar5;
        pCVar6 = (CWnd *)FUN_004103a0();
        iVar2 = MsgBox(pCVar6,pwVar12,pwVar16,uVar13,iVar14,iVar17,iVar18);
        uStack_c = 0xffffffff;
        Ordinal_1042();
        if (iVar2 != 1) {
          if (*(int **)(DAT_00464e48 + 8) == (int *)0x0) {
            ExceptionList = local_14;
            return;
          }
          (**(code **)(**(int **)(DAT_00464e48 + 8) + 0x6c))();
          ExceptionList = pvStack_1c;
          return;
        }
        iVar2 = 1;
        iStack_34 = 1;
      }
      if ((*(int **)(DAT_00464e48 + 0xc) != (int *)0x0) &&
         (iVar14 = (**(code **)(**(int **)(DAT_00464e48 + 0xc) + 0x5c))(), iVar14 != 0)) {
        pIVar3 = CommonData_Get();
        pwVar16 = (wchar_t *)0x1;
        puVar15 = auStack_24;
        pCVar4 = (CModuleLanguageTrans *)(**(code **)(*(int *)pIVar3 + 0x28))();
        puVar5 = (undefined4 *)CModuleLanguageTrans::TranslateString(pCVar4,(uint)puVar15,pwVar16);
        uStack_c = 2;
        iVar2 = Ordinal_2204();
        iVar18 = 1;
        iVar17 = 5;
        iVar14 = 0;
        uVar13 = 0x21;
        pwVar16 = *(wchar_t **)(*(int *)(iVar2 + 4) + 0x50);
        pwVar12 = (wchar_t *)*puVar5;
        pCVar6 = (CWnd *)FUN_004103a0();
        iVar2 = MsgBox(pCVar6,pwVar12,pwVar16,uVar13,iVar14,iVar17,iVar18);
        uStack_c = 0xffffffff;
        Ordinal_1042();
        if (iVar2 != 1) {
          pIVar3 = CommonData_Get();
          if (pIVar3 == (IDataManager *)0x0) {
            ExceptionList = local_14;
            return;
          }
          iVar2 = (**(code **)(*(int *)pIVar3 + 0x2c))();
          if (*(int *)(iVar2 + 8) != 0) {
            ExceptionList = local_14;
            return;
          }
          if (DAT_00464e48 != 0) {
            FUN_0040dbc0(1);
          }
          FUN_00409260(*(void **)((int)this + 0x9c),4);
          FUN_004091c0(4,2);
          FUN_00408090(*(void **)((int)this + 0x9c),
                       *(int *)((int)*(void **)((int)this + 0x9c) + 0xc));
          FUN_0040d3f0((int)this);
          if (*(int **)(DAT_00464e48 + 0x14) == (int *)0x0) {
            ExceptionList = local_14;
            return;
          }
          (**(code **)(**(int **)(DAT_00464e48 + 0x14) + 0x90))();
          ExceptionList = local_14;
          return;
        }
        iVar2 = iStack_34;
      }
      if ((iVar2 != 0) || (aiStack_30[0] != 0)) {
        pIVar8 = ColorLightControl_GetInterface();
        iVar2 = (**(code **)(*(int *)pIVar8 + 0x10))();
        *(int *)((int)this + 0x1d0) = iVar2;
        if (iVar2 == 0) {
          ExceptionList = local_14;
          return;
        }
        pIVar3 = CommonData_Get();
        pwVar16 = (wchar_t *)0x5;
        piVar7 = aiStack_30;
        pCVar4 = (CModuleLanguageTrans *)(**(code **)(*(int *)pIVar3 + 0x28))();
        CModuleLanguageTrans::TranslateString(pCVar4,(uint)piVar7,pwVar16);
        puStack_20 = auStack_42 + -6;
        uStack_c = 3;
        Ordinal_286();
        puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,4);
        Ordinal_280(&iStack_34,extraout_ECX,this,0);
        local_14 = (void *)CONCAT31(local_14._1_3_,3);
        (**(code **)(**(int **)((int)this + 0x1d0) + 4))();
        (**(code **)(**(int **)((int)this + 0x1d0) + 0x14))();
        hHandle = (HANDLE)_beginthreadex((void *)0x0,0,FUN_0040dbf0,this,0,
                                         (uint *)(auStack_42 + -0x12));
        iVar2 = 5;
        DVar9 = WaitForSingleObject(hHandle,500);
        while ((DVar9 != 0 && (DVar9 != 0xffffffff))) {
          if (*(int **)((int)this + 0x1d0) != (int *)0x0) {
            if (100 < iVar2) {
              iVar2 = 100;
            }
            (**(code **)(**(int **)((int)this + 0x1d0) + 0xc))(iVar2);
          }
          iVar2 = iVar2 + 5;
          DVar9 = WaitForSingleObject(hHandle,500);
        }
        CloseHandle(hHandle);
        if (*(int **)((int)this + 0x1d0) != (int *)0x0) {
          (**(code **)(**(int **)((int)this + 0x1d0) + 0xc))(100);
          pIVar8 = ColorLightControl_GetInterface();
          (**(code **)(*(int *)pIVar8 + 0x14))(1);
          *(undefined4 *)((int)this + 0x1d0) = 0;
        }
        aiStack_30[1] = 0xffffffff;
        Ordinal_1042();
      }
    }
    pcVar11 = Ordinal_3790_exref;
    FUN_0040f3d0();
    break;
  default:
    Ordinal_3790();
  }
  (*pcVar11)();
  ExceptionList = local_14;
  return;
}

