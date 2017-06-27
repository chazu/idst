/* generated by Id 1.1 at ,$ */
/* with the command: -I../stage1/ -I../st80 -c ScannerPosition.st -o ../stage2/ScannerPosition.o.c */

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

static oop s_position= 0;
static oop s_withFile_line_= 0;
static oop s__5fdebugName= 0;
static oop s_nextPutAll_= 0;
static oop s_new= 0;
static oop s__5fimport_= 0;
static oop s_line= 0;
static oop s_value_5f_= 0;
static oop s_file= 0;
static oop s_print_= 0;
static oop s_printOn_= 0;
static oop s__5fslots= 0;
static oop s__5fsizeof= 0;
static oop s_nextPut_= 0;
static struct _Selector { const char *name; oop *addr; } _Selectors[]= {
  { "position", &s_position },
  { "withFile:line:", &s_withFile_line_ },
  { "_debugName", &s__5fdebugName },
  { "nextPutAll:", &s_nextPutAll_ },
  { "new", &s_new },
  { "_import:", &s__5fimport_ },
  { "line", &s_line },
  { "value_:", &s_value_5f_ },
  { "file", &s_file },
  { "print:", &s_print_ },
  { "printOn:", &s_printOn_ },
  { "_slots", &s__5fslots },
  { "_sizeof", &s__5fsizeof },
  { "nextPut:", &s_nextPut_ },
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
struct t_ScannerPosition {
  struct _vtable *_vtable[0];
  oop v_file;
  oop v_line;
};
static oop l_6= 0;
static oop v__object= 0;
static oop v_Object= 0;
static oop v_UndefinedObject= 0;
static oop v_StaticBlockClosure= 0;
static oop v_Magnitude= 0;
static oop v_Character= 0;
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
static oop v_ScannerPosition= 0;
static size_t ScannerPosition___5fsizeof(oop _closure, oop v_self) { return sizeof(struct t_ScannerPosition); }
static char *ScannerPosition___5fdebugName(oop _closure, oop v_self) { return "ScannerPosition"; }
static struct __slotinfo *ScannerPosition___5fslots(oop _closure, oop v_self) { static struct __slotinfo info[]= { { "file", 0, 4 }, { "line", 4, 4 }, { 0, 0, 0 } };  return &info[0]; }
static struct __methodinfo __info1= { "withFile:line:", "ScannerPosition", "/Users/piumarta/src/idst/object/idc/ScannerPosition.st", 0, 27, 34, 0 };
static oop ScannerPosition__withFile_line_(oop v__closure, oop v_stateful_self, oop v_self, oop v_fileName, oop v_lineNumber)
 {
  _enter(&__info1);
  oop _1= 0;
  _line(27);
  _1= v_self;
  _line(29);
  _1=_sendv(s_new, 1, _1);
  v_self= _1;
  v_stateful_self= _1;
  _1= v_fileName;
  ((struct t_ScannerPosition *)v_stateful_self)->v_file= _1;
  _1= v_lineNumber;
  ((struct t_ScannerPosition *)v_stateful_self)->v_line= _1;
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info2= { "position", "ScannerPosition", "/Users/piumarta/src/idst/object/idc/ScannerPosition.st", 0, 34, 35, &__info1 };
static oop ScannerPosition__position(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info2);
  oop _1= 0;
  _line(34);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info3= { "file", "ScannerPosition", "/Users/piumarta/src/idst/object/idc/ScannerPosition.st", 0, 35, 36, &__info2 };
static oop ScannerPosition__file(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info3);
  oop _1= 0;
  _line(35);
  _1= ((struct t_ScannerPosition *)v_stateful_self)->v_file;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info4= { "line", "ScannerPosition", "/Users/piumarta/src/idst/object/idc/ScannerPosition.st", 0, 36, 38, &__info3 };
static oop ScannerPosition__line(oop v__closure, oop v_stateful_self, oop v_self)
 {
  _enter(&__info4);
  oop _1= 0;
  _line(36);
  _1= ((struct t_ScannerPosition *)v_stateful_self)->v_line;
  _leave();
  return _1;
  _leave();
 }
static struct __methodinfo __info5= { "printOn:", "ScannerPosition", "/Users/piumarta/src/idst/object/idc/ScannerPosition.st", 0, 38, 42, &__info4 };
static oop ScannerPosition__printOn_(oop v__closure, oop v_stateful_self, oop v_self, oop v_aStream)
 {
  _enter(&__info5);
  oop _1= 0;
  oop _2= 0;
  _line(38);
  _1= v_aStream;
  _2= ((struct t_ScannerPosition *)v_stateful_self)->v_file;
  _line(40);
  _sendv(s_nextPutAll_, 2, _1, _2);
  _2= l_6;
  _sendv(s_nextPut_, 2, _1, _2);
  _2= ((struct t_ScannerPosition *)v_stateful_self)->v_line;
  _1=_sendv(s_print_, 2, _1, _2);
  _1= v_self;
  _leave();
  return _1;
  _leave();
 }

static struct __methodinfo __info= { "__id__init__", "<initialisation>", "ScannerPosition.st", 0, 0, 0, &__info5 };
void __id__init__ScannerPosition(struct __libid *__libid)
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

  _sendv(s__5fimport_, 3, _libid->_object, "Object", "__id__init__Object");
  v__object= _libid->import("_object");
  v_Object= _libid->import("Object");
  v_UndefinedObject= _libid->import("UndefinedObject");
  v_StaticBlockClosure= _libid->import("StaticBlockClosure");
  v_Magnitude= _libid->import("Magnitude");
  v_Character= _libid->import("Character");
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
  v_ScannerPosition= _libid->proto2(v_Object, ScannerPosition___5fsizeof(0, 0));
  _libid->method(v_ScannerPosition, s__5fsizeof, (_imp_t)ScannerPosition___5fsizeof);
  _libid->method(v_ScannerPosition, s__5fdebugName, (_imp_t)ScannerPosition___5fdebugName);
  _libid->method(v_ScannerPosition, s__5fslots, (_imp_t)ScannerPosition___5fslots);
  _libid->export("ScannerPosition", v_ScannerPosition);
  _libid->method(v_ScannerPosition, s_withFile_line_, (_imp_t)ScannerPosition__withFile_line_);
  _libid->method(v_ScannerPosition, s_position, (_imp_t)ScannerPosition__position);
  _libid->method(v_ScannerPosition, s_file, (_imp_t)ScannerPosition__file);
  _libid->method(v_ScannerPosition, s_line, (_imp_t)ScannerPosition__line);
  l_6= _sendv(s_value_5f_, 2, v_Character, 58);
  _libid->method(v_ScannerPosition, s_printOn_, (_imp_t)ScannerPosition__printOn_);
  _leave();
}
