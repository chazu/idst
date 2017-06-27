/* generated by Id 1.1 at ,$ */
/* with the command: -I../stage1/ -I../st80 -c ArgumentVariableNode.st -o ../stage2/ArgumentVariableNode.o.c */

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

static oop s_freeWithin_= 0;
static oop s__5fdebugName= 0;
static oop s_generate_location_= 0;
static oop s_loadArgument_location_= 0;
static oop s__5fimport_= 0;
static oop s_generateStore_location_= 0;
static oop s_storeArgument_location_= 0;
static oop s_generateStore_freeIn_location_= 0;
static oop s_tied= 0;
static oop s__5fslots= 0;
static oop s_ifTrue_= 0;
static oop s_tied_= 0;
static oop s__5fsizeof= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "freeWithin:", &s_freeWithin_ },
  { "_debugName", &s__5fdebugName },
  { "generate:location:", &s_generate_location_ },
  { "loadArgument:location:", &s_loadArgument_location_ },
  { "_import:", &s__5fimport_ },
  { "generateStore:location:", &s_generateStore_location_ },
  { "storeArgument:location:", &s_storeArgument_location_ },
  { "generateStore:freeIn:location:", &s_generateStore_freeIn_location_ },
  { "tied", &s_tied },
  { "_slots", &s__5fslots },
  { "ifTrue:", &s_ifTrue_ },
  { "tied:", &s_tied_ },
  { "_sizeof", &s__5fsizeof },
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
struct t_EncodedVariableNode {
  struct _vtable *_vtable[0];
  oop v_name;
  oop v_position;
  oop v_scope;
  oop v_offset;
};
struct t_LocalVariableNode {
  struct _vtable *_vtable[0];
  oop v_name;
  oop v_position;
  oop v_scope;
  oop v_offset;
  oop v_index;
};
struct t_ArgumentVariableNode {
  struct _vtable *_vtable[0];
  oop v_name;
  oop v_position;
  oop v_scope;
  oop v_offset;
  oop v_index;
  oop v_tied;
};
static oop v__object= 0;
static oop v_Object= 0;
static oop v_UndefinedObject= 0;
static oop v_StaticBlockClosure= 0;
static oop v_Magnitude= 0;
static oop v_Number= 0;
static oop v_Integer= 0;
static oop v_LargePositiveInteger= 0;
static oop v_Collection= 0;
static oop v_SequenceableCollection= 0;
static oop v_ArrayedCollection= 0;
static oop v_Array= 0;
static oop v_WordArray= 0;
static oop v_ByteArray= 0;
static oop v_String= 0;
static oop v_ImmutableString= 0;
static oop v_EncodedVariableNode= 0;
static oop v_LocalVariableNode= 0;
static oop v_ArgumentVariableNode= 0;
static size_t ArgumentVariableNode___5fsizeof(oop _closure, oop v_self) { return sizeof(struct t_ArgumentVariableNode); }
static char *ArgumentVariableNode___5fdebugName(oop _closure, oop v_self) { return "ArgumentVariableNode"; }
static struct __slotinfo *ArgumentVariableNode___5fslots(oop _closure, oop v_self) { static struct __slotinfo info[]= { { "name", 0, 4 }, { "position", 4, 4 }, { "scope", 8, 4 }, { "offset", 12, 4 }, { "index", 16, 4 }, { "tied", 20, 4 }, { 0, 0, 0 } };  return &info[0]; }
static struct __methodinfo __info1= { "tied:", "ArgumentVariableNode", "/Users/piumarta/src/idst/object/idc/ArgumentVariableNode.st", 0, 26, 27, 0 };
static oop ArgumentVariableNode__tied_(oop v__closure, oop v_stateful_self, oop v_self, oop v_varNode)
 {
  _enter(&__info1);
  oop _1= 0;
  _line(26);
  _1= v_varNode;
  ((struct t_ArgumentVariableNode *)v_stateful_self)->v_tied= _1;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info2= { "tied", "ArgumentVariableNode", "/Users/piumarta/src/idst/object/idc/ArgumentVariableNode.st", 0, 27, 29, &__info1 };
static oop ArgumentVariableNode__tied(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info2);
  oop _1= 0;
  _line(27);
  _1= ((struct t_ArgumentVariableNode *)v_stateful_self)->v_tied;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info3= { "freeWithin:", "ArgumentVariableNode", "/Users/piumarta/src/idst/object/idc/ArgumentVariableNode.st", 0, 29, 35, &__info2 };
static oop ArgumentVariableNode__freeWithin_(oop v__closure, oop v_stateful_self, oop v_self, oop v_innerScope)
 {
  _enter(&__info3);
  oop _1= 0;
  oop _2= 0;
  _line(29);
  _1= v_self;
  _2= v_innerScope;
  _line(31);
  _1=_superv(v_LocalVariableNode, s_freeWithin_, 2, _1, _2);
  /* ifTrue: */
  _1= 0;
  _2= ((struct t_ArgumentVariableNode *)v_stateful_self)->v_tied;
  if (!_2) goto _l1;
 {
  _1= ((struct t_ArgumentVariableNode *)v_stateful_self)->v_tied;
  _2= v_innerScope;
  _line(32);
  _1=_sendv(s_freeWithin_, 2, _1, _2);
 }
 _l1:;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info4= { "generate:location:", "ArgumentVariableNode", "/Users/piumarta/src/idst/object/idc/ArgumentVariableNode.st", 0, 35, 40, &__info3 };
static oop ArgumentVariableNode__generate_location_(oop v__closure, oop v_stateful_self, oop v_self, oop v_gen, oop v_location)
 {
  _enter(&__info4);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(35);
  _1= v_gen;
  _2= v_self;
  _3= v_location;
  _line(37);
  _1=_sendv(s_loadArgument_location_, 3, _1, _2, _3);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info5= { "generateStore:location:", "ArgumentVariableNode", "/Users/piumarta/src/idst/object/idc/ArgumentVariableNode.st", 0, 40, 46, &__info4 };
static oop ArgumentVariableNode__generateStore_location_(oop v__closure, oop v_stateful_self, oop v_self, oop v_gen, oop v_location)
 {
  _enter(&__info5);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(40);
  _1= v_gen;
  _2= v_self;
  _3= v_location;
  _line(42);
  _1=_sendv(s_storeArgument_location_, 3, _1, _2, _3);
  /* ifTrue: */
  _1= 0;
  _2= ((struct t_ArgumentVariableNode *)v_stateful_self)->v_tied;
  if (!_2) goto _l2;
 {
  _1= ((struct t_ArgumentVariableNode *)v_stateful_self)->v_tied;
  _2= v_gen;
  _3= v_location;
  _line(43);
  _1=_sendv(s_generateStore_location_, 3, _1, _2, _3);
 }
 _l2:;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info6= { "generateStore:freeIn:location:", "ArgumentVariableNode", "/Users/piumarta/src/idst/object/idc/ArgumentVariableNode.st", 0, 46, 51, &__info5 };
static oop ArgumentVariableNode__generateStore_freeIn_location_(oop v__closure, oop v_stateful_self, oop v_self, oop v_gen, oop v_innerLevel, oop v_location)
 {
  _enter(&__info6);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  oop _4= 0;
  _line(46);
  _1= v_self;
  _2= v_gen;
  _3= v_innerLevel;
  _4= v_location;
  _line(48);
  _1=_superv(v_LocalVariableNode, s_generateStore_freeIn_location_, 4, _1, _2, _3, _4);
  /* ifTrue: */
  _1= 0;
  _2= ((struct t_ArgumentVariableNode *)v_stateful_self)->v_tied;
  if (!_2) goto _l3;
 {
  _1= ((struct t_ArgumentVariableNode *)v_stateful_self)->v_tied;
  _2= v_gen;
  _3= v_innerLevel;
  _4= v_location;
  _line(49);
  _1=_sendv(s_generateStore_freeIn_location_, 4, _1, _2, _3, _4);
 }
 _l3:;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }

static struct __methodinfo __info= { "__id__init__", "<initialisation>", "ArgumentVariableNode.st", 0, 0, 0, &__info6 };
void __id__init__ArgumentVariableNode(struct __libid *__libid)
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

  _sendv(s__5fimport_, 3, _libid->_object, "LocalVariableNode", "__id__init__LocalVariableNode");
  v__object= _libid->import("_object");
  v_Object= _libid->import("Object");
  v_UndefinedObject= _libid->import("UndefinedObject");
  v_StaticBlockClosure= _libid->import("StaticBlockClosure");
  v_Magnitude= _libid->import("Magnitude");
  v_Number= _libid->import("Number");
  v_Integer= _libid->import("Integer");
  v_LargePositiveInteger= _libid->import("LargePositiveInteger");
  v_Collection= _libid->import("Collection");
  v_SequenceableCollection= _libid->import("SequenceableCollection");
  v_ArrayedCollection= _libid->import("ArrayedCollection");
  v_Array= _libid->import("Array");
  v_WordArray= _libid->import("WordArray");
  v_ByteArray= _libid->import("ByteArray");
  v_String= _libid->import("String");
  v_ImmutableString= _libid->import("ImmutableString");
  v_EncodedVariableNode= _libid->import("EncodedVariableNode");
  v_LocalVariableNode= _libid->import("LocalVariableNode");
  v_ArgumentVariableNode= _libid->proto2(v_LocalVariableNode, ArgumentVariableNode___5fsizeof(0, 0));
  _libid->method(v_ArgumentVariableNode, s__5fsizeof, (_imp_t)ArgumentVariableNode___5fsizeof);
  _libid->method(v_ArgumentVariableNode, s__5fdebugName, (_imp_t)ArgumentVariableNode___5fdebugName);
  _libid->method(v_ArgumentVariableNode, s__5fslots, (_imp_t)ArgumentVariableNode___5fslots);
  _libid->export("ArgumentVariableNode", v_ArgumentVariableNode);
  _libid->method(v_ArgumentVariableNode, s_tied_, (_imp_t)ArgumentVariableNode__tied_);
  _libid->method(v_ArgumentVariableNode, s_tied, (_imp_t)ArgumentVariableNode__tied);
  _libid->method(v_ArgumentVariableNode, s_freeWithin_, (_imp_t)ArgumentVariableNode__freeWithin_);
  _libid->method(v_ArgumentVariableNode, s_generate_location_, (_imp_t)ArgumentVariableNode__generate_location_);
  _libid->method(v_ArgumentVariableNode, s_generateStore_location_, (_imp_t)ArgumentVariableNode__generateStore_location_);
  _libid->method(v_ArgumentVariableNode, s_generateStore_freeIn_location_, (_imp_t)ArgumentVariableNode__generateStore_freeIn_location_);
  _leave();
}