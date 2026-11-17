
int * __thiscall FUN_00406340(void *this,short *param_1)

{
  size_t sVar1;
  short sVar2;
  rsize_t _DstSize;
  short *psVar3;
  errno_t eVar4;
  
  *(void **)this = (void *)((int)this + 4);
  if (param_1 == (short *)0x0) {
    *(undefined4 *)this = 0;
    return this;
  }
  psVar3 = param_1;
  do {
    sVar2 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar2 != 0);
  sVar1 = ((int)psVar3 - (int)(param_1 + 1) >> 1) + 1;
  FUN_004062a0(this,sVar1,(void *)((int)this + 4));
  _DstSize = sVar1 * 2;
  eVar4 = memcpy_s(*(void **)this,_DstSize,param_1,_DstSize);
  FUN_004064a0(eVar4);
  return this;
}

