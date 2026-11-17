
basic_streambuf<char,std::char_traits<char>_> * __thiscall FUN_0041dac0(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_0044ab9c;
  FUN_0041daf0((int)this);
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (this);
  if ((param_1 & 1) != 0) {
    Ordinal_1508(this);
  }
  return this;
}

