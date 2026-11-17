
int * __thiscall FUN_00418350(void *this,int *param_1)

{
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446ff0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (this != param_1) {
    puVar6 = (undefined4 *)*param_1;
    if (puVar6 == (undefined4 *)param_1[1]) {
      FUN_0041b370(*(int **)this,*(int **)((int)this + 4));
      pvVar3 = *(void **)this;
    }
    else {
      uVar7 = (param_1[1] - (int)puVar6) / 0x2c;
      uVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0x2c;
      if (uVar1 < uVar7) {
        piVar2 = *(int **)this;
        iVar5 = *(int *)((int)this + 8) - (int)piVar2;
        if ((uint)(iVar5 / 0x2c) < uVar7) {
          if (piVar2 != (int *)0x0) {
            FUN_0041b370(piVar2,*(int **)((int)this + 4));
            Ordinal_1508(*(undefined4 *)this,iVar5,uVar7);
          }
          uVar4 = FUN_00418e70(this,(param_1[1] - *param_1) / 0x2c);
          if ((char)uVar4 == '\0') {
            ExceptionList = local_10;
            return this;
          }
          local_8 = 0;
          iVar5 = param_1[1];
          pvVar3 = *(void **)this;
          puVar6 = (undefined4 *)*param_1;
        }
        else {
          puVar6 = (undefined4 *)*param_1 + uVar1 * 0xb;
          FUN_0041b000((undefined4 *)*param_1,puVar6,*(int *)this);
          iVar5 = param_1[1];
          pvVar3 = *(void **)((int)this + 4);
        }
        pvVar3 = FUN_0041b980((int)puVar6,iVar5,pvVar3);
      }
      else {
        piVar2 = (int *)FUN_0041b000(puVar6,(undefined4 *)param_1[1],*(int *)this);
        FUN_0041b370(piVar2,*(int **)((int)this + 4));
        pvVar3 = (void *)(((param_1[1] - *param_1) / 0x2c) * 0x2c + *(int *)this);
      }
    }
    *(void **)((int)this + 4) = pvVar3;
  }
  ExceptionList = local_10;
  return this;
}

