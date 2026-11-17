
int * __thiscall FUN_004184f0(void *this,int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00447010;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = FUN_00419010(this,(param_1[1] - *param_1) / 0xc);
  if ((char)uVar1 != '\0') {
    local_8 = 0;
    iVar2 = FUN_0041ba20(*param_1,param_1[1],*(int *)this);
    *(int *)((int)this + 4) = iVar2;
  }
  ExceptionList = local_10;
  return this;
}

