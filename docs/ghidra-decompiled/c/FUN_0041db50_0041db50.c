
int __thiscall FUN_0041db50(void *this,int param_1)

{
  byte bVar1;
  int iVar2;
  void *_Src;
  char *pcVar3;
  void *_Dst;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if ((*(uint *)((int)this + 0x3c) & 2) != 0) {
    return -1;
  }
  if (param_1 == -1) {
    return 0;
  }
  if ((((*(uint *)((int)this + 0x3c) & 8) != 0) &&
      (uVar6 = **(uint **)((int)this + 0x20), uVar6 != 0)) &&
     (uVar4 = *(uint *)((int)this + 0x38), uVar6 < uVar4)) {
    iVar2 = **(int **)((int)this + 0x30);
    **(uint **)((int)this + 0x20) = uVar4;
    **(int **)((int)this + 0x30) = (iVar2 + uVar6) - uVar4;
  }
  uVar6 = **(uint **)((int)this + 0x20);
  if (uVar6 != 0) {
    if (uVar6 < **(int **)((int)this + 0x30) + uVar6) {
      pcVar3 = std::basic_streambuf<char,std::char_traits<char>_>::_Pninc(this);
      *pcVar3 = (char)param_1;
      return param_1;
    }
    if (uVar6 != 0) {
      uVar6 = (**(int **)((int)this + 0x30) - **(int **)((int)this + 0xc)) + uVar6;
      goto LAB_0041dbe2;
    }
  }
  uVar6 = 0;
LAB_0041dbe2:
  uVar4 = uVar6 >> 1;
  if (uVar4 < 0x20) {
    uVar4 = 0x20;
  }
  else if (uVar4 == 0) {
    return -1;
  }
  do {
    if (uVar6 <= 0x7fffffff - uVar4) break;
    uVar4 = uVar4 >> 1;
  } while (uVar4 != 0);
  if (uVar4 == 0) {
    return -1;
  }
  iVar2 = uVar4 + uVar6;
  _Dst = (void *)FUN_0040bf90(iVar2);
  _Src = (void *)**(undefined4 **)((int)this + 0xc);
  if ((uVar6 == 0) || (memcpy(_Dst,_Src,uVar6), uVar6 == 0)) {
    *(void **)((int)this + 0x38) = _Dst;
    **(undefined4 **)((int)this + 0x10) = _Dst;
    **(undefined4 **)((int)this + 0x20) = _Dst;
    **(int **)((int)this + 0x30) = iVar2;
    bVar1 = *(byte *)((int)this + 0x3c);
    **(undefined4 **)((int)this + 0xc) = _Dst;
    if ((bVar1 & 4) == 0) {
      **(undefined4 **)((int)this + 0x1c) = _Dst;
      **(undefined4 **)((int)this + 0x2c) = 1;
    }
    else {
      **(undefined4 **)((int)this + 0x1c) = 0;
      **(undefined4 **)((int)this + 0x2c) = _Dst;
    }
  }
  else {
    *(int *)((int)this + 0x38) = (int)_Dst + (*(int *)((int)this + 0x38) - (int)_Src);
    iVar5 = (**(int **)((int)this + 0x20) - (int)_Src) + (int)_Dst;
    **(int **)((int)this + 0x10) = (int)_Dst + (**(int **)((int)this + 0x10) - (int)_Src);
    **(int **)((int)this + 0x20) = iVar5;
    **(int **)((int)this + 0x30) = (int)_Dst + (iVar2 - iVar5);
    if ((*(byte *)((int)this + 0x3c) & 4) == 0) {
      iVar2 = **(int **)((int)this + 0x20);
      iVar5 = (**(int **)((int)this + 0x1c) - (int)_Src) + (int)_Dst;
      **(undefined4 **)((int)this + 0xc) = _Dst;
      **(int **)((int)this + 0x1c) = iVar5;
      **(int **)((int)this + 0x2c) = (iVar2 - iVar5) + 1;
    }
    else {
      **(undefined4 **)((int)this + 0xc) = _Dst;
      **(undefined4 **)((int)this + 0x1c) = 0;
      **(undefined4 **)((int)this + 0x2c) = _Dst;
    }
  }
  if ((*(byte *)((int)this + 0x3c) & 1) != 0) {
    Ordinal_1508(_Src);
  }
  *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 1;
  pcVar3 = std::basic_streambuf<char,std::char_traits<char>_>::_Pninc(this);
  *pcVar3 = (char)param_1;
  return param_1;
}

