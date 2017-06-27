/* generated by Id 1.1 at ,$ */
/* with the command: -I../stage1/ -c ByteArray.st -o ../stage2/ByteArray.o.c */

#include <id/id.h>

static struct __libid *_libid= 0;

#ifdef ID_DEBUG
# define _enter(info) void *__id_debug= _libid->enter(info)
# define _line(lno)			_libid->line(lno)
# define _leave()			_libid->leave(__id_debug)
# define _backtrace()			_libid->backtrace()
#else
# define _enter(info)			(void)info
# define _line(lno)
# define _leave()
# define _backtrace()			"(no debugging information)\n"
#endif
#define _return			_leave(); return

#define _sendv(MSG, N, RCV, ARG...) ({					\
  struct __send _s= { (MSG), (N), (RCV) };				\
  ((_imp_t)(_libid->bindv(&_s)))(&_s, _s.receiver, _s.receiver, ##ARG);	\
})

#define _superv(TYP, MSG, N, RCV, ARG...) ({	\
  struct __send _s= { (MSG), (N), (TYP) };	\
  _imp_t _imp= _libid->bindv(&_s);		\
  _s.receiver= (RCV);				\
  _imp(&_s, _s.receiver, _s.receiver, ##ARG);	\
})

static oop s__3c_3d= 0;
static oop s_byteAt_= 0;
static oop s_value_5f_= 0;
static oop s_species= 0;
static oop s__5fimport_= 0;
static oop s_ifFalse_= 0;
static oop s__5fbytes= 0;
static oop s__5felements= 0;
static oop s__2d= 0;
static oop s__2b= 0;
static oop s_size= 0;
static oop s__5fclone= 0;
static oop s_primitiveFailed= 0;
static oop s_size_5f_value_5f_= 0;
static oop s_size_value_5f_= 0;
static oop s_isByteArray= 0;
static oop s_initialize_= 0;
static oop s_byteAt_put_= 0;
static oop s_elementSize= 0;
static oop s_replaceFrom_to_with_startingAt_= 0;
static oop s_and_= 0;
static oop s_replaceFrom_5f_for_5f_with_5f_startingAt_5f_= 0;
static oop s__5fintegerValue= 0;
static oop s_errorImmutable= 0;
static oop s_at_= 0;
static oop s__5fnewBytes_= 0;
static oop s_at_put_= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "<=", &s__3c_3d },
  { "byteAt:", &s_byteAt_ },
  { "value_:", &s_value_5f_ },
  { "species", &s_species },
  { "_import:", &s__5fimport_ },
  { "ifFalse:", &s_ifFalse_ },
  { "_bytes", &s__5fbytes },
  { "_elements", &s__5felements },
  { "-", &s__2d },
  { "+", &s__2b },
  { "size", &s_size },
  { "_clone", &s__5fclone },
  { "primitiveFailed", &s_primitiveFailed },
  { "size_:value_:", &s_size_5f_value_5f_ },
  { "size:value_:", &s_size_value_5f_ },
  { "isByteArray", &s_isByteArray },
  { "initialize:", &s_initialize_ },
  { "byteAt:put:", &s_byteAt_put_ },
  { "elementSize", &s_elementSize },
  { "replaceFrom:to:with:startingAt:", &s_replaceFrom_to_with_startingAt_ },
  { "and:", &s_and_ },
  { "replaceFrom_:for_:with_:startingAt_:", &s_replaceFrom_5f_for_5f_with_5f_startingAt_5f_ },
  { "_integerValue", &s__5fintegerValue },
  { "errorImmutable", &s_errorImmutable },
  { "at:", &s_at_ },
  { "_newBytes:", &s__5fnewBytes_ },
  { "at:put:", &s_at_put_ },
  { 0, 0 }
};
struct t__object {
  struct _vtable *_vtable[0];
};
struct t__selector {
  struct _vtable *_vtable[0];
  oop v__size;
  oop v__elements;
};
struct t__assoc {
  struct _vtable *_vtable[0];
  oop v_key;
  oop v_value;
};
struct t__closure {
  struct _vtable *_vtable[0];
  oop v__method;
  oop v_data;
};
struct t__vector {
  struct _vtable *_vtable[0];
  oop v__size;
};
struct t__vtable {
  struct _vtable *_vtable[0];
  oop v__tally;
  oop v_bindings;
  oop v_delegate;
};
struct t_Object {
  struct _vtable *_vtable[0];
};
struct t_UndefinedObject {
  struct _vtable *_vtable[0];
};
struct t_StaticBlockClosure {
  struct _vtable *_vtable[0];
  oop v__function;
  oop v__arity;
};
struct t_BlockClosure {
  struct _vtable *_vtable[0];
  oop v__function;
  oop v__arity;
  oop v_outer;
  oop v_state;
  oop v__nlr;
};
struct t_Magnitude {
  struct _vtable *_vtable[0];
};
struct t_Character {
  struct _vtable *_vtable[0];
  oop v_value;
};
struct t_Number {
  struct _vtable *_vtable[0];
};
struct t_Fraction {
  struct _vtable *_vtable[0];
  oop v_numerator;
  oop v_denominator;
};
struct t_Float {
  struct _vtable *_vtable[0];
};
struct t_Integer {
  struct _vtable *_vtable[0];
};
struct t_SmallInteger {
  struct _vtable *_vtable[0];
};
struct t_LargePositiveInteger {
  struct _vtable *_vtable[0];
  oop v_bytes;
};
struct t_LargeNegativeInteger {
  struct _vtable *_vtable[0];
  oop v_bytes;
};
struct t_Collection {
  struct _vtable *_vtable[0];
};
struct t_SequenceableCollection {
  struct _vtable *_vtable[0];
};
struct t_ArrayedCollection {
  struct _vtable *_vtable[0];
  oop v_size;
};
struct t_Array {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__pointers;
};
struct t_ImmutableArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__pointers;
};
struct t_WordArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__words;
};
struct t_ImmutableWordArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__words;
};
struct t_ByteArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_ImmutableByteArray {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_String {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_ImmutableString {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_Symbol {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__bytes;
};
struct t_nil {
  struct _vtable *_vtable[0];
};
struct t_true {
  struct _vtable *_vtable[0];
};
struct t_false {
  struct _vtable *_vtable[0];
};
struct t_CharacterTable {
  struct _vtable *_vtable[0];
  oop v_size;
  oop v__pointers;
};
static oop l_14= 0;
static oop l_16= 0;
static oop v__object= 0;
static oop v_Object= 0;
static oop v_UndefinedObject= 0;
static oop v_StaticBlockClosure= 0;
static oop v_Magnitude= 0;
static oop v_Number= 0;
static oop v_Integer= 0;
static oop v_SmallInteger= 0;
static oop v_LargePositiveInteger= 0;
static oop v_Collection= 0;
static oop v_SequenceableCollection= 0;
static oop v_ArrayedCollection= 0;
static oop v_Array= 0;
static oop v_WordArray= 0;
static oop v_ByteArray= 0;
static oop v_ImmutableByteArray= 0;
static oop v_String= 0;
static oop v_ImmutableString= 0;
static oop v_true= 0;
static oop v_false= 0;
static struct __methodinfo __info1= { "species", "ByteArray", "/Users/piumarta/src/idst/object/st80/ByteArray.st", 0, 25, 27, 0 };
static oop ByteArray__species(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info1);
  oop _1= 0;
  _line(25);
  _1= v_ByteArray;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info2= { "isByteArray", "Object", "/Users/piumarta/src/idst/object/st80/ByteArray.st", 0, 27, 28, &__info1 };
static oop Object__isByteArray(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info2);
  oop _1= 0;
  _line(27);
  _1= v_false;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info3= { "isByteArray", "ByteArray", "/Users/piumarta/src/idst/object/st80/ByteArray.st", 0, 28, 30, &__info2 };
static oop ByteArray__isByteArray(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info3);
  oop _1= 0;
  _line(28);
  _1= v_true;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info4= { "size:value_:", "ByteArray", "/Users/piumarta/src/idst/object/st80/ByteArray.st", 0, 30, 37, &__info3 };
static oop ByteArray__size_value_5f_(oop v__closure, oop v_stateful_self, oop v_self, oop v_byteSize, oop v__value)
 {
  _enter(&__info4);
  oop _1= 0;
  _line(30);
  _1= v_self;
  _line(32);
  _1=_sendv(s__5fclone, 1, _1);
  v_self= _1;
  v_stateful_self= _1;
  _1= v_byteSize;
  ((struct t_ByteArray *)v_stateful_self)->v_size= _1;
  _1= v__value;
  ((struct t_ByteArray *)v_stateful_self)->v__bytes= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info5= { "size_:value_:", "ByteArray", "/Users/piumarta/src/idst/object/st80/ByteArray.st", 0, 37, 44, &__info4 };
static oop ByteArray__size_5f_value_5f_(oop v__closure, oop v_stateful_self, oop v_self, oop v__size, oop v__value)
 {
  _enter(&__info5);
  oop _1= 0;
  oop _2= 0;
  _line(37);
  _1= v_self;
  _line(39);
  _1=_sendv(s__5fclone, 1, _1);
  v_self= _1;
  v_stateful_self= _1;
  _1= v_SmallInteger;
  _2= v__size;
  _line(40);
  _1=_sendv(s_value_5f_, 2, _1, _2);
  ((struct t_ByteArray *)v_stateful_self)->v_size= _1;
  _1= v__value;
  ((struct t_ByteArray *)v_stateful_self)->v__bytes= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info6= { "initialize:", "ByteArray", "/Users/piumarta/src/idst/object/st80/ByteArray.st", 0, 44, 50, &__info5 };
static oop ByteArray__initialize_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anInteger)
 {
  _enter(&__info6);
  oop _1= 0;
  oop _2= 0;
  _line(44);
  _1= v_self;
  _2= v_anInteger;
  _line(46);
  _1=_superv(v_ArrayedCollection, s_initialize_, 2, _1, _2);
  _1= v_self;
  _2= v_anInteger;
  _line(47);
  _1=_sendv(s__5fnewBytes_, 2, _1, _2);
  ((struct t_ByteArray *)v_stateful_self)->v__bytes= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info7= { "_bytes", "ByteArray", "/Users/piumarta/src/idst/object/st80/ByteArray.st", 0, 50, 51, &__info6 };
static oop ByteArray___5fbytes(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info7);
  oop _1= 0;
  _line(50);
  _1= ((struct t_ByteArray *)v_stateful_self)->v__bytes;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info8= { "_elements", "ByteArray", "/Users/piumarta/src/idst/object/st80/ByteArray.st", 0, 51, 53, &__info7 };
static oop ByteArray___5felements(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info8);
  oop _1= 0;
  _line(51);
  _1= ((struct t_ByteArray *)v_stateful_self)->v__bytes;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info9= { "byteAt:", "ByteArray", "/Users/piumarta/src/idst/object/st80/ByteArray.st", 0, 53, 60, &__info8 };
static oop ByteArray__byteAt_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anInteger)
 {
  _enter(&__info9);
  oop _1= 0;
  _line(53);
 {
# define self ((struct t_ByteArray *)v_self)
 if (((long)v_anInteger & 1) && ((long)v_anInteger > 1) && ((long)v_anInteger <= (long)self->v_size))
        return (oop)((((long)(((unsigned char *)self->v__bytes)[((long)v_anInteger >> 1) - 1])) << 1) | 1); 
# undef self
 }
  _1= 0;
  _1= v_self;
  _line(57);
  _1=_sendv(s_primitiveFailed, 1, _1);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info10= { "byteAt:put:", "ByteArray", "/Users/piumarta/src/idst/object/st80/ByteArray.st", 0, 60, 72, &__info9 };
static oop ByteArray__byteAt_put_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anInteger, oop v_aByte)
 {
  _enter(&__info10);
  oop _1= 0;
  _line(60);
 {
# define self ((struct t_ByteArray *)v_self)

      if (((long)v_anInteger & 1) && ((long)v_anInteger > 1) && ((long)v_anInteger <= (long)self->v_size) && ((long)v_aByte & 1))
        {
          ((char *)self->v__bytes)[((long)v_anInteger >> 1) - 1]= (long)v_aByte >> 1;
          return v_aByte;
        }
    
# undef self
 }
  _1= 0;
  _1= v_self;
  _line(69);
  _1=_sendv(s_primitiveFailed, 1, _1);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info11= { "at:", "ByteArray", "/Users/piumarta/src/idst/object/st80/ByteArray.st", 0, 72, 73, &__info10 };
static oop ByteArray__at_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anInteger)
 {
  _enter(&__info11);
  oop _1= 0;
  oop _2= 0;
  _line(72);
  _1= v_self;
  _2= v_anInteger;
  _line(72);
  _1=_sendv(s_byteAt_, 2, _1, _2);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info12= { "at:put:", "ByteArray", "/Users/piumarta/src/idst/object/st80/ByteArray.st", 0, 73, 75, &__info11 };
static oop ByteArray__at_put_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anInteger, oop v_aByte)
 {
  _enter(&__info12);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(73);
  _1= v_self;
  _2= v_anInteger;
  _3= v_aByte;
  _line(73);
  _1=_sendv(s_byteAt_put_, 3, _1, _2, _3);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info13= { "elementSize", "ByteArray", "/Users/piumarta/src/idst/object/st80/ByteArray.st", 0, 75, 77, &__info12 };
static oop ByteArray__elementSize(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info13);
  oop _1= 0;
  _line(75);
  _1= l_14;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info15= { "replaceFrom:to:with:startingAt:", "ByteArray", "/Users/piumarta/src/idst/object/st80/ByteArray.st", 0, 77, 94, &__info13 };
static oop ByteArray__replaceFrom_to_with_startingAt_(oop v__closure, oop v_stateful_self, oop v_self, oop v_first, oop v_last, oop v_bytes, oop v_offset)
 {
  _enter(&__info15);
  oop v_count= 0;
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  oop _5= 0;
  (void)v_count;
  _line(77);
  _1= v_last;
  _2= v_first;
  {
    int _l= (long)_1 >> 1;
    int _r= (long)_2 >> 1;
    int _s= (_l - _r);
    if ((1 & (long)_1 & (long)_2) && ((_s ^ (_s << 1)) >= 0))  _1= (oop)(long)(_s << 1 | 1);  else _1= _sendv(s__2d, 2, _1, _2);
  }
  _2= l_16;
  {
    int _l= (long)_1 >> 1;
    int _r= (long)_2 >> 1;
    int _s= _l + _r;
    if ((1 & (long)_1) && ((_s ^ (_s << 1)) >= 0))  _1= (oop)(long)(_s << 1 | 1);  else _1= _sendv(s__2b, 2, _1, _2);
  }
  v_count= _1;
  /* ifFalse: */
  _1= 0;
  /* and: */
  _2= v_bytes;
  _line(81);
  _2=_sendv(s_isByteArray, 1, _2);
  if (!_2) goto _l2;
 {
  /* and: */
  _2= l_16;
  _3= v_first;
  if (1 & (long)_3) {
    _2= (((long)_2 <= (long)_3) ? v_true : v_false);
  } else _2= _sendv(s__3c_3d, 2, _2, _3);
  if (!_2) goto _l3;
 {
  /* and: */
  _2= v_first;
  _3= v_last;
  if (1 & (long)_2 & (long)_3) {
    _2= (((long)_2 <= (long)_3) ? v_true : v_false);
  } else _2= _sendv(s__3c_3d, 2, _2, _3);
  if (!_2) goto _l4;
 {
  /* and: */
  _2= v_last;
  _3= v_self;
  _line(84);
  _3=_sendv(s_size, 1, _3);
  if (1 & (long)_2 & (long)_3) {
    _2= (((long)_2 <= (long)_3) ? v_true : v_false);
  } else _2= _sendv(s__3c_3d, 2, _2, _3);
  if (!_2) goto _l5;
 {
  /* and: */
  _2= l_16;
  _3= v_offset;
  if (1 & (long)_3) {
    _2= (((long)_2 <= (long)_3) ? v_true : v_false);
  } else _2= _sendv(s__3c_3d, 2, _2, _3);
  if (!_2) goto _l6;
 {
  _2= v_offset;
  _3= v_count;
  {
    int _l= (long)_2 >> 1;
    int _r= (long)_3 >> 1;
    int _s= _l + _r;
    if ((1 & (long)_2 & (long)_3) && ((_s ^ (_s << 1)) >= 0))  _2= (oop)(long)(_s << 1 | 1);  else _2= _sendv(s__2b, 2, _2, _3);
  }
  _3= l_16;
  {
    int _l= (long)_2 >> 1;
    int _r= (long)_3 >> 1;
    int _s= (_l - _r);
    if ((1 & (long)_2) && ((_s ^ (_s << 1)) >= 0))  _2= (oop)(long)(_s << 1 | 1);  else _2= _sendv(s__2d, 2, _2, _3);
  }
  _3= v_bytes;
  _line(86);
  _3=_sendv(s_size, 1, _3);
  if (1 & (long)_2 & (long)_3) {
    _2= (((long)_2 <= (long)_3) ? v_true : v_false);
  } else _2= _sendv(s__3c_3d, 2, _2, _3);
 }
 _l6:;
 }
 _l5:;
 }
 _l4:;
 }
 _l3:;
 }
 _l2:;
  if (_2) goto _l1;
 {
  _1= v_self;
  _2= v_first;
  _3= v_last;
  _4= v_bytes;
  _5= v_offset;
  _line(87);
  _1=_superv(v_ArrayedCollection, s_replaceFrom_to_with_startingAt_, 5, _1, _2, _3, _4, _5);
  _leave();
  return _1;
 }
 _l1:;
  _1= v_self;
  _2= v_first;
  _line(88);
  _2=_sendv(s__5fintegerValue, 1, _2);
  _3= v_count;
  _line(89);
  _3=_sendv(s__5fintegerValue, 1, _3);
  _4= v_bytes;
  _line(90);
  _4=_sendv(s__5fbytes, 1, _4);
  _5= v_offset;
  _line(91);
  _5=_sendv(s__5fintegerValue, 1, _5);
  _line(88);
  _1=_sendv(s_replaceFrom_5f_for_5f_with_5f_startingAt_5f_, 5, _1, _2, _3, _4, _5);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info17= { "replaceFrom_:for_:with_:startingAt_:", "ByteArray", "/Users/piumarta/src/idst/object/st80/ByteArray.st", 0, 94, 100, &__info15 };
static oop ByteArray__replaceFrom_5f_for_5f_with_5f_startingAt_5f_(oop v__closure, oop v_stateful_self, oop v_self, oop v__first, oop v__count, oop v__source, oop v__offset)
 {
  _enter(&__info17);
  oop _1= 0;
  _line(94);
 {
# define self ((struct t_ByteArray *)v_self)

    memcpy((char *)self->v__bytes + (long)v__first - 1, (char *)v__source + (long)v__offset - 1, (long)v__count);

# undef self
 }
  _1= 0;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info18= { "at:put:", "ImmutableByteArray", "/Users/piumarta/src/idst/object/st80/ByteArray.st", 0, 102, 107, &__info17 };
static oop ImmutableByteArray__at_put_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anInteger, oop v_aByte)
 {
  _enter(&__info18);
  oop _1= 0;
  _line(102);
  _1= v_self;
  _line(104);
  _1=_sendv(s_errorImmutable, 1, _1);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info19= { "replaceFrom:to:with:startingAt:", "ImmutableByteArray", "/Users/piumarta/src/idst/object/st80/ByteArray.st", 0, 107, 111, &__info18 };
static oop ImmutableByteArray__replaceFrom_to_with_startingAt_(oop v__closure, oop v_stateful_self, oop v_self, oop v_first, oop v_last, oop v_bytes, oop v_offset)
 {
  _enter(&__info19);
  oop _1= 0;
  _line(107);
  _1= v_self;
  _line(109);
  _1=_sendv(s_errorImmutable, 1, _1);
  _leave();
  return _1;
  _leave();
 }

static struct __methodinfo __info= { "__id__init__", "<initialisation>", "ByteArray.st", 0, 0, 0, &__info19 };
void __id__init__ByteArray(struct __libid *__libid)
{
  if (_libid) return;
  if (!(_libid= __libid)) { fprintf(stderr, "init _libid %p\n", __libid);  abort(); }
# define GC_add_roots _libid->gc_addRoots
  GC_INIT();
  {
    struct _Selector *s= 0;
    for (s= _Selectors;  s->name;  ++s)
      *s->addr= _libid->intern(s->name);
  }
  _enter(&__info);
  _libid->infos(&__info, &__info1);

  _sendv(s__5fimport_, 3, _libid->_object, "ArrayedCollection", "__id__init__ArrayedCollection");
  v__object= _libid->import("_object");
  v_Object= _libid->import("Object");
  v_UndefinedObject= _libid->import("UndefinedObject");
  v_StaticBlockClosure= _libid->import("StaticBlockClosure");
  v_Magnitude= _libid->import("Magnitude");
  v_Number= _libid->import("Number");
  v_Integer= _libid->import("Integer");
  v_SmallInteger= _libid->import("SmallInteger");
  v_LargePositiveInteger= _libid->import("LargePositiveInteger");
  v_Collection= _libid->import("Collection");
  v_SequenceableCollection= _libid->import("SequenceableCollection");
  v_ArrayedCollection= _libid->import("ArrayedCollection");
  v_Array= _libid->import("Array");
  v_WordArray= _libid->import("WordArray");
  v_ByteArray= _libid->import("ByteArray");
  v_ImmutableByteArray= _libid->import("ImmutableByteArray");
  v_String= _libid->import("String");
  v_ImmutableString= _libid->import("ImmutableString");
  v_true= _libid->import("true");
  v_false= _libid->import("false");
  _libid->method(v_ByteArray, s_species, (_imp_t)ByteArray__species);
  _libid->method(v_Object, s_isByteArray, (_imp_t)Object__isByteArray);
  _libid->method(v_ByteArray, s_isByteArray, (_imp_t)ByteArray__isByteArray);
  _libid->method(v_ByteArray, s_size_value_5f_, (_imp_t)ByteArray__size_value_5f_);
  _libid->method(v_ByteArray, s_size_5f_value_5f_, (_imp_t)ByteArray__size_5f_value_5f_);
  _libid->method(v_ByteArray, s_initialize_, (_imp_t)ByteArray__initialize_);
  _libid->method(v_ByteArray, s__5fbytes, (_imp_t)ByteArray___5fbytes);
  _libid->method(v_ByteArray, s__5felements, (_imp_t)ByteArray___5felements);
  _libid->method(v_ByteArray, s_byteAt_, (_imp_t)ByteArray__byteAt_);
  _libid->method(v_ByteArray, s_byteAt_put_, (_imp_t)ByteArray__byteAt_put_);
  _libid->method(v_ByteArray, s_at_, (_imp_t)ByteArray__at_);
  _libid->method(v_ByteArray, s_at_put_, (_imp_t)ByteArray__at_put_);
  l_14= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  _libid->method(v_ByteArray, s_elementSize, (_imp_t)ByteArray__elementSize);
  l_16= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  _libid->method(v_ByteArray, s_replaceFrom_to_with_startingAt_, (_imp_t)ByteArray__replaceFrom_to_with_startingAt_);
  _libid->method(v_ByteArray, s_replaceFrom_5f_for_5f_with_5f_startingAt_5f_, (_imp_t)ByteArray__replaceFrom_5f_for_5f_with_5f_startingAt_5f_);
  _libid->method(v_ImmutableByteArray, s_at_put_, (_imp_t)ImmutableByteArray__at_put_);
  _libid->method(v_ImmutableByteArray, s_replaceFrom_to_with_startingAt_, (_imp_t)ImmutableByteArray__replaceFrom_to_with_startingAt_);
  _leave();
}