
bool __thiscall FUN_00406680(void *this,POINT *param_1,int *param_2)

{
  int iVar1;
  
  if (*(void **)((int)this + 4) == (void *)0x0) {
    return false;
  }
  iVar1 = FUN_00409000(*(void **)((int)this + 4),param_1);
  *param_2 = iVar1;
  if (2 < iVar1) {
    FUN_00409260(*(void **)((int)this + 4),iVar1);
  }
  iVar1 = FUN_004091c0(*param_2,2);
  return iVar1 != 0;
}

