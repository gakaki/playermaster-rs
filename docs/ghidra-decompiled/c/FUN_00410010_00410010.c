
basic_ostream<char,std::char_traits<char>_> *
FUN_00410010(basic_ostream<char,std::char_traits<char>_> *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  basic_ostream<char,std::char_traits<char>_> *pbVar6;
  uint uVar7;
  char *pcVar8;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar9;
  int extraout_ECX_01;
  bool bVar10;
  __int64 _Var11;
  int local_28;
  int iStack_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00446920;
  local_10 = ExceptionList;
  uVar4 = DAT_0046400c ^ (int)register0x00000010 - 4U;
  ExceptionList = &local_10;
  bVar3 = false;
  if (*param_2 == '\0') {
    uVar7 = 0;
  }
  else {
    pcVar8 = param_2;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar7 = (int)pcVar8 - (int)(param_2 + 1);
  }
  iVar9 = *(int *)(*(int *)param_1 + 4);
  iStack_24 = *(int *)(param_1 + iVar9 + 0x24);
  uVar2 = *(uint *)(param_1 + iVar9 + 0x20);
  if ((iStack_24 < 0) ||
     ((iStack_24 < 1 && (((uVar2 == 0 || (iStack_24 < 0)) || ((iStack_24 < 1 && (uVar2 <= uVar7)))))
      ))) {
    iStack_24 = 0;
    local_28 = 0;
  }
  else {
    local_28 = uVar2 - uVar7;
    iStack_24 = iStack_24 - (uint)(uVar2 < uVar7);
  }
  if (*(int **)(param_1 + iVar9 + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + iVar9 + 0x38) + 4))();
  }
  local_8 = 0;
  if (((*(int *)(param_1 + *(int *)(*(int *)param_1 + 4) + 0xc) == 0) &&
      (pbVar6 = *(basic_ostream<char,std::char_traits<char>_> **)
                 (param_1 + *(int *)(*(int *)param_1 + 4) + 0x3c),
      pbVar6 != (basic_ostream<char,std::char_traits<char>_> *)0x0)) && (pbVar6 != param_1)) {
    std::basic_ostream<char,std::char_traits<char>_>::flush(pbVar6);
  }
  iVar9 = *(int *)(*(int *)param_1 + 4);
  local_8 = 1;
  if (*(int *)(param_1 + iVar9 + 0xc) != 0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)(param_1 + *(int *)(*(int *)param_1 + 4)),
               4,false);
    local_8 = 0xffffffff;
    bVar3 = std::uncaught_exception();
    if (!bVar3) {
      std::basic_ostream<char,std::char_traits<char>_>::_Osfx(param_1);
    }
    if (*(int **)(param_1 + *(int *)(*(int *)param_1 + 4) + 0x38) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + *(int *)(*(int *)param_1 + 4) + 0x38) + 8))();
    }
    ExceptionList = local_10;
    return param_1;
  }
  local_8 = 2;
  if ((*(uint *)(param_1 + iVar9 + 0x14) & 0x1c0) != 0x40) {
    while( true ) {
      if ((iStack_24 < 0) || ((iStack_24 < 1 && (local_28 == 0)))) goto LAB_00410138;
      iVar5 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          (param_1 + *(int *)(*(int *)param_1 + 4) + 0x38),
                         (char)param_1[*(int *)(*(int *)param_1 + 4) + 0x40]);
      iVar9 = extraout_ECX;
      if (iVar5 == -1) break;
      bVar10 = local_28 != 0;
      local_28 = local_28 + -1;
      iStack_24 = iStack_24 + -1 + (uint)bVar10;
    }
    bVar3 = true;
LAB_00410138:
    if (bVar3) goto LAB_004101ab;
  }
  _Var11 = std::basic_streambuf<char,std::char_traits<char>_>::sputn
                     (*(basic_streambuf<char,std::char_traits<char>_> **)
                       (param_1 + *(int *)(*(int *)param_1 + 4) + 0x38),param_2,
                      (ulonglong)uVar4 << 0x20);
  iVar9 = extraout_ECX_00;
  if (((uint)_Var11 == uVar7) && ((int)((ulonglong)_Var11 >> 0x20) == 0)) {
    while ((-1 < iStack_24 &&
           (((0 < iStack_24 || (local_28 != 0)) &&
            (iVar5 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                               (*(basic_streambuf<char,std::char_traits<char>_> **)
                                 (param_1 + *(int *)(*(int *)param_1 + 4) + 0x38),
                                (char)param_1[*(int *)(*(int *)param_1 + 4) + 0x40]),
            iVar9 = extraout_ECX_01, iVar5 != -1))))) {
      bVar3 = local_28 != 0;
      local_28 = local_28 + -1;
      iStack_24 = iStack_24 + -1 + (uint)bVar3;
    }
  }
LAB_004101ab:
  iVar5 = *(int *)(*(int *)param_1 + 4);
  *(undefined4 *)(param_1 + iVar5 + 0x20) = 0;
  *(undefined4 *)(param_1 + iVar5 + 0x24) = 0;
  pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)FUN_004101e2(iVar9,(int *)param_1);
  return pbVar6;
}

