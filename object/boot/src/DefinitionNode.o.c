/* generated by Id 1.1 at ,$ */
/* with the command: -I../stage1/ -I../st80 -c DefinitionNode.st -o ../stage2/DefinitionNode.o.c */

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

static oop s_value_5f_= 0;
static oop s__5fimport_= 0;
static oop s_ifFalse_= 0;
static oop s_beExternal= 0;
static oop s_isExternal= 0;
static oop s_println_= 0;
static oop s__5fslots= 0;
static oop s_ifTrue_= 0;
static oop s__2b= 0;
static oop s__2c= 0;
static oop s_noteUsed= 0;
static oop s_withName_exec_position_= 0;
static oop s_withPosition_= 0;
static oop s_isDefinitionNode= 0;
static oop s__5fdebugName= 0;
static oop s_addDefinition_= 0;
static oop s_genDeclaration_= 0;
static oop s_genDefinition_= 0;
static oop s_defineVariable_= 0;
static oop s_genImplementation_= 0;
static oop s_genInitialisation_= 0;
static oop s_ifTrue_ifFalse_= 0;
static oop s_initialiseExternal_= 0;
static oop s_genInitialisation_into_= 0;
static oop s_printIndent_= 0;
static oop s_addTo_= 0;
static oop s_size_5f_value_5f_= 0;
static oop s_printString= 0;
static oop s_name= 0;
static oop s_encode_= 0;
static oop s__5fsizeof= 0;
static oop s_println= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "value_:", &s_value_5f_ },
  { "_import:", &s__5fimport_ },
  { "ifFalse:", &s_ifFalse_ },
  { "beExternal", &s_beExternal },
  { "isExternal", &s_isExternal },
  { "println:", &s_println_ },
  { "_slots", &s__5fslots },
  { "ifTrue:", &s_ifTrue_ },
  { "+", &s__2b },
  { ",", &s__2c },
  { "noteUsed", &s_noteUsed },
  { "withName:exec:position:", &s_withName_exec_position_ },
  { "withPosition:", &s_withPosition_ },
  { "isDefinitionNode", &s_isDefinitionNode },
  { "_debugName", &s__5fdebugName },
  { "addDefinition:", &s_addDefinition_ },
  { "genDeclaration:", &s_genDeclaration_ },
  { "genDefinition:", &s_genDefinition_ },
  { "defineVariable:", &s_defineVariable_ },
  { "genImplementation:", &s_genImplementation_ },
  { "genInitialisation:", &s_genInitialisation_ },
  { "ifTrue:ifFalse:", &s_ifTrue_ifFalse_ },
  { "initialiseExternal:", &s_initialiseExternal_ },
  { "genInitialisation:into:", &s_genInitialisation_into_ },
  { "printIndent:", &s_printIndent_ },
  { "addTo:", &s_addTo_ },
  { "size_:value_:", &s_size_5f_value_5f_ },
  { "printString", &s_printString },
  { "name", &s_name },
  { "encode:", &s_encode_ },
  { "_sizeof", &s__5fsizeof },
  { "println", &s_println },
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
struct t_ParseNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
};
struct t_DefinitionNode {
  struct _vtable *_vtable[0];
  oop v_position;
  oop v_location;
  oop v_name;
  oop v_exec;
  oop v_used;
  oop v_external;
};
static oop l_15= 0;
static oop l_16= 0;
static oop l_17= 0;
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
static oop v_String= 0;
static oop v_ImmutableString= 0;
static oop v_true= 0;
static oop v_false= 0;
static oop v_ParseNode= 0;
static oop v_DefinitionNode= 0;
static size_t DefinitionNode___5fsizeof(oop _closure, oop v_self) { return sizeof(struct t_DefinitionNode); }
static char *DefinitionNode___5fdebugName(oop _closure, oop v_self) { return "DefinitionNode"; }
static struct __slotinfo *DefinitionNode___5fslots(oop _closure, oop v_self) { static struct __slotinfo info[]= { { "position", 0, 4 }, { "location", 4, 4 }, { "name", 8, 4 }, { "exec", 12, 4 }, { "used", 16, 4 }, { "external", 20, 4 }, { 0, 0, 0 } };  return &info[0]; }
static struct __methodinfo __info1= { "isDefinitionNode", "Object", "/Users/piumarta/src/idst/object/idc/DefinitionNode.st", 0, 32, 33, 0 };
static oop Object__isDefinitionNode(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info1);
  oop _1= 0;
  _line(32);
  _1= v_false;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info2= { "isDefinitionNode", "DefinitionNode", "/Users/piumarta/src/idst/object/idc/DefinitionNode.st", 0, 33, 35, &__info1 };
static oop DefinitionNode__isDefinitionNode(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info2);
  oop _1= 0;
  _line(33);
  _1= v_true;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info3= { "withName:exec:position:", "DefinitionNode", "/Users/piumarta/src/idst/object/idc/DefinitionNode.st", 0, 35, 44, &__info2 };
static oop DefinitionNode__withName_exec_position_(oop v__closure, oop v_stateful_self, oop v_self, oop v_nameString, oop v_execNode, oop v_aPosition)
 {
  _enter(&__info3);
  oop _1= 0;
  oop _2= 0;
  _line(35);
  _1= v_self;
  _2= v_aPosition;
  _line(37);
  _1=_sendv(s_withPosition_, 2, _1, _2);
  v_self= _1;
  v_stateful_self= _1;
  _1= v_nameString;
  ((struct t_DefinitionNode *)v_stateful_self)->v_name= _1;
  _1= v_execNode;
  ((struct t_DefinitionNode *)v_stateful_self)->v_exec= _1;
  _1= v_false;
  ((struct t_DefinitionNode *)v_stateful_self)->v_used= _1;
  _1= v_false;
  ((struct t_DefinitionNode *)v_stateful_self)->v_external= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info4= { "name", "DefinitionNode", "/Users/piumarta/src/idst/object/idc/DefinitionNode.st", 0, 44, 46, &__info3 };
static oop DefinitionNode__name(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info4);
  oop _1= 0;
  _line(44);
  _1= ((struct t_DefinitionNode *)v_stateful_self)->v_name;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info5= { "noteUsed", "DefinitionNode", "/Users/piumarta/src/idst/object/idc/DefinitionNode.st", 0, 46, 47, &__info4 };
static oop DefinitionNode__noteUsed(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info5);
  oop _1= 0;
  _line(46);
  _1= v_true;
  ((struct t_DefinitionNode *)v_stateful_self)->v_used= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info6= { "beExternal", "DefinitionNode", "/Users/piumarta/src/idst/object/idc/DefinitionNode.st", 0, 47, 48, &__info5 };
static oop DefinitionNode__beExternal(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info6);
  oop _1= 0;
  _line(47);
  _1= v_true;
  ((struct t_DefinitionNode *)v_stateful_self)->v_external= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info7= { "isExternal", "DefinitionNode", "/Users/piumarta/src/idst/object/idc/DefinitionNode.st", 0, 48, 50, &__info6 };
static oop DefinitionNode__isExternal(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info7);
  oop _1= 0;
  _line(48);
  _1= ((struct t_DefinitionNode *)v_stateful_self)->v_external;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info8= { "addTo:", "DefinitionNode", "/Users/piumarta/src/idst/object/idc/DefinitionNode.st", 0, 50, 52, &__info7 };
static oop DefinitionNode__addTo_(oop v__closure, oop v_stateful_self, oop v_self, oop v_client)
 {
  _enter(&__info8);
  oop _1= 0;
  oop _2= 0;
  _line(50);
  _1= v_client;
  _2= v_self;
  _line(50);
  _1=_sendv(s_addDefinition_, 2, _1, _2);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info9= { "encode:", "DefinitionNode", "/Users/piumarta/src/idst/object/idc/DefinitionNode.st", 0, 52, 61, &__info8 };
static oop DefinitionNode__encode_(oop v__closure, oop v_stateful_self, oop v_self, oop v_encoder)
 {
  _enter(&__info9);
  oop _1= 0;
  oop _2= 0;
  _line(52);
  /* ifFalse: */
  _1= 0;
  _2= ((struct t_DefinitionNode *)v_stateful_self)->v_external;
  if (_2) goto _l1;
 {
  _1= v_true;
  ((struct t_DefinitionNode *)v_stateful_self)->v_used= _1;
  _1= ((struct t_DefinitionNode *)v_stateful_self)->v_exec;
  _2= v_encoder;
  _line(58);
  _1=_sendv(s_encode_, 2, _1, _2);
 }
 _l1:;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info10= { "genDeclaration:", "DefinitionNode", "/Users/piumarta/src/idst/object/idc/DefinitionNode.st", 0, 61, 63, &__info9 };
static oop DefinitionNode__genDeclaration_(oop v__closure, oop v_stateful_self, oop v_self, oop v_gen)
 {
  _enter(&__info10);
  oop _1= 0;
  oop _2= 0;
  _line(61);
  /* ifFalse: */
  _1= 0;
  _2= ((struct t_DefinitionNode *)v_stateful_self)->v_external;
  if (_2) goto _l2;
 {
  _1= ((struct t_DefinitionNode *)v_stateful_self)->v_exec;
  _2= v_gen;
  _line(61);
  _1=_sendv(s_genDeclaration_, 2, _1, _2);
 }
 _l2:;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info11= { "genDefinition:", "DefinitionNode", "/Users/piumarta/src/idst/object/idc/DefinitionNode.st", 0, 63, 69, &__info10 };
static oop DefinitionNode__genDefinition_(oop v__closure, oop v_stateful_self, oop v_self, oop v_gen)
 {
  _enter(&__info11);
  oop _1= 0;
  oop _2= 0;
  _line(63);
  /* ifTrue: */
  _1= 0;
  _2= ((struct t_DefinitionNode *)v_stateful_self)->v_used;
  if (!_2) goto _l3;
 {
  _1= v_gen;
  _2= v_self;
  _line(65);
  _1=_sendv(s_defineVariable_, 2, _1, _2);
 }
 _l3:;
  /* ifFalse: */
  _1= 0;
  _2= ((struct t_DefinitionNode *)v_stateful_self)->v_external;
  if (_2) goto _l4;
 {
  _1= ((struct t_DefinitionNode *)v_stateful_self)->v_exec;
  _2= v_gen;
  _line(66);
  _1=_sendv(s_genDefinition_, 2, _1, _2);
 }
 _l4:;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info12= { "genImplementation:", "DefinitionNode", "/Users/piumarta/src/idst/object/idc/DefinitionNode.st", 0, 69, 71, &__info11 };
static oop DefinitionNode__genImplementation_(oop v__closure, oop v_stateful_self, oop v_self, oop v_gen)
 {
  _enter(&__info12);
  oop _1= 0;
  oop _2= 0;
  _line(69);
  /* ifFalse: */
  _1= 0;
  _2= ((struct t_DefinitionNode *)v_stateful_self)->v_external;
  if (_2) goto _l5;
 {
  _1= ((struct t_DefinitionNode *)v_stateful_self)->v_exec;
  _2= v_gen;
  _line(69);
  _1=_sendv(s_genImplementation_, 2, _1, _2);
 }
 _l5:;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info13= { "genInitialisation:", "DefinitionNode", "/Users/piumarta/src/idst/object/idc/DefinitionNode.st", 0, 71, 81, &__info12 };
static oop DefinitionNode__genInitialisation_(oop v__closure, oop v_stateful_self, oop v_self, oop v_gen)
 {
  _enter(&__info13);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(71);
  /* ifTrue: */
  _1= 0;
  _2= ((struct t_DefinitionNode *)v_stateful_self)->v_used;
  if (!_2) goto _l6;
 {
  /* ifTrue:ifFalse: */
  _1= ((struct t_DefinitionNode *)v_stateful_self)->v_external;
  if (!_1) goto _l7;
 {
  _1= v_gen;
  _2= ((struct t_DefinitionNode *)v_stateful_self)->v_name;
  _line(76);
  _1=_sendv(s_initialiseExternal_, 2, _1, _2);
 }
  goto _l8;
 _l7:;
 {
  _1= ((struct t_DefinitionNode *)v_stateful_self)->v_exec;
  _2= v_gen;
  _3= v_self;
  _line(78);
  _1=_sendv(s_genInitialisation_into_, 3, _1, _2, _3);
 }
 _l8:;
 }
 _l6:;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info14= { "println:", "DefinitionNode", "/Users/piumarta/src/idst/object/idc/DefinitionNode.st", 0, 81, 87, &__info13 };
static oop DefinitionNode__println_(oop v__closure, oop v_stateful_self, oop v_self, oop v_indent)
 {
  _enter(&__info14);
  oop _1= 0;
  oop _2= 0;
  oop _3= 0;
  _line(81);
  _1= v_self;
  _2= v_indent;
  _line(83);
  _1=_sendv(s_printIndent_, 2, _1, _2);
  _1= l_15;
  _2= ((struct t_DefinitionNode *)v_stateful_self)->v_name;
  _line(84);
  _2=_sendv(s_printString, 1, _2);
  _line(84);
  _1=_sendv(s__2c, 2, _1, _2);
  _2= l_16;
  _line(84);
  _1=_sendv(s__2c, 2, _1, _2);
  _line(84);
  _1=_sendv(s_println, 1, _1);
  _1= ((struct t_DefinitionNode *)v_stateful_self)->v_exec;
  _2= v_indent;
  _3= l_17;
  {
    int _l= (long)_2 >> 1;
    int _r= (long)_3 >> 1;
    int _s= _l + _r;
    if ((1 & (long)_2) && ((_s ^ (_s << 1)) >= 0))  _2= (oop)(long)(_s << 1 | 1);  else _2= _sendv(s__2b, 2, _2, _3);
  }
  _line(85);
  _1=_sendv(s_println_, 2, _1, _2);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }

static struct __methodinfo __info= { "__id__init__", "<initialisation>", "DefinitionNode.st", 0, 0, 0, &__info14 };
void __id__init__DefinitionNode(struct __libid *__libid)
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

  _sendv(s__5fimport_, 3, _libid->_object, "ParseNode", "__id__init__ParseNode");
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
  v_String= _libid->import("String");
  v_ImmutableString= _libid->import("ImmutableString");
  v_true= _libid->import("true");
  v_false= _libid->import("false");
  v_ParseNode= _libid->import("ParseNode");
  v_DefinitionNode= _libid->proto2(v_ParseNode, DefinitionNode___5fsizeof(0, 0));
  _libid->method(v_DefinitionNode, s__5fsizeof, (_imp_t)DefinitionNode___5fsizeof);
  _libid->method(v_DefinitionNode, s__5fdebugName, (_imp_t)DefinitionNode___5fdebugName);
  _libid->method(v_DefinitionNode, s__5fslots, (_imp_t)DefinitionNode___5fslots);
  _libid->export("DefinitionNode", v_DefinitionNode);
  _libid->method(v_Object, s_isDefinitionNode, (_imp_t)Object__isDefinitionNode);
  _libid->method(v_DefinitionNode, s_isDefinitionNode, (_imp_t)DefinitionNode__isDefinitionNode);
  _libid->method(v_DefinitionNode, s_withName_exec_position_, (_imp_t)DefinitionNode__withName_exec_position_);
  _libid->method(v_DefinitionNode, s_name, (_imp_t)DefinitionNode__name);
  _libid->method(v_DefinitionNode, s_noteUsed, (_imp_t)DefinitionNode__noteUsed);
  _libid->method(v_DefinitionNode, s_beExternal, (_imp_t)DefinitionNode__beExternal);
  _libid->method(v_DefinitionNode, s_isExternal, (_imp_t)DefinitionNode__isExternal);
  _libid->method(v_DefinitionNode, s_addTo_, (_imp_t)DefinitionNode__addTo_);
  _libid->method(v_DefinitionNode, s_encode_, (_imp_t)DefinitionNode__encode_);
  _libid->method(v_DefinitionNode, s_genDeclaration_, (_imp_t)DefinitionNode__genDeclaration_);
  _libid->method(v_DefinitionNode, s_genDefinition_, (_imp_t)DefinitionNode__genDefinition_);
  _libid->method(v_DefinitionNode, s_genImplementation_, (_imp_t)DefinitionNode__genImplementation_);
  _libid->method(v_DefinitionNode, s_genInitialisation_, (_imp_t)DefinitionNode__genInitialisation_);
  l_15= _sendv(s_size_5f_value_5f_, 3, v_ImmutableString, 11, "Definition ");
  l_16= _sendv(s_size_5f_value_5f_, 3, v_ImmutableString, 3, " = ");
  l_17= _sendv(s_value_5f_, 2, v_SmallInteger, 1);
  _libid->method(v_DefinitionNode, s_println_, (_imp_t)DefinitionNode__println_);
  _leave();
}