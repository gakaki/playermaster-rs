
/* public: class CGraphicInfo & __thiscall CGraphicInfo::operator=(class CGraphicInfo const &) */

CGraphicInfo * __thiscall CGraphicInfo::operator=(CGraphicInfo *this,CGraphicInfo *param_1)

{
                    /* 0x14040  37  ??4CGraphicInfo@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return this;
}

