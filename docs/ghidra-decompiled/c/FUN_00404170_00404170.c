
void * __thiscall FUN_00404170(void *this,void *param_1,void *param_2)

{
  byte bVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  
  pvVar3 = param_2;
  pvVar7 = param_1;
  if (*(char *)((int)this + 0x2d) != '\0') {
    if ((*(int *)((int)this + 0x3c) != 0) && (*(void **)((int)this + 0x40) < param_2)) {
      Ordinal_266(*(int *)((int)this + 0x3c));
      *(undefined4 *)((int)this + 0x3c) = 0;
    }
    if (*(int *)((int)this + 0x3c) == 0) {
      uVar4 = Ordinal_265((int)pvVar3 * 2);
      *(undefined4 *)((int)this + 0x3c) = uVar4;
      *(void **)((int)this + 0x40) = pvVar3;
    }
    memcpy(*(void **)((int)this + 0x3c),pvVar7,(size_t)pvVar3);
    param_1 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      do {
        bVar1 = *(byte *)((int)param_1 + *(int *)((int)this + 0x3c));
        uVar2 = *(uint *)((int)this + 0x38);
        uVar6 = uVar2 & 0xfffd | 2;
        uVar5 = *(uint *)(&DAT_0044ca70 +
                         (((int)(char)bVar1 ^ *(uint *)((int)this + 0x30)) & 0xff) * 4) ^
                *(uint *)((int)this + 0x30) >> 8;
        *(uint *)((int)this + 0x30) = uVar5;
        uVar5 = ((uVar5 & 0xff) + *(int *)((int)this + 0x34)) * 0x8088405 + 1;
        *(uint *)((int)this + 0x34) = uVar5;
        *(uint *)((int)this + 0x38) =
             uVar2 >> 8 ^ *(uint *)(&DAT_0044ca70 + ((uVar5 >> 0x18 ^ uVar2) & 0xff) * 4);
        *(byte *)((int)param_1 + *(int *)((int)this + 0x3c)) =
             (byte)((uVar6 ^ 1) * uVar6 >> 8) ^ bVar1;
        param_1 = (void *)((int)param_1 + 1);
      } while (param_1 < param_2);
    }
    pvVar7 = *(void **)((int)this + 0x3c);
  }
  pvVar3 = param_2;
  if (*(int *)((int)this + 0x20) == 0) {
    if (*(HANDLE *)((int)this + 4) == (HANDLE)0x0) {
      *(undefined4 *)((int)this + 0x14) = 0x1000000;
      return (void *)0x0;
    }
    WriteFile(*(HANDLE *)((int)this + 4),pvVar7,(DWORD)param_2,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
    return param_1;
  }
  if ((uint)(*(int *)((int)this + 0x24) + (int)param_2) < *(uint *)((int)this + 0x28)) {
    memcpy((void *)(*(int *)((int)this + 0x20) + *(int *)((int)this + 0x24)),pvVar7,(size_t)param_2)
    ;
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + (int)pvVar3;
    return pvVar3;
  }
  *(undefined4 *)((int)this + 0x14) = 0x30000;
  return (void *)0x0;
}

