
void __thiscall
FUN_0041df50(void *this,uint *param_1,uint param_2,int param_3,uint param_4,int param_5,
            undefined4 param_6,undefined4 param_7,uint param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = param_4 + param_2;
  uVar6 = param_5 + param_3 + (uint)CARRY4(param_4,param_2);
  uVar4 = **(uint **)((int)this + 0x20);
  if ((uVar4 != 0) && (*(uint *)((int)this + 0x38) < uVar4)) {
    *(uint *)((int)this + 0x38) = uVar4;
  }
  if ((uVar7 != *(uint *)_BADOFF_exref) || (uVar6 != *(uint *)(_BADOFF_exref + 4))) {
    if (((param_8 & 1) == 0) || (**(int **)((int)this + 0x1c) == 0)) {
      if ((((param_8 & 2) != 0) && (**(int **)((int)this + 0x20) != 0)) && (-1 < (int)uVar6)) {
        uVar4 = *(int *)((int)this + 0x38) - **(int **)((int)this + 0xc);
        iVar5 = (int)uVar4 >> 0x1f;
        if (((int)uVar6 <= iVar5) && (((int)uVar6 < iVar5 || (uVar7 <= uVar4)))) {
          iVar5 = (**(int **)((int)this + 0xc) - **(int **)((int)this + 0x20)) + uVar7;
          **(int **)((int)this + 0x30) = **(int **)((int)this + 0x30) - iVar5;
          **(int **)((int)this + 0x20) = **(int **)((int)this + 0x20) + iVar5;
          goto LAB_0041e049;
        }
      }
    }
    else if (-1 < (int)uVar6) {
      uVar4 = *(int *)((int)this + 0x38) - **(int **)((int)this + 0xc);
      iVar5 = (int)uVar4 >> 0x1f;
      if (((int)uVar6 <= iVar5) && (((int)uVar6 < iVar5 || (uVar7 <= uVar4)))) {
        iVar5 = (**(int **)((int)this + 0xc) - **(int **)((int)this + 0x1c)) + uVar7;
        **(int **)((int)this + 0x2c) = **(int **)((int)this + 0x2c) - iVar5;
        **(int **)((int)this + 0x1c) = **(int **)((int)this + 0x1c) + iVar5;
        if (((param_8 & 2) != 0) && (piVar1 = *(int **)((int)this + 0x20), *piVar1 != 0)) {
          iVar5 = **(int **)((int)this + 0x30);
          iVar2 = *piVar1;
          iVar3 = **(int **)((int)this + 0x1c);
          *piVar1 = iVar3;
          **(int **)((int)this + 0x30) = (iVar5 + iVar2) - iVar3;
        }
        goto LAB_0041e049;
      }
    }
    uVar6 = *(uint *)(_BADOFF_exref + 4);
    uVar7 = *(uint *)_BADOFF_exref;
  }
LAB_0041e049:
  *param_1 = uVar7;
  param_1[1] = uVar6;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

