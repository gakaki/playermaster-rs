
void __thiscall FUN_0043adf0(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  uVar2 = *(uint *)((int)this + 4);
  if ((param_1 < uVar2) && (uVar3 = *(uint *)this, uVar3 <= param_1)) {
    if (uVar2 == *(uint *)((int)this + 8)) {
      FUN_0043ab10(this,1);
    }
    iVar1 = *(int *)this + ((int)(param_1 - uVar3) / 0x1c) * 0x1c;
    puVar8 = *(undefined4 **)((int)this + 4);
    if (puVar8 == (undefined4 *)0x0) goto LAB_0043aeb5;
    *puVar8 = &PTR_FUN_0044bd28;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    if (iVar1 == 0) {
LAB_0043ae9e:
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = (undefined4 *)(iVar1 + 4);
    }
  }
  else {
    if (uVar2 == *(uint *)((int)this + 8)) {
      FUN_0043ab10(this,1);
    }
    puVar8 = *(undefined4 **)((int)this + 4);
    if (puVar8 == (undefined4 *)0x0) goto LAB_0043aeb5;
    *puVar8 = &PTR_FUN_0044bd28;
    puVar8[1] = 0;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    if (param_1 == 0) goto LAB_0043ae9e;
    puVar7 = (undefined4 *)(param_1 + 4);
  }
  uVar4 = puVar7[1];
  uVar5 = puVar7[2];
  uVar6 = puVar7[3];
  puVar8[1] = *puVar7;
  puVar8[2] = uVar4;
  puVar8[3] = uVar5;
  puVar8[4] = uVar6;
  puVar8[5] = puVar7[4];
  *puVar8 = &PTR_FUN_0044bd28;
LAB_0043aeb5:
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x1c;
  return;
}

