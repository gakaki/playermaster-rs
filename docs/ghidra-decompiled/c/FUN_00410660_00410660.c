
void FUN_00410660(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  LONG aLStack_3c [3];
  tagRECT local_1c;
  uint local_c;
  undefined1 auStack_8 [4];
  
  iVar1 = DAT_00464e48;
  local_c = DAT_0046400c ^ (uint)(auStack_8 + 4);
  if ((((*(int **)(DAT_00464e48 + 0x18) != (int *)0x0) && (*(int *)(DAT_00464e48 + 8) != 0)) &&
      (*(int *)(DAT_00464e48 + 0x10) != 0)) &&
     (((*(int *)(DAT_00464e48 + 0xc) != 0 && (*(int *)(DAT_00464e48 + 0x14) != 0)) &&
      (iVar2 = (**(code **)(**(int **)(DAT_00464e48 + 0x18) + 4))(), iVar2 != 0)))) {
    switch(*(undefined4 *)(iVar1 + 4)) {
    case 0:
      puVar3 = *(undefined4 **)(iVar1 + 8);
      break;
    case 1:
      puVar3 = *(undefined4 **)(iVar1 + 0x14);
      break;
    case 2:
      puVar3 = *(undefined4 **)(iVar1 + 0xc);
      break;
    case 3:
      puVar3 = *(undefined4 **)(iVar1 + 0x10);
      break;
    default:
      goto switchD_004106c6_default;
    }
    if (puVar3 != (undefined4 *)0x0) {
      aLStack_3c[2] = 0x4106f4;
      GetClientRect(*(HWND *)(iVar2 + 0x20),&local_1c);
      CopyRect((LPRECT)aLStack_3c,&local_1c);
      (**(code **)*puVar3)();
      switch(*(undefined4 *)(iVar1 + 4)) {
      case 0:
        (**(code **)(**(int **)(iVar1 + 0x14) + 4))();
        aLStack_3c[2] = 0x410733;
        (**(code **)(**(int **)(iVar1 + 0x10) + 4))();
        aLStack_3c[2] = 0;
        aLStack_3c[1] = 0x41073d;
        (**(code **)(**(int **)(iVar1 + 0xc) + 4))();
        aLStack_3c[1] = 1;
        aLStack_3c[0] = 0x410747;
        (**(code **)(**(int **)(iVar1 + 8) + 4))();
        aLStack_3c[2] = 0x410758;
        FUN_0041d025(local_c ^ (uint)(auStack_8 + 4));
        return;
      case 1:
        (**(code **)(**(int **)(iVar1 + 8) + 4))();
        aLStack_3c[2] = 0x4107f0;
        (**(code **)(**(int **)(iVar1 + 0xc) + 4))();
        aLStack_3c[2] = 0;
        aLStack_3c[1] = 0x4107fa;
        (**(code **)(**(int **)(iVar1 + 0x10) + 4))();
        aLStack_3c[1] = 1;
        aLStack_3c[0] = 0x410804;
        (**(code **)(**(int **)(iVar1 + 0x14) + 4))();
        break;
      case 2:
        (**(code **)(**(int **)(iVar1 + 0x14) + 4))();
        aLStack_3c[2] = 0x410772;
        (**(code **)(**(int **)(iVar1 + 0x10) + 4))();
        aLStack_3c[2] = 0;
        aLStack_3c[1] = 0x41077c;
        (**(code **)(**(int **)(iVar1 + 8) + 4))();
        aLStack_3c[1] = 1;
        aLStack_3c[0] = 0x410786;
        (**(code **)(**(int **)(iVar1 + 0xc) + 4))();
        aLStack_3c[2] = 0x410797;
        FUN_0041d025(local_c ^ (uint)(auStack_8 + 4));
        return;
      case 3:
        (**(code **)(**(int **)(iVar1 + 0x14) + 4))();
        aLStack_3c[2] = 0x4107b1;
        (**(code **)(**(int **)(iVar1 + 8) + 4))();
        aLStack_3c[2] = 0;
        aLStack_3c[1] = 0x4107bb;
        (**(code **)(**(int **)(iVar1 + 0xc) + 4))();
        aLStack_3c[1] = 1;
        aLStack_3c[0] = 0x4107c5;
        (**(code **)(**(int **)(iVar1 + 0x10) + 4))();
        aLStack_3c[2] = 0x4107d6;
        FUN_0041d025(local_c ^ (uint)(auStack_8 + 4));
        return;
      }
    }
  }
switchD_004106c6_default:
  FUN_0041d025(local_c ^ (uint)(auStack_8 + 4));
  return;
}

