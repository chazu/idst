/* generated by Id 1.1 at ,$ */
/* with the command: -I../stage1/ -c Array.st -o ../stage2/Array.o.c */

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

static oop s_as_= 0;
static oop s__3c_3d= 0;
static oop s_value_5f_= 0;
static oop s_species= 0;
static oop s__5fimport_= 0;
static oop s_ifFalse_= 0;
static oop s__5felements= 0;
static oop s__2d= 0;
static oop s__2b= 0;
static oop s_isArray= 0;
static oop s_asArray= 0;
static oop s_size= 0;
static oop s__5fclone= 0;
static oop s_elementSize= 0;
static oop s_nextPutAll_= 0;
static oop s__5fnewPointers_= 0;
static oop s_initialize_= 0;
static oop s_primitiveFailed= 0;
static oop s_size_5f_value_5f_= 0;
static oop s_printElementsOn_= 0;
static oop s_replaceFrom_to_with_startingAt_= 0;
static oop s_and_= 0;
static oop s_replaceFrom_5f_for_5f_with_5f_startingAt_5f_= 0;
static oop s__5fintegerValue= 0;
static oop s_errorImmutable= 0;
static oop s_printOn_= 0;
static oop s_at_= 0;
static oop s__5fpointers= 0;
static oop s_at_put_= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "as:", &s_as_ },
  { "<=", &s__3c_3d },
  { "value_:", &s_value_5f_ },
  { "species", &s_species },
  { "_import:", &s__5fimport_ },
  { "ifFalse:", &s_ifFalse_ },
  { "_elements", &s__5felements },
  { "-", &s__2d },
  { "+", &s__2b },
  { "isArray", &s_isArray },
  { "asArray", &s_asArray },
  { "size", &s_size },
  { "_clone", &s__5fclone },
  { "elementSize", &s_elementSize },
  { "nextPutAll:", &s_nextPutAll_ },
  { "_newPointers:", &s__5fnewPointers_ },
  { "initialize:", &s_initialize_ },
  { "primitiveFailed", &s_primitiveFailed },
  { "size_:value_:", &s_size_5f_value_5f_ },
  { "printElementsOn:", &s_printElementsOn_ },
  { "replaceFrom:to:with:startingAt:", &s_replaceFrom_to_with_startingAt_ },
  { "and:", &s_and_ },
  { "replaceFrom_:for_:with_:startingAt_:", &s_replaceFrom_5f_for_5f_with_5f_startingAt_5f_ },
  { "_integerValue", &s__5fintegerValue },
  { "errorImmutable", &s_errorImmutable },
  { "printOn:", &s_printOn_ },
  { "at:", &s_at_ },
  { "_pointers", &s__5fpointers },
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
static oop l_11= 0;
static oop l_13= 0;
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
static oop v_ImmutableArray= 0;
static oop v_WordArray= 0;
static oop v_ByteArray= 0;
static oop v_String= 0;
static oop v_ImmutableString= 0;
static oop v_true= 0;
static oop v_false= 0;
static struct __methodinfo __info1= { "species", "Array", "/Users/piumarta/src/idst/object/st80/Array.st", 0, 25, 27, 0 };
static oop Array__species(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info1);
  oop _1= 0;
  _line(25);
  _1= v_Array;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info2= { "isArray", "Object", "/Users/piumarta/src/idst/object/st80/Array.st", 0, 27, 28, &__info1 };
static oop Object__isArray(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info2);
  oop _1= 0;
  _line(27);
  _1= v_false;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info3= { "isArray", "Array", "/Users/piumarta/src/idst/object/st80/Array.st", 0, 28, 30, &__info2 };
static oop Array__isArray(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info3);
  oop _1= 0;
  _line(28);
  _1= v_true;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info4= { "initialize:", "Array", "/Users/piumarta/src/idst/object/st80/Array.st", 0, 30, 36, &__info3 };
static oop Array__initialize_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anInteger)
 {
  _enter(&__info4);
  oop _1= 0;
  oop _2= 0;
  _line(30);
  _1= v_self;
  _2= v_anInteger;
  _line(32);
  _1=_superv(v_ArrayedCollection, s_initialize_, 2, _1, _2);
  _1= v_self;
  _2= v_anInteger;
  _line(33);
  _1=_sendv(s__5fnewPointers_, 2, _1, _2);
  ((struct t_Array *)v_stateful_self)->v__pointers= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info5= { "_pointers", "Array", "/Users/piumarta/src/idst/object/st80/Array.st", 0, 36, 37, &__info4 };
static oop Array___5fpointers(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info5);
  oop _1= 0;
  _line(36);
  _1= ((struct t_Array *)v_stateful_self)->v__pointers;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info6= { "_elements", "Array", "/Users/piumarta/src/idst/object/st80/Array.st", 0, 37, 39, &__info5 };
static oop Array___5felements(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info6);
  oop _1= 0;
  _line(37);
  _1= ((struct t_Array *)v_stateful_self)->v__pointers;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info7= { "at:", "Array", "/Users/piumarta/src/idst/object/st80/Array.st", 0, 39, 46, &__info6 };
static oop Array__at_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anInteger)
 {
  _enter(&__info7);
  oop _1= 0;
  _line(39);
 {
# define self ((struct t_Array *)v_self)
 if (((long)v_anInteger & 1) && ((long)v_anInteger > 1) && ((long)v_anInteger <= (long)self->v_size))
        return ((oop *)self->v__pointers)[((long)v_anInteger >> 1) - 1]; 
# undef self
 }
  _1= 0;
  _1= v_self;
  _line(43);
  _1=_sendv(s_primitiveFailed, 1, _1);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info8= { "at:put:", "Array", "/Users/piumarta/src/idst/object/st80/Array.st", 0, 46, 53, &__info7 };
static oop Array__at_put_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anInteger, oop v_anObject)
 {
  _enter(&__info8);
  oop _1= 0;
  _line(46);
 {
# define self ((struct t_Array *)v_self)
 if (((long)v_anInteger & 1) && ((long)v_anInteger > 1) && ((long)v_anInteger <= (long)self->v_size))
        return ((oop *)self->v__pointers)[((long)v_anInteger >> 1) - 1]= v_anObject; 
# undef self
 }
  _1= 0;
  _1= v_self;
  _line(50);
  _1=_sendv(s_primitiveFailed, 1, _1);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info9= { "elementSize", "Array", "/Users/piumarta/src/idst/object/st80/Array.st", 0, 53, 58, &__info8 };
static oop Array__elementSize(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info9);
  oop _1= 0;
  _line(53);
 {
# define self ((struct t_Array *)v_self)

    return (oop)(long)(sizeof(oop) << 1 | 1);

# undef self
 }
  _1= 0;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info10= { "printOn:", "Array", "/Users/piumarta/src/idst/object/st80/Array.st", 0, 58, 64, &__info9 };
static oop Array__printOn_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aStream)
 {
  _enter(&__info10);
  oop _1= 0;
  oop _2= 0;
  _line(58);
  _1= v_aStream;
  _2= l_11;
  _line(60);
  _1=_sendv(s_nextPutAll_, 2, _1, _2);
  _1= v_self;
  _2= v_aStream;
  _line(61);
  _1=_sendv(s_printElementsOn_, 2, _1, _2);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info12= { "replaceFrom:to:with:startingAt:", "Array", "/Users/piumarta/src/idst/object/st80/Array.st", 0, 64, 81, &__info10 };
static oop Array__replaceFrom_to_with_startingAt_(oop v__closure, oop v_stateful_self, oop v_self, oop v_first, oop v_last, oop v_ptrs, oop v_offset)
 {
  _enter(&__info12);
  oop v_count= 0;
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  oop _5= 0;
  (void)v_count;
  _line(64);
  _1= v_last;
  _2= v_first;
  {
    int _l= (long)_1 >> 1;
    int _r= (long)_2 >> 1;
    int _s= (_l - _r);
    if ((1 & (long)_1 & (long)_2) && ((_s ^ (_s << 1)) >= 0))  _1= (oop)(long)(_s << 1 | 1);  else _1= _sendv(s__2d, 2, _1, _2);
  }
  _2= l_13;
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
  _2= v_ptrs;
  _line(68);
  _2=_sendv(s_isArray, 1, _2);
  if (!_2) goto _l2;
 {
  /* and: */
  _2= l_13;
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
  _line(71);
  _3=_sendv(s_size, 1, _3);
  if (1 & (long)_2 & (long)_3) {
    _2= (((long)_2 <= (long)_3) ? v_true : v_false);
  } else _2= _sendv(s__3c_3d, 2, _2, _3);
  if (!_2) goto _l5;
 {
  /* and: */
  _2= l_13;
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
  _3= l_13;
  {
    int _l= (long)_2 >> 1;
    int _r= (long)_3 >> 1;
    int _s= (_l - _r);
    if ((1 & (long)_2) && ((_s ^ (_s << 1)) >= 0))  _2= (oop)(long)(_s << 1 | 1);  else _2= _sendv(s__2d, 2, _2, _3);
  }
  _3= v_ptrs;
  _line(73);
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
  _4= v_ptrs;
  _5= v_offset;
  _line(74);
  _1=_superv(v_ArrayedCollection, s_replaceFrom_to_with_startingAt_, 5, _1, _2, _3, _4, _5);
  _leave();
  return _1;
 }
 _l1:;
  _1= v_self;
  _2= v_first;
  _line(75);
  _2=_sendv(s__5fintegerValue, 1, _2);
  _3= v_count;
  _line(76);
  _3=_sendv(s__5fintegerValue, 1, _3);
  _4= v_ptrs;
  _line(77);
  _4=_sendv(s__5fpointers, 1, _4);
  _5= v_offset;
  _line(78);
  _5=_sendv(s__5fintegerValue, 1, _5);
  _line(75);
  _1=_sendv(s_replaceFrom_5f_for_5f_with_5f_startingAt_5f_, 5, _1, _2, _3, _4, _5);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info14= { "replaceFrom_:for_:with_:startingAt_:", "Array", "/Users/piumarta/src/idst/object/st80/Array.st", 0, 81, 89, &__info12 };
static oop Array__replaceFrom_5f_for_5f_with_5f_startingAt_5f_(oop v__closure, oop v_stateful_self, oop v_self, oop v__first, oop v__count, oop v__source, oop v__offset)
 {
  _enter(&__info14);
  oop _1= 0;
  _line(81);
 {
# define self ((struct t_Array *)v_self)

    memcpy((char *)self->v__pointers + sizeof(oop) * ((long)v__first - 1),
	   (char *)v__source + sizeof(oop) * ((long)v__offset - 1),
	   sizeof(oop) * (long)v__count);

# undef self
 }
  _1= 0;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info15= { "size_:value_:", "ImmutableArray", "/Users/piumarta/src/idst/object/st80/Array.st", 0, 91, 103, &__info14 };
static oop ImmutableArray__size_5f_value_5f_(oop v__closure, oop v_stateful_self, oop v_self, oop v__size, oop v__value)
 {
  _enter(&__info15);
  oop _1= 0;
  oop _2= 0;
  _line(91);
  _1= v_self;
  _line(93);
  _1=_sendv(s__5fclone, 1, _1);
  v_self= _1;
  v_stateful_self= _1;
  _1= v_SmallInteger;
  _2= v__size;
  _line(94);
  _1=_sendv(s_value_5f_, 2, _1, _2);
  ((struct t_ImmutableArray *)v_stateful_self)->v_size= _1;
  _1= v__value;
  ((struct t_ImmutableArray *)v_stateful_self)->v__pointers= _1;
 {
# define self ((struct t_ImmutableArray *)v_self)

      int i;
      for (i= 0;  i < (long)v__size;  ++i)
        ((oop *)self->v__pointers)[i]= *((oop **)v__value)[i];
    
# undef self
 }
  _1= 0;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info16= { "at:put:", "ImmutableArray", "/Users/piumarta/src/idst/object/st80/Array.st", 0, 103, 108, &__info15 };
static oop ImmutableArray__at_put_(oop v__closure, oop v_stateful_self, oop v_self, oop v_anInteger, oop v_anObject)
 {
  _enter(&__info16);
  oop _1= 0;
  _line(103);
  _1= v_self;
  _line(105);
  _1=_sendv(s_errorImmutable, 1, _1);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info17= { "replaceFrom:to:with:startingAt:", "ImmutableArray", "/Users/piumarta/src/idst/object/st80/Array.st", 0, 108, 115, &__info16 };
static oop ImmutableArray__replaceFrom_to_with_startingAt_(oop v__closure, oop v_stateful_self, oop v_self, oop v_first, oop v_last, oop v_aCollection, oop v_offset)
 {
  _enter(&__info17);
  oop _1= 0;
  _line(108);
  _1= v_self;
  _line(110);
  _1=_sendv(s_errorImmutable, 1, _1);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info18= { "asArray", "Collection", "/Users/piumarta/src/idst/object/st80/Array.st", 0, 115, 119, &__info17 };
static oop Collection__asArray(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info18);
  oop _1= 0;
  oop _2= 0;
  _line(115);
  _1= v_self;
  _2= v_Array;
  _line(117);
  _1=_sendv(s_as_, 2, _1, _2);
  _leave();
  return _1;
  _leave();
 }

static struct __methodinfo __info= { "__id__init__", "<initialisation>", "Array.st", 0, 0, 0, &__info18 };
void __id__init__Array(struct __libid *__libid)
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
  v_ImmutableArray= _libid->import("ImmutableArray");
  v_WordArray= _libid->import("WordArray");
  v_ByteArray= _libid->import("ByteArray");
  v_String= _libid->import("String");
  v_ImmutableString= _libid->import("ImmutableString");
  v_true= _libid->import("true");
  v_false= _libid->import("false");
  _libid->method(v_Array, s_species, (_imp_t)Array__species);
  _libid->method(v_Object, s_isArray, (_imp_t)Object__isArray);
  _libid->method(v_Array, s_isArray, (_imp_t)Array__isArray);
  _libid->method(v_Array, s_initialize_, (_imp_t)Array__initialize_);
  _libid->method(v_Array, s__5fpointers, (_imp_t)Array___5fpointers);
  _libid->method(v_Array, s__5felements, (_imp_t)Array___5felements);
  _libid->method(v_Array, s_at_, (_imp_t)Array__at_);
  _libid->method(v_Array, s_at_put_, (_imp_t)Array__at_put_);
  _libid->method(v_Array, s_elementSize, (_imp_t)Array__elementSize);
  l_11= _sendv(s_size_5f_value_5f_, 3, v_ImmutableString, 1, "#");
  _libid->method(v_Array, s_printOn_, (_imp_t)Array__printOn_);
  l_13= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  _libid->method(v_Array, s_replaceFrom_to_with_startingAt_, (_imp_t)Array__replaceFrom_to_with_startingAt_);
  _libid->method(v_Array, s_replaceFrom_5f_for_5f_with_5f_startingAt_5f_, (_imp_t)Array__replaceFrom_5f_for_5f_with_5f_startingAt_5f_);
  _libid->method(v_ImmutableArray, s_size_5f_value_5f_, (_imp_t)ImmutableArray__size_5f_value_5f_);
  _libid->method(v_ImmutableArray, s_at_put_, (_imp_t)ImmutableArray__at_put_);
  _libid->method(v_ImmutableArray, s_replaceFrom_to_with_startingAt_, (_imp_t)ImmutableArray__replaceFrom_to_with_startingAt_);
  _libid->method(v_Collection, s_asArray, (_imp_t)Collection__asArray);
  _leave();
}
