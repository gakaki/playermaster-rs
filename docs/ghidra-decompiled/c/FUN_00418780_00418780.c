
int * __thiscall FUN_00418780(void *this,int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if (this != param_1) {
    puVar6 = (undefined4 *)*param_1;
    puVar4 = (undefined4 *)param_1[1];
    if (puVar6 == puVar4) {
      *(undefined4 *)((int)this + 4) = *(undefined4 *)this;
      return this;
    }
    puVar1 = *(undefined4 **)this;
    uVar2 = (int)puVar4 - (int)puVar6 >> 3;
    uVar5 = *(int *)((int)this + 4) - (int)puVar1 >> 3;
    if (uVar2 <= uVar5) {
      for (; puVar6 != puVar4; puVar6 = puVar6 + 2) {
        *puVar1 = *puVar6;
        puVar1[1] = puVar6[1];
        puVar1 = puVar1 + 2;
      }
      *(int *)((int)this + 4) = *(int *)this + (param_1[1] - *param_1 >> 3) * 8;
      return this;
    }
    if ((uint)(*(int *)((int)this + 8) - (int)puVar1 >> 3) < uVar2) {
      if (puVar1 != (undefined4 *)0x0) {
        Ordinal_1508(puVar1);
      }
      uVar3 = FUN_00419120(this,param_1[1] - *param_1 >> 3);
      if ((char)uVar3 == '\0') {
        return this;
      }
      puVar6 = *(undefined4 **)this;
      puVar4 = (undefined4 *)*param_1;
    }
    else {
      puVar4 = puVar6 + uVar5 * 2;
      FUN_00419a80(puVar6,puVar4,puVar1);
      puVar6 = *(undefined4 **)((int)this + 4);
    }
    uVar3 = FUN_0041bae0(puVar4,(undefined4 *)param_1[1],puVar6);
    *(undefined4 *)((int)this + 4) = uVar3;
  }
  return this;
}

