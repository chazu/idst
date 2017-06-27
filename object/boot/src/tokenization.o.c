/* generated by Id 1.1 at ,$ */
/* with the command: -I../stage1/ -c tokenization.st -o ../stage2/tokenization.o.c */

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

static oop s_next= 0;
static oop s_new_5f_= 0;
static oop s_new_= 0;
static oop s_value_5f_= 0;
static oop s_species= 0;
static oop s__5fimport_= 0;
static oop s_atEnd= 0;
static oop s_ifFalse_= 0;
static oop s_do_= 0;
static oop s_emptyCheck= 0;
static oop s_flattened= 0;
static oop s__2b= 0;
static oop s_size= 0;
static oop s_first= 0;
static oop s_nextPut_= 0;
static oop s_add_= 0;
static oop s_isEmpty= 0;
static oop s_firstToken_= 0;
static oop s_writeStream= 0;
static oop s_readStream= 0;
static oop s_new= 0;
static oop s_and_= 0;
static oop s_peek= 0;
static oop s_whileFalse_= 0;
static oop s_resetToStart= 0;
static oop s_delimited_= 0;
static oop s_ifTrue_ifFalse_= 0;
static oop s_function_5f_arity_5f_outer_state_nlr_5f_= 0;
static oop s_nextPutAll_= 0;
static oop s_not= 0;
static oop s_whileTrue_= 0;
static oop s_includes_= 0;
static oop s_tokenized_= 0;
static oop s_contents= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "next", &s_next },
  { "new_:", &s_new_5f_ },
  { "new:", &s_new_ },
  { "value_:", &s_value_5f_ },
  { "species", &s_species },
  { "_import:", &s__5fimport_ },
  { "atEnd", &s_atEnd },
  { "ifFalse:", &s_ifFalse_ },
  { "do:", &s_do_ },
  { "emptyCheck", &s_emptyCheck },
  { "flattened", &s_flattened },
  { "+", &s__2b },
  { "size", &s_size },
  { "first", &s_first },
  { "nextPut:", &s_nextPut_ },
  { "add:", &s_add_ },
  { "isEmpty", &s_isEmpty },
  { "firstToken:", &s_firstToken_ },
  { "writeStream", &s_writeStream },
  { "readStream", &s_readStream },
  { "new", &s_new },
  { "and:", &s_and_ },
  { "peek", &s_peek },
  { "whileFalse:", &s_whileFalse_ },
  { "resetToStart", &s_resetToStart },
  { "delimited:", &s_delimited_ },
  { "ifTrue:ifFalse:", &s_ifTrue_ifFalse_ },
  { "function_:arity_:outer:state:nlr_:", &s_function_5f_arity_5f_outer_state_nlr_5f_ },
  { "nextPutAll:", &s_nextPutAll_ },
  { "not", &s_not },
  { "whileTrue:", &s_whileTrue_ },
  { "includes:", &s_includes_ },
  { "tokenized:", &s_tokenized_ },
  { "contents", &s_contents },
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
struct t_OrderedCollection {
  struct _vtable *_vtable[0];
  oop v_array;
  oop v_firstIndex;
  oop v_lastIndex;
};
struct t_Stream {
  struct _vtable *_vtable[0];
};
struct t_PositionableStream {
  struct _vtable *_vtable[0];
  oop v_collection;
  oop v_position;
  oop v_readLimit;
};
struct t_WriteStream {
  struct _vtable *_vtable[0];
  oop v_collection;
  oop v_position;
  oop v_readLimit;
  oop v_writeLimit;
};
static oop l_6= 0;
static oop v__object= 0;
static oop v__vector= 0;
static oop v_Object= 0;
static oop v_UndefinedObject= 0;
static oop v_StaticBlockClosure= 0;
static oop v_BlockClosure= 0;
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
static oop v_String= 0;
static oop v_ImmutableString= 0;
static oop v_true= 0;
static oop v_false= 0;
static oop v_OrderedCollection= 0;
static oop v_Stream= 0;
static oop v_PositionableStream= 0;
static struct __methodinfo __info1= { "firstToken:", "SequenceableCollection", "/Users/piumarta/src/idst/object/st80/tokenization.st", 0, 25, 35, 0 };
static oop SequenceableCollection__firstToken_(oop v__closure, oop v_stateful_self, oop v_self, oop v_delimiters)
 {
  _enter(&__info1);
  oop v_in= 0;
  oop v_out= 0;
  oop _1= 0;
  oop _2= 0;
  (void)v_in;
  (void)v_out;
  _line(25);
  _1= v_self;
  _line(28);
  _1=_sendv(s_readStream, 1, _1);
  v_in= _1;
  _1= v_self;
  _line(29);
  _1=_sendv(s_species, 1, _1);
  _line(29);
  _1=_sendv(s_new, 1, _1);
  _line(29);
  _1=_sendv(s_writeStream, 1, _1);
  v_out= _1;
  /* whileTrue: */
  goto _l2;
 _l1:;
 {
  _1= v_in;
  _line(30);
  _1=_sendv(s_next, 1, _1);
 }
 _l2:;
 {
  /* and: */
  _1= v_in;
  _line(30);
  _1=_sendv(s_atEnd, 1, _1);
  _line(30);
  _1=_sendv(s_not, 1, _1);
  if (!_1) goto _l3;
 {
  _1= v_delimiters;
  _2= v_in;
  _line(30);
  _2=_sendv(s_peek, 1, _2);
  _line(30);
  _1=_sendv(s_includes_, 2, _1, _2);
 }
 _l3:;
 }
  if (_1) goto _l1;
  _1= 0;
  /* whileTrue: */
  goto _l5;
 _l4:;
 {
  _1= v_out;
  _2= v_in;
  _line(31);
  _2=_sendv(s_next, 1, _2);
  _line(31);
  _1=_sendv(s_nextPut_, 2, _1, _2);
 }
 _l5:;
 {
  /* and: */
  _1= v_in;
  _line(31);
  _1=_sendv(s_atEnd, 1, _1);
  _line(31);
  _1=_sendv(s_not, 1, _1);
  if (!_1) goto _l6;
 {
  _1= v_delimiters;
  _2= v_in;
  _line(31);
  _2=_sendv(s_peek, 1, _2);
  _line(31);
  _1=_sendv(s_includes_, 2, _1, _2);
  _line(31);
  _1=_sendv(s_not, 1, _1);
 }
 _l6:;
 }
  if (_1) goto _l4;
  _1= 0;
  _1= v_out;
  _line(32);
  _1=_sendv(s_contents, 1, _1);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info2= { "tokenized:", "SequenceableCollection", "/Users/piumarta/src/idst/object/st80/tokenization.st", 0, 35, 50, &__info1 };
static oop SequenceableCollection__tokenized_(oop v__closure, oop v_stateful_self, oop v_self, oop v_delimiters)
 {
  _enter(&__info2);
  oop v_in= 0;
  oop v_out= 0;
  oop v_tokens= 0;
  oop _1= 0;
  oop _2= 0;
  (void)v_in;
  (void)v_out;
  (void)v_tokens;
  _line(35);
  _1= v_self;
  _line(38);
  _1=_sendv(s_readStream, 1, _1);
  v_in= _1;
  _1= v_self;
  _line(39);
  _1=_sendv(s_species, 1, _1);
  _line(39);
  _1=_sendv(s_new, 1, _1);
  _line(39);
  _1=_sendv(s_writeStream, 1, _1);
  v_out= _1;
  _1= v_OrderedCollection;
  _line(40);
  _1=_sendv(s_new, 1, _1);
  v_tokens= _1;
  /* whileFalse: */
  goto _l8;
 _l7:;
 {
  /* whileTrue: */
  goto _l10;
 _l9:;
 {
  _1= v_in;
  _line(43);
  _1=_sendv(s_next, 1, _1);
 }
 _l10:;
 {
  /* and: */
  _1= v_in;
  _line(43);
  _1=_sendv(s_atEnd, 1, _1);
  _line(43);
  _1=_sendv(s_not, 1, _1);
  if (!_1) goto _l11;
 {
  _1= v_delimiters;
  _2= v_in;
  _line(43);
  _2=_sendv(s_peek, 1, _2);
  _line(43);
  _1=_sendv(s_includes_, 2, _1, _2);
 }
 _l11:;
 }
  if (_1) goto _l9;
  _1= 0;
  /* whileTrue: */
  goto _l13;
 _l12:;
 {
  _1= v_out;
  _2= v_in;
  _line(44);
  _2=_sendv(s_next, 1, _2);
  _line(44);
  _1=_sendv(s_nextPut_, 2, _1, _2);
 }
 _l13:;
 {
  /* and: */
  _1= v_in;
  _line(44);
  _1=_sendv(s_atEnd, 1, _1);
  _line(44);
  _1=_sendv(s_not, 1, _1);
  if (!_1) goto _l14;
 {
  _1= v_delimiters;
  _2= v_in;
  _line(44);
  _2=_sendv(s_peek, 1, _2);
  _line(44);
  _1=_sendv(s_includes_, 2, _1, _2);
  _line(44);
  _1=_sendv(s_not, 1, _1);
 }
 _l14:;
 }
  if (_1) goto _l12;
  _1= 0;
  /* ifFalse: */
  _1= 0;
  _2= v_out;
  _line(45);
  _2=_sendv(s_isEmpty, 1, _2);
  if (_2) goto _l15;
 {
  _1= v_tokens;
  _2= v_out;
  _line(45);
  _2=_sendv(s_contents, 1, _2);
  _line(45);
  _1=_sendv(s_add_, 2, _1, _2);
 }
 _l15:;
  _1= v_out;
  _line(46);
  _1=_sendv(s_resetToStart, 1, _1);
 }
 _l8:;
 {
  _1= v_in;
  _line(41);
  _1=_sendv(s_atEnd, 1, _1);
 }
  if (!_1) goto _l7;
  _1= 0;
  _1= v_tokens;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info4= { "[] delimited:", "SequenceableCollection", "/Users/piumarta/src/idst/object/st80/tokenization.st", 0, 50, 61, &__info2 };
static oop b_4(oop v__closure, oop v__self, oop v_element)
 {
  _enter(&__info4);
  oop _1= 0;
  oop _2= 0;
  _line(55);
  /* ifTrue:ifFalse: */
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* first */
  if (!_1) goto _l16;
 {
  _1= v_false;
  ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1]= _1;  /* first */
 }
  goto _l17;
 _l16:;
 {
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[2];  /* out */
  _2= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[3];  /* delimiter */
  _line(56);
  _1=_sendv(s_nextPut_, 2, _1, _2);
 }
 _l17:;
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[2];  /* out */
  _2= v_element;
  _line(57);
  _1=_sendv(s_nextPut_, 2, _1, _2);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info3= { "delimited:", "SequenceableCollection", "/Users/piumarta/src/idst/object/st80/tokenization.st", 0, 50, 61, &__info4 };
static oop SequenceableCollection__delimited_(oop v__closure, oop v_stateful_self, oop v_self, oop v_delimiter)
 {
  _enter(&__info3);
  oop _state1= _sendv(s_new_5f_, 2, v__vector, 4);
  oop _1= 0;
  oop _2= 0;
  ((oop *)_state1)[3]= v_delimiter;
  _line(50);
  _1= v_self;
  _line(53);
  _1=_sendv(s_species, 1, _1);
  _line(53);
  _1=_sendv(s_new, 1, _1);
  _line(53);
  _1=_sendv(s_writeStream, 1, _1);
  ((oop *)_state1)[2]= _1;  /* out */
  _1= v_true;
  ((oop *)_state1)[1]= _1;  /* first */
  _1= v_self;
  /* Scope('element'->ArgumentVariableNode) */
  /* Scope('delimiter'->ArgumentVariableNode 'first'->TemporaryVariableNode 'self'->ArgumentVariableNode 'out'->TemporaryVariableNode 'stateful_self'->ArgumentVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _2= _sendv(s_function_5f_arity_5f_outer_state_nlr_5f_, 6, v_BlockClosure, (oop)b_4, 1, 0, ((oop *)_state1), 0);
  _line(55);
  _1=_sendv(s_do_, 2, _1, _2);
  _1= ((oop *)_state1)[2];  /* out */
  _line(58);
  _1=_sendv(s_contents, 1, _1);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info7= { "[] flattened", "SequenceableCollection", "/Users/piumarta/src/idst/object/st80/tokenization.st", 0, 61, 71, &__info3 };
static oop b_7(oop v__closure, oop v__self, oop v_element)
 {
  _enter(&__info7);
  oop _1= 0;
  oop _2= 0;
  _line(66);
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1];  /* len */
  _2= v_element;
  _line(66);
  _2=_sendv(s_size, 1, _2);
  {
    int _l= (long)_1 >> 1;
    int _r= (long)_2 >> 1;
    int _s= _l + _r;
    if ((1 & (long)_1 & (long)_2) && ((_s ^ (_s << 1)) >= 0))  _1= (oop)(long)(_s << 1 | 1);  else _1= _sendv(s__2b, 2, _1, _2);
  }
  ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[1]= _1;  /* len */
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info8= { "[] flattened", "SequenceableCollection", "/Users/piumarta/src/idst/object/st80/tokenization.st", 0, 61, 71, &__info7 };
static oop b_8(oop v__closure, oop v__self, oop v_element)
 {
  _enter(&__info8);
  oop _1= 0;
  oop _2= 0;
  _line(68);
  _1= ((oop *)((struct t_BlockClosure *)((struct t_BlockClosure *)v__self)->v_state))[2];  /* out */
  _2= v_element;
  _line(68);
  _1=_sendv(s_nextPutAll_, 2, _1, _2);
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info5= { "flattened", "SequenceableCollection", "/Users/piumarta/src/idst/object/st80/tokenization.st", 0, 61, 71, &__info8 };
static oop SequenceableCollection__flattened(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info5);
  oop _state1= _sendv(s_new_5f_, 2, v__vector, 3);
  oop _1= 0;
  oop _2= 0;
  _line(61);
  _1= v_self;
  _line(64);
  _1=_sendv(s_emptyCheck, 1, _1);
  _1= l_6;
  ((oop *)_state1)[1]= _1;  /* len */
  _1= v_self;
  /* Scope('element'->ArgumentVariableNode) */
  /* Scope('out'->TemporaryVariableNode 'self'->ArgumentVariableNode 'len'->TemporaryVariableNode 'stateful_self'->ArgumentVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _2= _sendv(s_function_5f_arity_5f_outer_state_nlr_5f_, 6, v_BlockClosure, (oop)b_7, 1, 0, ((oop *)_state1), 0);
  _line(66);
  _1=_sendv(s_do_, 2, _1, _2);
  _1= v_self;
  _line(67);
  _1=_sendv(s_first, 1, _1);
  _line(67);
  _1=_sendv(s_species, 1, _1);
  _2= ((oop *)_state1)[1];  /* len */
  _line(67);
  _1=_sendv(s_new_, 2, _1, _2);
  _line(67);
  _1=_sendv(s_writeStream, 1, _1);
  ((oop *)_state1)[2]= _1;  /* out */
  _1= v_self;
  /* Scope('element'->ArgumentVariableNode) */
  /* Scope('out'->TemporaryVariableNode 'self'->ArgumentVariableNode 'len'->TemporaryVariableNode 'stateful_self'->ArgumentVariableNode) */
  /* nil */
  /* 2 */
  /* 1 */
  _2= _sendv(s_function_5f_arity_5f_outer_state_nlr_5f_, 6, v_BlockClosure, (oop)b_8, 1, 0, ((oop *)_state1), 0);
  _line(68);
  _1=_sendv(s_do_, 2, _1, _2);
  _1= ((oop *)_state1)[2];  /* out */
  _line(69);
  _1=_sendv(s_contents, 1, _1);
  _leave();
  return _1;
  _leave();
 }

static struct __methodinfo __info= { "__id__init__", "<initialisation>", "tokenization.st", 0, 0, 0, &__info5 };
void __id__init__tokenization(struct __libid *__libid)
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

  _sendv(s__5fimport_, 3, _libid->_object, "Array", "__id__init__Array");
  v__object= _libid->import("_object");
  v__vector= _libid->import("_vector");
  v_Object= _libid->import("Object");
  v_UndefinedObject= _libid->import("UndefinedObject");
  v_StaticBlockClosure= _libid->import("StaticBlockClosure");
  v_BlockClosure= _libid->import("BlockClosure");
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
  v_String= _libid->import("String");
  v_ImmutableString= _libid->import("ImmutableString");
  v_true= _libid->import("true");
  v_false= _libid->import("false");
  _sendv(s__5fimport_, 3, _libid->_object, "OrderedCollection", "__id__init__OrderedCollection");
  v_OrderedCollection= _libid->import("OrderedCollection");
  _sendv(s__5fimport_, 3, _libid->_object, "WriteStream", "__id__init__WriteStream");
  v_Stream= _libid->import("Stream");
  v_PositionableStream= _libid->import("PositionableStream");
  _libid->method(v_SequenceableCollection, s_firstToken_, (_imp_t)SequenceableCollection__firstToken_);
  _libid->method(v_SequenceableCollection, s_tokenized_, (_imp_t)SequenceableCollection__tokenized_);
  _libid->method(v_SequenceableCollection, s_delimited_, (_imp_t)SequenceableCollection__delimited_);
  l_6= _sendv(s_value_5f_, 2, v_SmallInteger, 0);
  _libid->method(v_SequenceableCollection, s_flattened, (_imp_t)SequenceableCollection__flattened);
  _leave();
}
