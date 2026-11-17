
/* public: __thiscall CGraphicInfo::CGraphicInfo(class CGraphicInfo const &) */

CGraphicInfo * __thiscall CGraphicInfo::CGraphicInfo(CGraphicInfo *this,CGraphicInfo *param_1)

{
                    /* 0x14010  11  ??0CGraphicInfo@@QAE@ABV0@@Z */
  *(undefined ***)this = _vftable_;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return this;
}

