
void __thiscall FUN_0040d6f0(void *this,undefined4 param_1,undefined4 param_2,int param_3)

{
  void *this_00;
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  IDataManager *pIVar4;
  CServerData *pCVar5;
  int *piVar6;
  CModuleLanguageTrans *pCVar7;
  int iVar8;
  undefined4 *puVar9;
  wchar_t *pwVar10;
  undefined4 local_34;
  int local_30;
  undefined1 auStack_2c [4];
  tagTRACKMOUSEEVENT local_28;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_004466ed;
  local_14 = ExceptionList;
  uVar1 = DAT_0046400c ^ (uint)(auStack_2c + -0x14);
  ExceptionList = &local_14;
  if (*(int *)((int)this + 0xf0) == 0) {
    local_28.hwndTrack = *(HWND *)((int)this + 0x20);
    local_28.cbSize = 0x10;
    local_28.dwFlags = 0x12;
    local_28.dwHoverTime = 0xffffffff;
    BVar2 = TrackMouseEvent(&local_28);
    *(BOOL *)((int)this + 0xf0) = BVar2;
  }
  if ((*(int *)((int)this + 0xa4) != 0) && (*(int *)((int)this + 0x9c) != 0)) {
    ScreenToClient(*(HWND *)((int)this + 0x20),(LPPOINT)&param_2);
    iVar8 = -1;
    param_3 = param_3 + *(int *)(*(int *)((int)this + 0x9c) + 4);
    local_34 = *(int *)((int)this + 0xec);
    this_00 = *(void **)(*(int *)((int)this + 0xa4) + 4);
    local_30 = *(int *)((int)this + 0xf4);
    if ((this_00 != (void *)0x0) && (*(int *)((int)this_00 + 0x98) != 0)) {
      iVar8 = FUN_00409000(this_00,(POINT *)&param_2);
      if ((local_30 == 0) || (iVar8 == local_34)) {
        iVar3 = FUN_004091c0(iVar8,1);
      }
      else {
        iVar3 = FUN_004091c0(local_34,0);
      }
      if (iVar3 != 0) {
        FUN_0040d3f0((int)this);
      }
    }
    pIVar4 = CommonData_Get();
    if (iVar8 == 8) {
      if (pIVar4 != (IDataManager *)0x0) {
        iVar8 = (**(code **)(*(int *)pIVar4 + 0x30))();
        puVar9 = &local_34;
        if (*(int *)(iVar8 + 0x28) == 0) {
          pwVar10 = (wchar_t *)0x5;
          pCVar7 = (CModuleLanguageTrans *)
                   (**(code **)(*(int *)pIVar4 + 0x28))(puVar9,5,L"IDS_Offline");
          CModuleLanguageTrans::TranslateString(pCVar7,(uint)puVar9,pwVar10);
          uStack_c = 1;
          pCVar5 = (CServerData *)(**(code **)(*(int *)pIVar4 + 0x30))(auStack_2c);
          piVar6 = (int *)CServerData::GetServerUserName(pCVar5);
          uStack_c._0_1_ = 2;
          piVar6 = (int *)FUN_0040c1f0(&local_30,piVar6,&local_34);
          uStack_c = CONCAT31(uStack_c._1_3_,3);
          FUN_0040d650(this,*piVar6,1);
          Ordinal_1042();
          Ordinal_1042();
        }
        else {
          pCVar5 = (CServerData *)(**(code **)(*(int *)pIVar4 + 0x30))(puVar9);
          piVar6 = (int *)CServerData::GetServerUserName(pCVar5);
          uStack_c = 0;
          FUN_0040d650(this,*piVar6,1);
        }
        uStack_c = 0xffffffff;
        Ordinal_1042();
      }
    }
    else if (iVar8 == 7) {
      pwVar10 = (wchar_t *)0x5;
      piVar6 = &local_30;
      pCVar7 = (CModuleLanguageTrans *)
               (**(code **)(*(int *)pIVar4 + 0x28))(piVar6,5,L"IDS_SystemSet");
      CModuleLanguageTrans::TranslateString(pCVar7,(uint)piVar6,pwVar10);
      uStack_c = 4;
      FUN_0040d650(this,local_30,1);
      uStack_c = 0xffffffff;
      Ordinal_1042();
    }
    else {
      FUN_0040d650(this,0x44d16c,0);
    }
  }
  Ordinal_3790(uVar1);
  ExceptionList = local_14;
  return;
}

