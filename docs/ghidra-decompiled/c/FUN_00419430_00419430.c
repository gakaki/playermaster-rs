
undefined4 * __thiscall FUN_00419430(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  void *local_8;
  
  piVar2 = *(int **)this;
  local_8 = this;
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    FUN_00419770((int *)piVar2[1]);
    *(int *)(*(int *)this + 4) = *(int *)this;
    *(undefined4 *)*(undefined4 *)this = *(undefined4 *)this;
    *(int *)(*(int *)this + 8) = *(int *)this;
    *(undefined4 *)((int)this + 4) = 0;
    *param_1 = **(undefined4 **)this;
    return param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      param_2 = (int *)piVar3[2];
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        cVar1 = *(char *)(*param_2 + 0xd);
        piVar2 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0xd);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xd);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    FUN_004194f0(this,&local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}

