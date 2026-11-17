
/* protected: void __thiscall CColorTreeCtrl::SetCurSubItem(struct _TREEITEM * &) */

void __thiscall CColorTreeCtrl::SetCurSubItem(CColorTreeCtrl *this,_TREEITEM **param_1)

{
                    /* 0x153d0  477  ?SetCurSubItem@CColorTreeCtrl@@IAEXAAPAU_TREEITEM@@@Z */
  *(_TREEITEM **)(this + 0x1d8) = *param_1;
  return;
}

