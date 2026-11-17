
/* public: void __thiscall CListScrollBarDlg::SetTableCallback(struct IBindWndCallBack *) */

void __thiscall
CListScrollBarDlg::SetTableCallback(CListScrollBarDlg *this,IBindWndCallBack *param_1)

{
                    /* 0x15a40  618
                       ?SetTableCallback@CListScrollBarDlg@@QAEXPAUIBindWndCallBack@@@Z */
  *(IBindWndCallBack **)(this + 0x1e0) = param_1;
  return;
}

