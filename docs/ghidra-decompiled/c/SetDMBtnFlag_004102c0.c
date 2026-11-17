
/* public: void __thiscall CConfigInfo::SetDMBtnFlag(int) */

void __thiscall CConfigInfo::SetDMBtnFlag(CConfigInfo *this,int param_1)

{
                    /* 0x102c0  479  ?SetDMBtnFlag@CConfigInfo@@QAEXH@Z */
  *(uint *)(this + 0x3c) = param_1 | 0x400;
  return;
}

