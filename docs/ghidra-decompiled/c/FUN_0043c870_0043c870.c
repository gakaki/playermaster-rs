
void __thiscall FUN_0043c870(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar2 = *(uint *)((int)this + 4);
  if ((param_1 < uVar2) && (uVar3 = *(uint *)this, uVar3 <= param_1)) {
    if (uVar2 == *(uint *)((int)this + 8)) {
      FUN_0043c7c0(this,1);
    }
    iVar1 = *(int *)this + ((int)(param_1 - uVar3) / 0x18) * 0x18;
    puVar4 = *(undefined4 **)((int)this + 4);
    if (puVar4 == (undefined4 *)0x0) goto LAB_0043c926;
    *puVar4 = &PTR_FUN_0044bd28;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    if (iVar1 == 0) {
      uVar6 = uRam00000000;
      uVar7 = uRam00000004;
      uVar8 = uRam00000008;
      uVar9 = uRam0000000c;
    }
    else {
      uVar6 = *(undefined4 *)(iVar1 + 4);
      uVar7 = *(undefined4 *)(iVar1 + 8);
      uVar8 = *(undefined4 *)(iVar1 + 0xc);
      uVar9 = *(undefined4 *)(iVar1 + 0x10);
    }
  }
  else {
    if (uVar2 == *(uint *)((int)this + 8)) {
      FUN_0043c7c0(this,1);
    }
    puVar4 = *(undefined4 **)((int)this + 4);
    if (puVar4 == (undefined4 *)0x0) goto LAB_0043c926;
    *puVar4 = &PTR_FUN_0044bd28;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    if (param_1 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)(param_1 + 4);
    }
    uVar6 = *puVar5;
    uVar7 = puVar5[1];
    uVar8 = puVar5[2];
    uVar9 = puVar5[3];
  }
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  puVar4[4] = uVar9;
  *puVar4 = &PTR_FUN_0044bd28;
LAB_0043c926:
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
  return;
}

