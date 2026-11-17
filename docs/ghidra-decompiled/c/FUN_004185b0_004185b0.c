
int * __thiscall FUN_004185b0(void *this,int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00447030;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (this != param_1) {
    if (*param_1 == param_1[1]) {
      FUN_00418fc0(this);
    }
    else {
      iVar3 = *(int *)this;
      uVar1 = (param_1[1] - *param_1) / 0xc;
      uVar2 = (*(int *)((int)this + 4) - iVar3) / 0xc;
      if (uVar2 < uVar1) {
        if ((uint)((*(int *)((int)this + 8) - iVar3) / 0xc) < uVar1) {
          if (iVar3 != 0) {
            FUN_00419080(iVar3,*(int *)((int)this + 4));
            Ordinal_1508(*(undefined4 *)this);
          }
          uVar4 = FUN_00419010(this,(param_1[1] - *param_1) / 0xc);
          if ((char)uVar4 == '\0') {
            ExceptionList = local_10;
            return this;
          }
          local_8 = 0;
          iVar5 = param_1[1];
          iVar6 = *(int *)this;
          iVar3 = *param_1;
        }
        else {
          iVar3 = *param_1 + uVar2 * 0xc;
          FUN_0041b070(*param_1,iVar3,*(int *)this);
          iVar5 = param_1[1];
          iVar6 = *(int *)((int)this + 4);
        }
        iVar3 = FUN_0041ba20(iVar3,iVar5,iVar6);
      }
      else {
        iVar3 = FUN_0041b070(*param_1,param_1[1],iVar3);
        FUN_00419080(iVar3,*(int *)((int)this + 4));
        iVar3 = *(int *)this + ((param_1[1] - *param_1) / 0xc) * 0xc;
      }
      *(int *)((int)this + 4) = iVar3;
    }
  }
  ExceptionList = local_10;
  return this;
}

