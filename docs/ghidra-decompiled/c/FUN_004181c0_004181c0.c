
int * __thiscall FUN_004181c0(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  if (this != param_1) {
    puVar9 = (undefined4 *)param_1[1];
    puVar5 = (undefined4 *)*param_1;
    if (puVar5 == puVar9) {
      *(undefined4 *)((int)this + 4) = *(undefined4 *)this;
      return this;
    }
    uVar7 = (int)puVar9 - (int)puVar5 >> 4;
    puVar1 = *(undefined4 **)this;
    uVar8 = *(int *)((int)this + 4) - (int)puVar1 >> 4;
    if (uVar7 <= uVar8) {
      for (; puVar5 != puVar9; puVar5 = puVar5 + 4) {
        uVar4 = puVar5[1];
        uVar2 = puVar5[2];
        uVar3 = puVar5[3];
        *puVar1 = *puVar5;
        puVar1[1] = uVar4;
        puVar1[2] = uVar2;
        puVar1[3] = uVar3;
        puVar1 = puVar1 + 4;
      }
      *(uint *)((int)this + 4) = (param_1[1] - *param_1 & 0xfffffff0U) + *(int *)this;
      return this;
    }
    if ((uint)(*(int *)((int)this + 8) - (int)puVar1 >> 4) < uVar7) {
      if (puVar1 != (undefined4 *)0x0) {
        Ordinal_1508(puVar1);
      }
      uVar7 = FUN_00418e00(this,param_1[1] - *param_1 >> 4);
      if ((char)uVar7 == '\0') {
        return this;
      }
      puVar9 = *(undefined4 **)this;
      puVar6 = (undefined4 *)*param_1;
    }
    else {
      puVar6 = puVar5 + uVar8 * 4;
      FUN_00419a50(puVar5,puVar6,puVar1);
      puVar9 = *(undefined4 **)((int)this + 4);
    }
    uVar4 = FUN_0041b950(puVar6,(undefined4 *)param_1[1],puVar9);
    *(undefined4 *)((int)this + 4) = uVar4;
  }
  return this;
}

