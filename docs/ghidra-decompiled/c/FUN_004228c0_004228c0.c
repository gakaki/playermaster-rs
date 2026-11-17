
void __thiscall
FUN_004228c0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (0x6666664 < *(uint *)((int)this + 4)) {
    FUN_004201c0(param_5 + 4);
    Ordinal_1508(param_5);
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) + 1;
  param_5[1] = (int)param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = param_5;
    **(undefined4 **)this = param_5;
    *(int **)(*(int *)this + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*(int *)this + 8)) {
      *(int **)(*(int *)this + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == (undefined4 *)**(int **)this) {
      **(int **)this = (int)param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar6 = (int *)piVar4[1];
    piVar5 = *(int **)piVar6[1];
    if (piVar6 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar6[1])[2];
      if ((char)piVar5[3] == '\0') goto LAB_00422a01;
      if (piVar4 == (int *)piVar6[2]) {
        piVar4 = (int *)piVar6[2];
        piVar6[2] = *piVar4;
        if (*(char *)(*piVar4 + 0xd) == '\0') {
          *(int **)(*piVar4 + 4) = piVar6;
        }
        piVar4[1] = piVar6[1];
        if (piVar6 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar4;
        }
        else {
          piVar5 = (int *)piVar6[1];
          if (piVar6 == (int *)*piVar5) {
            *piVar5 = (int)piVar4;
          }
          else {
            piVar5[2] = (int)piVar4;
          }
        }
        *piVar4 = (int)piVar6;
        piVar6[1] = (int)piVar4;
        piVar4 = piVar6;
      }
      *(undefined1 *)(piVar4[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar6 = *(int **)(piVar4[1] + 4);
      piVar5 = (int *)*piVar6;
      *piVar6 = piVar5[2];
      if (*(char *)(piVar5[2] + 0xd) == '\0') {
        *(int **)(piVar5[2] + 4) = piVar6;
      }
      piVar5[1] = piVar6[1];
      if (piVar6 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar5;
        piVar5[2] = (int)piVar6;
      }
      else {
        piVar2 = (int *)piVar6[1];
        if (piVar6 == (int *)piVar2[2]) {
          piVar2[2] = (int)piVar5;
          piVar5[2] = (int)piVar6;
        }
        else {
          *piVar2 = (int)piVar5;
          piVar5[2] = (int)piVar6;
        }
      }
LAB_00422aaa:
      piVar6[1] = (int)piVar5;
    }
    else {
      if ((char)piVar5[3] != '\0') {
        if (piVar4 == (int *)*piVar6) {
          iVar3 = *piVar6;
          *piVar6 = *(int *)(iVar3 + 8);
          if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
            *(int **)(*(int *)(iVar3 + 8) + 4) = piVar6;
          }
          *(int *)(iVar3 + 4) = piVar6[1];
          if (piVar6 == *(int **)(*(int *)this + 4)) {
            *(int *)(*(int *)this + 4) = iVar3;
          }
          else {
            piVar4 = (int *)piVar6[1];
            if (piVar6 == (int *)piVar4[2]) {
              piVar4[2] = iVar3;
            }
            else {
              *piVar4 = iVar3;
            }
          }
          *(int **)(iVar3 + 8) = piVar6;
          piVar6[1] = iVar3;
          piVar4 = piVar6;
        }
        *(undefined1 *)(piVar4[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
        piVar6 = *(int **)(piVar4[1] + 4);
        piVar5 = (int *)piVar6[2];
        piVar6[2] = *piVar5;
        if (*(char *)(*piVar5 + 0xd) == '\0') {
          *(int **)(*piVar5 + 4) = piVar6;
        }
        piVar5[1] = piVar6[1];
        if (piVar6 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar5;
        }
        else {
          piVar2 = (int *)piVar6[1];
          if (piVar6 == (int *)*piVar2) {
            *piVar2 = (int)piVar5;
          }
          else {
            piVar2[2] = (int)piVar5;
          }
        }
        *piVar5 = (int)piVar6;
        goto LAB_00422aaa;
      }
LAB_00422a01:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}

