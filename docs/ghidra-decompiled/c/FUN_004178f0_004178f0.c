
int * __thiscall FUN_004178f0(void *this,int *param_1)

{
  uint uVar1;
  void **ppvVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446ef0;
  local_10 = ExceptionList;
  if (this != param_1) {
    iVar3 = param_1[1];
    iVar6 = *param_1;
    iVar7 = *(int *)this;
    if (iVar6 == iVar3) {
      iVar3 = *(int *)((int)this + 4);
      ppvVar2 = &local_10;
      for (; ExceptionList = ppvVar2, iVar7 != iVar3; iVar7 = iVar7 + 4) {
        Ordinal_1042();
        ppvVar2 = ExceptionList;
      }
      iVar3 = *(int *)this;
    }
    else {
      uVar1 = *(int *)((int)this + 4) - iVar7 >> 2;
      uVar5 = iVar3 - iVar6 >> 2;
      ppvVar2 = &local_10;
      if (uVar1 < uVar5) {
        ExceptionList = &local_10;
        if ((uint)(*(int *)((int)this + 8) - iVar7 >> 2) < uVar5) {
          if (iVar7 != 0) {
            FUN_00418ad0(iVar7,*(int *)((int)this + 4));
            Ordinal_1508(*(undefined4 *)this);
          }
          uVar4 = FUN_00418a60(this,param_1[1] - *param_1 >> 2);
          if ((char)uVar4 == '\0') {
            ExceptionList = local_10;
            return this;
          }
          local_8 = 0;
          iVar3 = FUN_0041b610(*param_1,param_1[1],*(int *)this);
        }
        else {
          iVar3 = iVar6 + uVar1 * 4;
          FUN_00419a20(iVar6,iVar3,iVar7);
          iVar3 = FUN_0041b610(iVar3,param_1[1],*(int *)((int)this + 4));
        }
      }
      else {
        for (; ExceptionList = ppvVar2, iVar6 != iVar3; iVar6 = iVar6 + 4) {
          Ordinal_1518(iVar6);
          iVar7 = iVar7 + 4;
          ppvVar2 = ExceptionList;
        }
        iVar3 = *(int *)((int)this + 4);
        for (; iVar7 != iVar3; iVar7 = iVar7 + 4) {
          Ordinal_1042();
        }
        iVar3 = *(int *)this + (param_1[1] - *param_1 >> 2) * 4;
      }
    }
    *(int *)((int)this + 4) = iVar3;
  }
  ExceptionList = local_10;
  return this;
}

