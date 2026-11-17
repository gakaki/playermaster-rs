
void __thiscall FUN_004335f0(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      FUN_00433570(this,1);
    }
    puVar3 = *(undefined4 **)((int)this + 4);
    iVar4 = (param_1 - uVar2 & 0xfffffff0) + *(int *)this;
    if (puVar3 == (undefined4 *)0x0) goto LAB_00433687;
    *puVar3 = &PTR_FUN_0044bd28;
    *(undefined8 *)(puVar3 + 1) = 0;
    puVar3[3] = 0;
    if (iVar4 == 0) {
LAB_00433674:
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)(iVar4 + 4);
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      FUN_00433570(this,1);
    }
    puVar3 = *(undefined4 **)((int)this + 4);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00433687;
    *puVar3 = &PTR_FUN_0044bd28;
    *(undefined8 *)(puVar3 + 1) = 0;
    puVar3[3] = 0;
    if (param_1 == 0) goto LAB_00433674;
    puVar5 = (undefined4 *)(param_1 + 4);
  }
  puVar3[1] = *puVar5;
  puVar3[2] = puVar5[1];
  *puVar3 = &PTR_FUN_0044bd28;
LAB_00433687:
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x10;
  return;
}

