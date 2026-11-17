
void __thiscall FUN_0040d940(void *this,int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  IDataManager *pIVar5;
  CModuleLanguageTrans *this_00;
  undefined4 *puVar6;
  CWnd *pCVar7;
  undefined3 extraout_var;
  wchar_t *pwVar8;
  undefined1 *puVar9;
  int iVar10;
  wchar_t *pwVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_1e [2];
  undefined1 auStack_1c [8];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00446719;
  local_14 = ExceptionList;
  uVar3 = DAT_0046400c ^ (uint)(auStack_1e + -10);
  ExceptionList = &local_14;
  if ((((param_1 != 0xf) && (param_1 != 0xd)) && (param_1 != 0x10)) &&
     (((param_1 != 0x11 && (param_1 != 10)) &&
      ((param_1 != 0xb && ((param_1 != 0xc && (param_1 != 0xe)))))))) {
    if ((*(int *)((int)this + 0xa4) != 0) && (*(int *)((int)this + 0x9c) != 0)) {
      ScreenToClient(*(HWND *)((int)this + 0x20),(LPPOINT)&param_2);
      param_3 = param_3 + *(int *)((int)*(void **)((int)this + 0x9c) + 4);
      iVar4 = FUN_00409000(*(void **)((int)this + 0x9c),(POINT *)&param_2);
      if (((iVar4 == 5) || (iVar4 == 6)) || (iVar4 == 4)) {
        pIVar5 = CommonData_Get();
        if (pIVar5 == (IDataManager *)0x0) {
          ExceptionList = local_14;
          return;
        }
        iVar4 = (**(code **)(*(int *)pIVar5 + 0x30))();
        if ((*(int *)(iVar4 + 0x20) == 0) &&
           (iVar4 = (**(code **)(*(int *)pIVar5 + 0x2c))(), *(int *)(iVar4 + 8) == 0)) {
          pwVar11 = (wchar_t *)0x5;
          puVar9 = auStack_1c;
          this_00 = (CModuleLanguageTrans *)
                    (**(code **)(*(int *)pIVar5 + 0x28))(puVar9,5,L"IDS_PleaseLogin_First");
          puVar6 = (undefined4 *)CModuleLanguageTrans::TranslateString(this_00,(uint)puVar9,pwVar11)
          ;
          uStack_c = 0;
          iVar4 = Ordinal_2204();
          iVar13 = 1;
          iVar12 = 5;
          iVar10 = 0;
          uVar3 = 0x40;
          pwVar11 = *(wchar_t **)(*(int *)(iVar4 + 4) + 0x50);
          pwVar8 = (wchar_t *)*puVar6;
          pCVar7 = (CWnd *)FUN_004103a0();
          MsgBox(pCVar7,pwVar8,pwVar11,uVar3,iVar10,iVar12,iVar13);
          Ordinal_1042();
          ExceptionList = local_14;
          return;
        }
      }
      piVar1 = (int *)((int)this + 0xec);
      bVar2 = FUN_00406680(*(void **)((int)this + 0xa4),(POINT *)&param_2,piVar1);
      if (*piVar1 == 8) {
        FUN_0040f060((int)this);
        ExceptionList = local_14;
        return;
      }
      if (*piVar1 == 7) {
        FUN_0040e660((int)this);
        ExceptionList = local_14;
        return;
      }
      if (CONCAT31(extraout_var,bVar2) != 0) {
        FUN_0040d3f0((int)this);
        iVar4 = *piVar1;
        if ((iVar4 == 0) || (iVar4 == 2)) {
          Ordinal_5327(0x1fde);
          Ordinal_13404();
          Ordinal_13333(0x1fde,&DAT_0044d16c);
          goto LAB_0040db99;
        }
        if ((((iVar4 == 3) || (iVar4 == 5)) || (iVar4 == 6)) || (iVar4 == 4)) {
          if (DAT_00464e48 != 0) {
            FUN_0040dbc0(iVar4 + -3);
          }
          *(undefined4 *)((int)this + 0xf4) = 1;
          ExceptionList = local_14;
          return;
        }
      }
    }
    iVar4 = *(int *)((int)this + 0xec);
    if (iVar4 == 10) {
      ExceptionList = local_14;
      return;
    }
    if (iVar4 == 0xb) {
      ExceptionList = local_14;
      return;
    }
    if (iVar4 == 9) {
      ExceptionList = local_14;
      return;
    }
    if (iVar4 == 0xc) {
      ExceptionList = local_14;
      return;
    }
    *(undefined4 *)((int)this + 0xec) = 0;
  }
LAB_0040db99:
  Ordinal_3790(uVar3);
  ExceptionList = local_14;
  return;
}

