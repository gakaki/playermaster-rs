
void __thiscall FUN_00422ad0(void *this,undefined4 *param_1,char param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool local_8;
  
  iVar2 = param_3;
  local_8 = true;
  puVar4 = *(undefined4 **)this;
  puVar5 = (undefined4 *)puVar4[1];
  if (*(char *)((int)puVar4[1] + 0xd) == '\0') {
    do {
      puVar4 = puVar5;
      if (param_2 == '\0') {
        iVar3 = *(int *)(iVar2 + 4);
        if (((iVar3 == 0) || (*(int *)(iVar3 + 4) == 0)) &&
           ((puVar4[5] == 0 || (*(int *)(puVar4[5] + 4) == 0)))) {
          iVar3 = 0;
        }
        else if ((iVar3 == 0) || (*(int *)(iVar3 + 4) == 0)) {
          iVar3 = -1;
        }
        else {
          iVar1 = puVar4[5];
          if ((iVar1 == 0) || (*(int *)(iVar1 + 4) == 0)) {
            iVar3 = 1;
          }
          else {
            iVar3 = cef_string_utf16_cmp(iVar3,iVar1);
          }
        }
        local_8 = iVar3 < 0;
      }
      else {
        iVar3 = puVar4[5];
        if (((iVar3 == 0) || (*(int *)(iVar3 + 4) == 0)) &&
           ((*(int *)(iVar2 + 4) == 0 || (*(int *)(*(int *)(iVar2 + 4) + 4) == 0)))) {
          local_8 = true;
        }
        else if ((iVar3 == 0) || (*(int *)(iVar3 + 4) == 0)) {
          local_8 = false;
        }
        else {
          iVar1 = *(int *)(iVar2 + 4);
          if ((iVar1 == 0) || (*(int *)(iVar1 + 4) == 0)) {
            local_8 = true;
          }
          else {
            iVar3 = cef_string_utf16_cmp(iVar3,iVar1);
            local_8 = -1 < iVar3;
          }
        }
      }
      if (local_8 == false) {
        puVar5 = (undefined4 *)puVar4[2];
      }
      else {
        puVar5 = (undefined4 *)*puVar4;
      }
    } while (*(char *)((int)puVar5 + 0xd) == '\0');
  }
  puVar4 = (undefined4 *)FUN_004228c0(this,(undefined4 *)&param_2,local_8,puVar4,iVar2,param_4);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

