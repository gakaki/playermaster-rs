
/* public: void __thiscall CGridCtrl::EnsureVisible(class CCellID &) */

void __thiscall CGridCtrl::EnsureVisible(CGridCtrl *this,CCellID *param_1)

{
                    /* 0x171d0  101  ?EnsureVisible@CGridCtrl@@QAEXAAVCCellID@@@Z */
  CGridCtrl::EnsureVisible(this,*(int *)param_1,*(int *)(param_1 + 4));
  return;
}

