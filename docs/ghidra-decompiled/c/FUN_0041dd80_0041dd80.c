
void __thiscall
FUN_0041dd80(void *this,uint *param_1,uint param_2,uint param_3,int param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  uVar3 = **(uint **)((int)this + 0x20);
  if ((uVar3 != 0) && (*(uint *)((int)this + 0x38) < uVar3)) {
    *(uint *)((int)this + 0x38) = uVar3;
  }
  if (((param_5 & 1) == 0) || (iVar5 = **(int **)((int)this + 0x1c), iVar5 == 0)) {
    if (((param_5 & 2) == 0) || (uVar3 = **(uint **)((int)this + 0x20), uVar3 == 0)) {
      if (param_2 == 0 && param_3 == 0) goto LAB_0041df1b;
    }
    else {
      if (param_4 == 2) {
        uVar4 = *(int *)((int)this + 0x38) - **(int **)((int)this + 0xc);
        bVar7 = CARRY4(param_2,uVar4);
        param_2 = param_2 + uVar4;
        param_3 = param_3 + ((int)uVar4 >> 0x1f) + (uint)bVar7;
      }
      else if (param_4 == 1) {
        uVar4 = uVar3 - **(int **)((int)this + 0xc);
        bVar7 = CARRY4(param_2,uVar4);
        param_2 = param_2 + uVar4;
        param_3 = param_3 + ((int)uVar4 >> 0x1f) + (uint)bVar7;
      }
      else if (param_4 != 0) {
        param_2 = *(uint *)_BADOFF_exref;
        param_3 = *(uint *)(_BADOFF_exref + 4);
      }
      if (-1 < (int)param_3) {
        uVar4 = *(int *)((int)this + 0x38) - **(int **)((int)this + 0xc);
        iVar5 = (int)uVar4 >> 0x1f;
        if (((int)param_3 <= iVar5) && (((int)param_3 < iVar5 || (param_2 <= uVar4)))) {
          iVar5 = (**(int **)((int)this + 0xc) - uVar3) + param_2;
          **(int **)((int)this + 0x30) = **(int **)((int)this + 0x30) - iVar5;
          **(int **)((int)this + 0x20) = **(int **)((int)this + 0x20) + iVar5;
          goto LAB_0041df1b;
        }
      }
    }
  }
  else {
    if (param_4 == 2) {
      uVar3 = *(int *)((int)this + 0x38) - **(int **)((int)this + 0xc);
      bVar7 = CARRY4(param_2,uVar3);
      param_2 = param_2 + uVar3;
      param_3 = param_3 + ((int)uVar3 >> 0x1f) + (uint)bVar7;
    }
    else if (param_4 == 1) {
      if ((param_5 & 2) != 0) goto LAB_0041ddf5;
      uVar3 = iVar5 - **(int **)((int)this + 0xc);
      bVar7 = CARRY4(param_2,uVar3);
      param_2 = param_2 + uVar3;
      param_3 = param_3 + ((int)uVar3 >> 0x1f) + (uint)bVar7;
    }
    else if (param_4 != 0) {
LAB_0041ddf5:
      param_2 = *(uint *)_BADOFF_exref;
      param_3 = *(uint *)(_BADOFF_exref + 4);
    }
    if (-1 < (int)param_3) {
      uVar3 = *(int *)((int)this + 0x38) - **(int **)((int)this + 0xc);
      iVar6 = (int)uVar3 >> 0x1f;
      if (((int)param_3 <= iVar6) && (((int)param_3 < iVar6 || (param_2 <= uVar3)))) {
        iVar5 = (**(int **)((int)this + 0xc) - iVar5) + param_2;
        **(int **)((int)this + 0x2c) = **(int **)((int)this + 0x2c) - iVar5;
        **(int **)((int)this + 0x1c) = **(int **)((int)this + 0x1c) + iVar5;
        if (((param_5 & 2) != 0) && (piVar1 = *(int **)((int)this + 0x20), *piVar1 != 0)) {
          iVar5 = **(int **)((int)this + 0x30);
          iVar6 = *piVar1;
          iVar2 = **(int **)((int)this + 0x1c);
          *piVar1 = iVar2;
          **(int **)((int)this + 0x30) = (iVar5 + iVar6) - iVar2;
        }
        goto LAB_0041df1b;
      }
    }
  }
  param_2 = *(uint *)_BADOFF_exref;
  param_3 = *(uint *)(_BADOFF_exref + 4);
LAB_0041df1b:
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

