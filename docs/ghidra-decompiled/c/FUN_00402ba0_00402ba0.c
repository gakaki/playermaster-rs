
char * __fastcall FUN_00402ba0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  uint local_18;
  uint local_14;
  uint local_10;
  char *local_c;
  char local_6;
  char local_5;
  
  local_14 = *(uint *)(param_1 + 0x6af94);
  uVar2 = *(uint *)(param_1 + 0x6af84);
  local_c = *(char **)(param_1 + 0x6af80);
  pcVar3 = (char *)(param_1 + 0x1af70 + uVar2);
  if (uVar2 < 0x7efb) {
    local_18 = 0;
  }
  else {
    local_18 = uVar2 - 0x7efa;
  }
  pcVar5 = (char *)(param_1 + 0x1b072 + uVar2);
  local_5 = (local_c + -1)[(int)pcVar3];
  local_6 = local_c[(int)pcVar3];
  if (*(char **)(param_1 + 0x6af9c) <= local_c) {
    local_14 = *(uint *)(param_1 + 0x6af94) >> 2;
  }
  local_10 = param_2;
  if (*(int *)(param_1 + 0x6af70) - 0x106U < uVar2) {
    *(char **)(param_1 + 0x6afa4) = "insufficient lookahead";
  }
  do {
    if (*(uint *)(param_1 + 0x6af84) <= local_10) {
      *(char **)(param_1 + 0x6afa4) = "no future";
    }
    iVar1 = param_1 + local_10;
    if ((((local_c[iVar1 + 0x1af70] == local_6) && (local_c[iVar1 + 0x1af6f] == local_5)) &&
        (*(char *)(iVar1 + 0x1af70) == *pcVar3)) && (*(char *)(iVar1 + 0x1af71) == pcVar3[1])) {
      pcVar6 = (char *)(iVar1 + 0x1af72);
      pcVar3 = pcVar3 + 2;
      while (((((pcVar4 = pcVar3 + 1, pcVar3[1] == pcVar6[1] &&
                (pcVar4 = pcVar3 + 2, pcVar3[2] == pcVar6[2])) &&
               ((pcVar4 = pcVar3 + 3, pcVar3[3] == pcVar6[3] &&
                ((pcVar4 = pcVar3 + 4, pcVar3[4] == pcVar6[4] &&
                 (pcVar4 = pcVar3 + 5, pcVar3[5] == pcVar6[5])))))) &&
              (pcVar4 = pcVar3 + 6, pcVar3[6] == pcVar6[6])) &&
             (pcVar4 = pcVar3 + 7, pcVar3[7] == pcVar6[7]))) {
        pcVar4 = pcVar3 + 8;
        pcVar6 = pcVar6 + 8;
        if ((pcVar3[8] != *pcVar6) || (pcVar3 = pcVar4, pcVar5 <= pcVar4)) break;
      }
      if ((char *)(*(int *)(param_1 + 0x6af70) + 0x1af6f + param_1) < pcVar4) {
        *(char **)(param_1 + 0x6afa4) = "wild scan";
      }
      pcVar6 = pcVar4 + (0x102 - (int)pcVar5);
      pcVar3 = pcVar5 + -0x102;
      if ((int)local_c < (int)pcVar6) {
        *(uint *)(param_1 + 0x6af88) = local_10;
        if (*(int *)(param_1 + 0x6afa0) <= (int)pcVar6) {
          return pcVar6;
        }
        local_5 = pcVar3[(int)(pcVar4 + (0x101 - (int)pcVar5))];
        local_6 = pcVar6[(int)pcVar3];
        local_c = pcVar6;
      }
    }
    local_10 = *(uint *)(param_1 + 0x2af70 + (local_10 & 0x7fff) * 4);
    if (local_10 <= local_18) {
      return local_c;
    }
    local_14 = local_14 - 1;
    if (local_14 == 0) {
      return local_c;
    }
  } while( true );
}

