// COPYRIGHT DASSAULT SYSTEMES  2001
// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiEntHeaderMacro -- Header
// macros for header of application instance class
// ------------------------------------------------------------------------------------------------

#ifndef SDAI_ENT_HEADER_MACRO_H
#define SDAI_ENT_HEADER_MACRO_H



/** @CAA2Required */
/***********************************************************************/
/* HEADER REQUIRED BY THE SDM COMPILER                                 */
/***********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/***********************************************************************/



class SdaiString;
class SdaiLogical;
class SdaiBoolean;
class SdaiBinary;
typedef class SdaiEntity * SdaiEntityH;
typedef class SdaiSchema * SdaiSchemaH;
typedef class SdaiAttr * SdaiAttrH;

// macro for instance creation in early binding

#define sdaiCreate(model, cons_args, class) \
	class::CreateInstance(model)



#define	SDAI_FORWARD_ENTITY(Schema, Entity)					\
	class Sdai##Schema##Entity ;						\
	typedef	class Sdai##Schema##Entity * Sdai##Schema##Entity##H ;	\
SDAI_FORWARD_ALL_AGGREGATES(Sdai##Schema##Entity##H) /* see SdaiMacro.h */


#define SDAI_FORWARD_ALL_AGGREGATES_ALIAS(Ref,Alias)						\
typedef SDAIITER(Ref) SDAIITER(Alias) ;							\
typedef SDAIAGGR(SdaiAggr,Ref) SDAIAGGR(SdaiAggr,Alias);					\
typedef SDAIAGGR(SdaiUnorderedCollection,Ref) SDAIAGGR(SdaiUnorderedCollection,Alias);	\
typedef SDAIAGGR(SdaiOrderedCollection,Ref) SDAIAGGR(SdaiOrderedCollection,Alias);		\
typedef SDAIAGGR(SdaiArray,Ref) SDAIAGGR(SdaiArray,Alias);					\
typedef SDAIAGGR(SdaiBag,Ref) SDAIAGGR(SdaiBag,Alias); 					\
typedef SDAIAGGR(SdaiList,Ref) SDAIAGGR(SdaiList,Alias); 					\
typedef SDAIAGGR(SdaiSet,Ref) SDAIAGGR(SdaiSet,Alias);


#define SDAI_NON_PUBLIC_METHODS_ENTITY(Schema, Entity, supClass)				\
	                 									\
public :                  									\
 static  const SdaiString &  LeType() ;             						\
 /* const SdaiString&  GetInstanceTypeName()   const ;  (in SdaiAppInstance now) */     	\
 /* virtual */   const SdaiBoolean& IsKindOf( const SdaiString& typeName )  const ;		\
 static SdaiAppInstanceH Factory();								\
 static Sdai##Schema##Entity##H CreateInstance(SdaiModelH);					\
 static int InitDico();										\
protected :											\
	Sdai##Schema##Entity () ;								\
	Sdai##Schema##Entity (const Sdai##Schema##Entity & iCopy) ;				\
	Sdai##Schema##Entity& operator=(const Sdai##Schema##Entity & iCopy) ;				\
	/* virtual */	~Sdai##Schema##Entity () ;						\
	static SdaiSchemaH _schema;								\
	static SdaiEntityH _entity;
	
#define SDAI_STATIC_DECL_ATTR(Schema,Entity, AttrName)  \
private:                             \
	static SdaiAttrH _att##AttrName;

#endif	/* SDAI_ENT_HEADER_MACRO_H*/

