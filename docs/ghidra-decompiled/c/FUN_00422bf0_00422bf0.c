
void __thiscall
FUN_00422bf0(void *this,undefined4 *param_1,undefined4 *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool local_8;
  
  iVar2 = param_3;
  puVar6 = *(undefined4 **)this;
  local_8 = true;
  puVar7 = (undefined4 *)puVar6[1];
  if (*(char *)((int)puVar6[1] + 0xd) == '\0') {
    do {
      puVar6 = puVar7;
      if ((char)param_2 == '\0') {
        iVar5 = *(int *)(iVar2 + 4);
        if (((iVar5 == 0) || (*(int *)(iVar5 + 4) == 0)) &&
           ((puVar6[5] == 0 || (*(int *)(puVar6[5] + 4) == 0)))) {
          iVar5 = 0;
        }
        else if ((iVar5 == 0) || (*(int *)(iVar5 + 4) == 0)) {
          iVar5 = -1;
        }
        else {
          iVar1 = puVar6[5];
          if ((iVar1 == 0) || (*(int *)(iVar1 + 4) == 0)) {
            iVar5 = 1;
          }
          else {
            iVar5 = cef_string_utf16_cmp(iVar5,iVar1);
          }
        }
        local_8 = iVar5 < 0;
      }
      else {
        iVar5 = puVar6[5];
        if (((iVar5 == 0) || (*(int *)(iVar5 + 4) == 0)) &&
           ((*(int *)(iVar2 + 4) == 0 || (*(int *)(*(int *)(iVar2 + 4) + 4) == 0)))) {
          local_8 = true;
        }
        else if ((iVar5 == 0) || (*(int *)(iVar5 + 4) == 0)) {
          local_8 = false;
        }
        else {
          iVar1 = *(int *)(iVar2 + 4);
          if ((iVar1 == 0) || (*(int *)(iVar1 + 4) == 0)) {
            local_8 = true;
          }
          else {
            iVar5 = cef_string_utf16_cmp(iVar5,iVar1);
            local_8 = -1 < iVar5;
          }
        }
      }
      if (local_8 == false) {
        puVar7 = (undefined4 *)puVar6[2];
      }
      else {
        puVar7 = (undefined4 *)*puVar6;
      }
    } while (*(char *)((int)puVar7 + 0xd) == '\0');
  }
  param_2 = puVar6;
  if (local_8 != false) {
    if (puVar6 == (undefined4 *)**(int **)this) {
      local_8 = true;
      goto LAB_00422cfd;
    }
    FUN_00422e80((int *)&param_2);
  }
  puVar7 = param_2;
  bVar4 = FUN_00422ee0(param_2 + 4,iVar2);
  piVar3 = param_4;
  if (!bVar4) {
    FUN_004201c0(param_4 + 4);
    Ordinal_1508(piVar3);
    *param_1 = puVar7;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
LAB_00422cfd:
  puVar6 = (undefined4 *)FUN_004228c0(this,&param_2,local_8,puVar6,iVar2,param_4);
  *param_1 = *puVar6;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

