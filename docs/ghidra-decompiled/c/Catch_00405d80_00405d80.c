
undefined4 Catch_00405d80(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  Ordinal_296();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piVar1 = *(int **)(unaff_EBP + -0x41c);
  iVar2 = (**(code **)(*piVar1 + 0x14))(unaff_EBP + -0x414,0x200,0);
  if (iVar2 == 0) {
    Ordinal_4772(unaff_EBP + -0x418,L"%s (%s:%d)",L"Exception thrown in destructor",
                 L"D:\\Visual Studio 2013\\VC\\atlmfc\\include\\afxwin1.inl",0x4d);
  }
  else {
    Ordinal_4772(unaff_EBP + -0x418,L"%s (%s:%d)\n%s",L"Exception thrown in destructor",
                 L"D:\\Visual Studio 2013\\VC\\atlmfc\\include\\afxwin1.inl",0x4d,unaff_EBP + -0x414
                );
  }
  Ordinal_2262(*(undefined4 *)(unaff_EBP + -0x418),0,0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  Ordinal_1042();
  (**(code **)(*piVar1 + 4))(1);
  return 0x405d64;
}

