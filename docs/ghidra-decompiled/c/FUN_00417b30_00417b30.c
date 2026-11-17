
int * __thiscall FUN_00417b30(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446f30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (this != param_1) {
    if (*param_1 == param_1[1]) {
      FUN_0041b130(*(int *)this,*(int *)((int)this + 4));
      pvVar3 = *(void **)this;
    }
    else {
      iVar2 = *(int *)this;
      uVar6 = (param_1[1] - *param_1) / 0x48;
      uVar1 = (*(int *)((int)this + 4) - iVar2) / 0x48;
      if (uVar1 < uVar6) {
        iVar5 = *(int *)((int)this + 8) - iVar2;
        if ((uint)(iVar5 / 0x48) < uVar6) {
          if (iVar2 != 0) {
            FUN_0041b130(iVar2,*(int *)((int)this + 4));
            Ordinal_1508(*(undefined4 *)this,iVar5,uVar6);
          }
          uVar4 = FUN_00418b50(this,(param_1[1] - *param_1) / 0x48);
          if ((char)uVar4 == '\0') {
            ExceptionList = local_10;
            return this;
          }
          local_8 = 0;
          iVar5 = param_1[1];
          pvVar3 = *(void **)this;
          iVar2 = *param_1;
        }
        else {
          iVar2 = *param_1 + uVar1 * 0x48;
          FUN_0041a9b0(*param_1,iVar2,*(int *)this);
          iVar5 = param_1[1];
          pvVar3 = *(void **)((int)this + 4);
        }
        pvVar3 = FUN_0041b6b0(iVar2,iVar5,pvVar3);
      }
      else {
        iVar2 = FUN_0041a9b0(*param_1,param_1[1],iVar2);
        FUN_0041b130(iVar2,*(int *)((int)this + 4));
        pvVar3 = (void *)(*(int *)this + ((param_1[1] - *param_1) / 0x48) * 0x48);
      }
    }
    *(void **)((int)this + 4) = pvVar3;
  }
  ExceptionList = local_10;
  return this;
}

