
int * __thiscall FUN_00417dc0(void *this,int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446f70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (this != param_1) {
    iVar3 = *param_1;
    if (iVar3 == param_1[1]) {
      FUN_0041b260(*(int **)this,*(int **)((int)this + 4));
      iVar3 = *(int *)this;
    }
    else {
      uVar7 = (param_1[1] - iVar3) / 0x30;
      uVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0x30;
      if (uVar1 < uVar7) {
        piVar2 = *(int **)this;
        iVar3 = *(int *)((int)this + 8) - (int)piVar2;
        if ((uint)(iVar3 / 0x30) < uVar7) {
          if (piVar2 != (int *)0x0) {
            FUN_0041b260(piVar2,*(int **)((int)this + 4));
            Ordinal_1508(*(undefined4 *)this,iVar3,uVar7);
          }
          uVar4 = FUN_00418d20(this,(param_1[1] - *param_1) / 0x30);
          if ((char)uVar4 == '\0') {
            ExceptionList = local_10;
            return this;
          }
          local_8 = 0;
          iVar3 = param_1[1];
          iVar6 = *(int *)this;
          iVar5 = *param_1;
        }
        else {
          iVar5 = uVar1 * 0x30 + *param_1;
          FUN_0041aa70(*param_1,iVar5,*(int *)this);
          iVar3 = param_1[1];
          iVar6 = *(int *)((int)this + 4);
        }
        iVar3 = FUN_0041b750(iVar5,iVar3,iVar6);
      }
      else {
        piVar2 = (int *)FUN_0041aa70(iVar3,param_1[1],*(int *)this);
        FUN_0041b260(piVar2,*(int **)((int)this + 4));
        iVar3 = ((param_1[1] - *param_1) / 0x30) * 0x30 + *(int *)this;
      }
    }
    *(int *)((int)this + 4) = iVar3;
  }
  ExceptionList = local_10;
  return this;
}

