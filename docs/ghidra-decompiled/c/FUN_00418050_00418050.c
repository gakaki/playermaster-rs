
int * __thiscall FUN_00418050(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446fb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (this != param_1) {
    iVar2 = *param_1;
    if (iVar2 == param_1[1]) {
      FUN_0041b2e0(*(int **)this,*(int **)((int)this + 4));
      iVar2 = *(int *)this;
    }
    else {
      iVar6 = *(int *)this;
      uVar3 = param_1[1] - iVar2 >> 5;
      uVar4 = *(int *)((int)this + 4) - iVar6 >> 5;
      if (uVar4 < uVar3) {
        if ((uint)(*(int *)((int)this + 8) - iVar6 >> 5) < uVar3) {
          if (iVar6 != 0) {
            piVar1 = param_1;
            FUN_0041b2e0(*(int **)this,*(int **)((int)this + 4));
            Ordinal_1508(*(undefined4 *)this,uVar3,piVar1);
          }
          uVar3 = FUN_00418d90(this,param_1[1] - *param_1 >> 5);
          if ((char)uVar3 == '\0') {
            ExceptionList = local_10;
            return this;
          }
          local_8 = 0;
          iVar2 = param_1[1];
          iVar6 = *(int *)this;
          iVar5 = *param_1;
        }
        else {
          iVar5 = uVar4 * 0x20 + *param_1;
          FUN_0041ad70(*param_1,iVar5,iVar6);
          iVar2 = param_1[1];
          iVar6 = *(int *)((int)this + 4);
        }
        iVar2 = FUN_0041b850(iVar5,iVar2,iVar6);
      }
      else {
        piVar1 = (int *)FUN_0041ad70(iVar2,param_1[1],iVar6);
        FUN_0041b2e0(piVar1,*(int **)((int)this + 4));
        iVar2 = (param_1[1] - *param_1 & 0xffffffe0U) + *(int *)this;
      }
    }
    *(int *)((int)this + 4) = iVar2;
  }
  ExceptionList = local_10;
  return this;
}

