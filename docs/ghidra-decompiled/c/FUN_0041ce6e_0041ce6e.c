
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int FUN_0041ce6e(void)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  BOOL BVar5;
  ushort *puVar6;
  
  bVar3 = false;
  __crtGetShowWindowMode();
  bVar2 = false;
  do {
    iVar4 = 0;
    LOCK();
    if (DAT_004650dc == 0) {
      DAT_004650dc = *(int *)((int)Self + 4);
    }
    else {
      iVar4 = DAT_004650dc;
    }
    UNLOCK();
    if (iVar4 == 0) goto LAB_0041ceb8;
  } while (iVar4 != *(int *)((int)Self + 4));
  bVar2 = true;
LAB_0041ceb8:
  if (DAT_004650e0 == 1) {
    _amsg_exit(0x1f);
  }
  else if (DAT_004650e0 == 0) {
    DAT_004650e0 = 1;
    iVar4 = initterm_e(&DAT_0044aaa0,&DAT_0044aab0);
    if (iVar4 != 0) {
      return 0xff;
    }
  }
  else {
    DAT_00464938 = 1;
  }
  if (DAT_004650e0 == 1) {
    initterm(&DAT_0044aa78,&DAT_0044aa9c);
    DAT_004650e0 = 2;
  }
  if (!bVar2) {
    LOCK();
    DAT_004650dc = 0;
    UNLOCK();
  }
  if ((DAT_004650ec != (code *)0x0) &&
     (BVar5 = __IsNonwritableInCurrentImage((PBYTE)&DAT_004650ec), BVar5 != 0)) {
    (*DAT_004650ec)(0,2,0);
  }
  puVar6 = *(ushort **)_wcmdln_exref;
  while ((uVar1 = *puVar6, 0x20 < uVar1 || ((uVar1 != 0 && (bVar3))))) {
    if (uVar1 == 0x22) {
      bVar3 = !bVar3;
    }
    puVar6 = puVar6 + 1;
  }
  for (; (*puVar6 != 0 && (*puVar6 < 0x21)); puVar6 = puVar6 + 1) {
  }
  DAT_0046493c = FUN_004453f9();
  if (DAT_00464940 == 0) {
                    /* WARNING: Subroutine does not return */
    exit(DAT_0046493c);
  }
  if (DAT_00464938 == 0) {
    _cexit();
  }
  return DAT_0046493c;
}

