
void __fastcall FUN_00402d60(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  while( true ) {
    uVar4 = (*(int *)(param_1 + 0x6af70) - *(uint *)(param_1 + 0x6af84)) -
            *(int *)(param_1 + 0x6af90);
    if (uVar4 == 0xffffffff) {
      uVar4 = 0xfffffffe;
    }
    else if ((0xfef9 < *(uint *)(param_1 + 0x6af84)) && (*(int *)(param_1 + 0x6af78) != 0)) {
      memcpy((void *)(param_1 + 0x1af70),(void *)(param_1 + 0x22f70),0x8000);
      *(int *)(param_1 + 0x6af88) = *(int *)(param_1 + 0x6af88) + -0x8000;
      puVar1 = (uint *)(param_1 + 0x4af70);
      *(int *)(param_1 + 0x6af84) = *(int *)(param_1 + 0x6af84) + -0x8000;
      *(int *)(param_1 + 0x6af74) = *(int *)(param_1 + 0x6af74) + -0x8000;
      iVar2 = 0x8000;
      do {
        if (*puVar1 < 0x8000) {
          uVar3 = 0;
        }
        else {
          uVar3 = *puVar1 - 0x8000;
        }
        *puVar1 = uVar3;
        puVar1 = puVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      puVar1 = (uint *)(param_1 + 0x2af70);
      iVar2 = 0x8000;
      do {
        if (*puVar1 < 0x8000) {
          uVar3 = 0;
        }
        else {
          uVar3 = *puVar1 - 0x8000;
        }
        *puVar1 = uVar3;
        puVar1 = puVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      uVar4 = uVar4 + 0x8000;
    }
    if (*(int *)(param_1 + 0x6af8c) != 0) break;
    if (uVar4 < 2) {
      *(char **)(param_1 + 0x6afa4) = "more < 2";
    }
    iVar2 = (**(code **)(param_1 + 0xc))
                      (param_1,*(int *)(param_1 + 0x6af90) + 0x1af70 +
                               *(int *)(param_1 + 0x6af84) + param_1,uVar4);
    if ((iVar2 == 0) || (iVar2 == -1)) {
      *(undefined4 *)(param_1 + 0x6af8c) = 1;
    }
    else {
      *(int *)(param_1 + 0x6af90) = *(int *)(param_1 + 0x6af90) + iVar2;
    }
    if (0x105 < *(uint *)(param_1 + 0x6af90)) {
      return;
    }
    if (*(int *)(param_1 + 0x6af8c) != 0) {
      return;
    }
  }
  return;
}

