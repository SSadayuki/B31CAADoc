// COPYRIGHT DASSAULT SYSTEMES  2001
// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiAggr -- Header
// ------------------------------------------------------------------------------------------------
// Auteurs :
//	PYR  (Novembre 1995)
// ------------------------------------------------------------------------------------------------
//  Historique :
//
//	MODIFICATION	: 01
//	DATE		: Nov 1995
//	AUTEUR		: PYR
//	NATURE		: Refonte complete de la version d'aout 93,suppression des 
//                        templates.  
//	DESCRIPTION	: Norme ISO 10303-22 (annexe D)
//
// ------------------------------------------------------------------------------------------------
#ifndef _SDAI_AGGR_H_
#define _SDAI_AGGR_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <SdaiMacro.h>

#include <SdaiPrimitiveH.h>
#include <SdaiAggrInstance.h>

class SdaiBoolean;
// GenericType may be :
// SIMPLE  (Integer, Real, Boolean, Logicals,Strings,Binary,PrimitiveH) (exhaustive list)
// ENUM   (Types derived from Enum)
// SELECT  (Types derived from SelectH)
// INSTANCE ( pointers to classes derived from SdaiEntityInstance)
// AGGREGATE ( arraysH, bagsH, listsH, setsH only : Aggr ,OrderedCollection,... cannot be aggregated, nor
//              arrays, bags, lists, sets )
/** @nodoc */                       
#define CREATENESTED_SIMPLE(TypeH)    /* nothing */
/** @nodoc */ 
#define CREATENESTED_ENUM(TypeH)    /* nothing */
/** @nodoc */ 
#define CREATENESTED_SELECT(TypeH)    /* nothing */
/** @nodoc */ 
#define CREATENESTED_INSTANCE(TypeH)  /* nothing */
                                      /* Not conform to the norm, but to conform to common sense */
/** @nodoc */ 
#define CREATENESTED_AGGREGATE(TypeH) public :virtual TypeH CreateNestedAggrInstance(SDAIITER(TypeH)& anIter);



/*
// ------------------------------------------------------------------------------------------------
//                      ============== SdaiAggr ====================
//                      Formerly template <class TypeH> class SdaiAggr
//                    cannot be worse as a macro than it was as a template 
// -----------------------------------------------------------------------------------------------
*/
/** @nodoc */ 
#define SDAIAGGR_HEADER(TypeH,GenericType)						\
 											\
class SDAIITER(TypeH);									\
class SDAIAGGR(SdaiAggr,TypeH);								\
class SDAIAGGR(SdaiOrderedCollection,TypeH);						\
class SDAIAGGR(SdaiUnorderedCollection,TypeH);						\
class SDAIAGGR(SdaiSet,TypeH);								\
class SDAIAGGR(SdaiArray,TypeH);							\
class SDAIAGGR(SdaiBag,TypeH);								\
class SDAIAGGR(SdaiList,TypeH);								\
/* struct CATSdaiAgg##TypeH;	*/							\
											\
class SDAI_AGGR_ExportedBy SDAIAGGR(SdaiAggr,TypeH):public SdaiAggrInstance		\
{											\
    friend class SdaiIterInstance;								\
    friend class SDAIITER(TypeH);								\
											\
        /**********    C O N S T R U C T O R S      **************/			\
          protected : SDAIAGGR(SdaiAggr,TypeH)();					\
	  protected : SDAIAGGR(SdaiAggr,TypeH)( const SDAIAGGR(SdaiAggr,TypeH)&s);       \
	         						\
	/**********    D E S T R U C T O R      **************/				\
          protected: virtual  ~SDAIAGGR(SdaiAggr,TypeH)();				\
        										\
        /********* S D A I    O P E R A T I O N    D E C L A R A T I O N S ***********/	\
        										\
          /* -------------- CreateNestedAggrInstance -----------------*/		\
          public : CREATENESTED_##GenericType(TypeH)					\
         										\
          /* ---------- Test membership of a TypeH Item --------------*/		\
          public : const SdaiBoolean& IsMember(const TypeH& anItem) const ;	\
          										\
        /*********** D S    O P E R A T I O N    D E C L A R A T I O N S *************/ \
           										\
           										\
          /* ----------------Item type identification ---------------*/			\
	  public:  const  SdaiString & 	GetAggrElementsTypeName() const;		\
	  public:  SdaiPrimitiveType     GetAggrElementsType() const;			\
           										\
};


#endif	/* _SDAI_AGGR_H_ */



