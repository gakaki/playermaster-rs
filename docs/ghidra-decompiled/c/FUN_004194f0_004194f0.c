
void __thiscall FUN_004194f0(void *this,undefined4 *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  piVar4 = param_2;
  FUN_004198b0((int *)&param_2);
  piVar6 = (int *)*piVar4;
  if (*(char *)((int)piVar6 + 0xd) == '\0') {
    if (*(char *)(piVar4[2] + 0xd) == '\0') {
      piVar8 = (int *)param_2[2];
      if (param_2 != piVar4) {
        piVar6[1] = (int)param_2;
        *param_2 = *piVar4;
        if (param_2 == (int *)piVar4[2]) {
          piVar6 = param_2;
        }
        else {
          piVar6 = (int *)param_2[1];
          if (*(char *)((int)piVar8 + 0xd) == '\0') {
            piVar8[1] = (int)piVar6;
          }
          *piVar6 = (int)piVar8;
          param_2[2] = piVar4[2];
          *(int **)(piVar4[2] + 4) = param_2;
        }
        if (*(int **)(*(int *)this + 4) == piVar4) {
          *(int **)(*(int *)this + 4) = param_2;
        }
        else {
          piVar5 = (int *)piVar4[1];
          if ((int *)*piVar5 == piVar4) {
            *piVar5 = (int)param_2;
          }
          else {
            piVar5[2] = (int)param_2;
          }
        }
        param_2[1] = piVar4[1];
        iVar3 = param_2[3];
        *(char *)(param_2 + 3) = (char)piVar4[3];
        *(char *)(piVar4 + 3) = (char)iVar3;
        goto LAB_00419615;
      }
    }
    else {
      piVar8 = piVar6;
    }
  }
  else {
    piVar8 = (int *)piVar4[2];
  }
  piVar6 = (int *)piVar4[1];
  if (*(char *)((int)piVar8 + 0xd) == '\0') {
    piVar8[1] = (int)piVar6;
  }
  if (*(int **)(*(int *)this + 4) == piVar4) {
    *(int **)(*(int *)this + 4) = piVar8;
  }
  else if ((int *)*piVar6 == piVar4) {
    *piVar6 = (int)piVar8;
  }
  else {
    piVar6[2] = (int)piVar8;
  }
  piVar5 = *(int **)this;
  if ((int *)*piVar5 == piVar4) {
    if (*(char *)((int)piVar8 + 0xd) == '\0') {
      cVar1 = *(char *)(*piVar8 + 0xd);
      piVar5 = (int *)*piVar8;
      piVar7 = piVar8;
      while (piVar2 = piVar5, cVar1 == '\0') {
        piVar5 = (int *)*piVar2;
        cVar1 = *(char *)((int)piVar5 + 0xd);
        piVar7 = piVar2;
      }
      piVar5 = *(int **)this;
    }
    else {
      piVar7 = piVar6;
    }
    *piVar5 = (int)piVar7;
  }
  if (*(int **)(*(int *)this + 8) == piVar4) {
    if (*(char *)((int)piVar8 + 0xd) == '\0') {
      cVar1 = *(char *)(piVar8[2] + 0xd);
      piVar5 = (int *)piVar8[2];
      piVar7 = piVar8;
      while (piVar2 = piVar5, cVar1 == '\0') {
        piVar5 = (int *)piVar2[2];
        cVar1 = *(char *)((int)piVar5 + 0xd);
        piVar7 = piVar2;
      }
      *(int **)(*(int *)this + 8) = piVar7;
    }
    else {
      *(int **)(*(int *)this + 8) = piVar6;
    }
  }
LAB_00419615:
  if ((char)piVar4[3] == '\x01') {
    if (piVar8 != *(int **)(*(int *)this + 4)) {
      do {
        piVar5 = piVar6;
        if ((char)piVar8[3] != '\x01') break;
        piVar6 = (int *)*piVar5;
        if (piVar8 == piVar6) {
          piVar6 = (int *)piVar5[2];
          if ((char)piVar6[3] == '\0') {
            *(undefined1 *)(piVar6 + 3) = 1;
            *(undefined1 *)(piVar5 + 3) = 0;
            FUN_004197c0(this,(int)piVar5);
            piVar6 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar6 + 0xd) == '\0') {
            if ((*(char *)(*piVar6 + 0xc) != '\x01') || (*(char *)(piVar6[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar6[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar6 + 0xc) = 1;
                *(undefined1 *)(piVar6 + 3) = 0;
                FUN_00419820(this,piVar6);
                piVar6 = (int *)piVar5[2];
              }
              *(char *)(piVar6 + 3) = (char)piVar5[3];
              *(undefined1 *)(piVar5 + 3) = 1;
              *(undefined1 *)(piVar6[2] + 0xc) = 1;
              FUN_004197c0(this,(int)piVar5);
              break;
            }
LAB_004196df:
            *(undefined1 *)(piVar6 + 3) = 0;
          }
        }
        else {
          if ((char)piVar6[3] == '\0') {
            *(undefined1 *)(piVar6 + 3) = 1;
            *(undefined1 *)(piVar5 + 3) = 0;
            FUN_00419820(this,piVar5);
            piVar6 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar6 + 0xd) == '\0') {
            if ((*(char *)(piVar6[2] + 0xc) == '\x01') && (*(char *)(*piVar6 + 0xc) == '\x01'))
            goto LAB_004196df;
            if (*(char *)(*piVar6 + 0xc) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0xc) = 1;
              *(undefined1 *)(piVar6 + 3) = 0;
              FUN_004197c0(this,(int)piVar6);
              piVar6 = (int *)*piVar5;
            }
            *(char *)(piVar6 + 3) = (char)piVar5[3];
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(*piVar6 + 0xc) = 1;
            FUN_00419820(this,piVar5);
            break;
          }
        }
        piVar6 = (int *)piVar5[1];
        piVar8 = piVar5;
      } while (piVar5 != *(int **)(*(int *)this + 4));
    }
    *(undefined1 *)(piVar8 + 3) = 1;
  }
  Ordinal_1042();
  Ordinal_1042();
  Ordinal_1508(piVar4);
  if (*(int *)((int)this + 4) != 0) {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = param_2;
  return;
}

