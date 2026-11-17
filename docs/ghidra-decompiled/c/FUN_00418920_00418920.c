
int * __thiscall FUN_00418920(void *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00447070;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (this != param_1) {
    puVar4 = (undefined4 *)*param_1;
    if (puVar4 == (undefined4 *)param_1[1]) {
      FUN_00419190(this);
    }
    else {
      iVar1 = *(int *)this;
      uVar2 = param_1[1] - (int)puVar4 >> 5;
      uVar3 = *(int *)((int)this + 4) - iVar1 >> 5;
      if (uVar3 < uVar2) {
        if ((uint)(*(int *)((int)this + 8) - iVar1 >> 5) < uVar2) {
          if (iVar1 != 0) {
            FUN_004191d0(iVar1,*(int *)((int)this + 4));
            Ordinal_1508(*(undefined4 *)this);
          }
          uVar2 = FUN_00418d90(this,param_1[1] - *param_1 >> 5);
          if ((char)uVar2 == '\0') {
            ExceptionList = local_10;
            return this;
          }
          local_8 = 0;
          iVar1 = param_1[1];
          iVar5 = *(int *)this;
          puVar4 = (undefined4 *)*param_1;
        }
        else {
          puVar4 = (undefined4 *)(uVar3 * 0x20 + *param_1);
          FUN_0041b0d0((undefined4 *)*param_1,puVar4,iVar1);
          iVar1 = param_1[1];
          iVar5 = *(int *)((int)this + 4);
        }
        iVar1 = FUN_0041bb10((int)puVar4,iVar1,iVar5);
      }
      else {
        iVar1 = FUN_0041b0d0(puVar4,(undefined4 *)param_1[1],iVar1);
        FUN_004191d0(iVar1,*(int *)((int)this + 4));
        iVar1 = (param_1[1] - *param_1 & 0xffffffe0U) + *(int *)this;
      }
      *(int *)((int)this + 4) = iVar1;
    }
  }
  ExceptionList = local_10;
  return this;
}

