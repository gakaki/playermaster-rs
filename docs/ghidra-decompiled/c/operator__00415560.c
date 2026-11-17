
/* public: class CCurSorManager & __thiscall CCurSorManager::operator=(class CCurSorManager const &)
    */

CCurSorManager * __thiscall CCurSorManager::operator=(CCurSorManager *this,CCurSorManager *param_1)

{
  int iVar1;
  CCurSorManager *pCVar2;
  
                    /* 0x15560  32  ??4CCurSorManager@@QAEAAV0@ABV0@@Z */
  pCVar2 = this;
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pCVar2 = pCVar2 + 4;
  }
  return this;
}

