
void __cdecl FUN_004232e0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = *(int **)*param_1;
  if (piVar4 != (int *)*param_1) {
    do {
      cef_string_map_append(param_2,piVar4[5],piVar4[8]);
      if (*(char *)((int)piVar4 + 0xd) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0xd);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0xd);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0xd);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != (int *)*param_1);
  }
  return;
}

