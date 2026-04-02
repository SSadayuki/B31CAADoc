/**
 * @quickReview LDI 02:06:21
 */
// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef _SDAI_LIST_H_
#define _SDAI_LIST_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiList -- Header
// ------------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------------
// Auteurs :
//	
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


#include <SdaiMacro.h>
#include <SdaiOrderedCollection.h>
#include <limits.h>
class CATSdaiAggrPrototype; 

// ------------------------------------------------------------------------------------------------
// Definition :
//
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	ENTITY   list_instance
//
//		SUBTYPE OF (ordered_collection) ;
//
//		datatype	: list_type ;
//		contents	: LIST OF primitive ;
//
//	END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------
// References :
//	Definition de la norme SDAI ISO 10303-22, paragraphe 8.4.15, p. 41
//	Operations de la norme SDAI ISO 10303-22, paragraphe 9.10.12.7, p. 98
//	Binding C++ de la norme SDAI ISO 10303-22, paragraphe D.11.6.*, p. 383 a 385
// ------------------------------------------------------------------------------------------------

//
// The SDAILIST_HEADER macro is used by code generated for the early SDAI binding by the SDM compiler.
// This macro is used in generated header files to provide the declaration of early list objects.
// 

#ifdef SDAI_MULTI_TRANS_BCC
/* with SDAI_MULTI_TRANS_BCC on, aggregates are a bit different: the CreateAggrOf method takes an additionnal parameter */
/** @nodoc */
#define SDAILIST_HEADER(TypeH,GenericType)								\
class SDAI_AGGR_ExportedBy SDAIAGGR(SdaiList,TypeH): public SDAIAGGR(SdaiOrderedCollection,TypeH)				\
{													\
friend class SdaiIterInstance;										\
friend class SDAIITER(TypeH);										\
friend class SDAIAGGR(SdaiAggr,TypeH);									\
friend class SDAIAGGR(SdaiOrderedCollection,TypeH);							\
													\
        /**********    C O N S T R U C T O R S      **************/					\
	  /*public:SDAIAGGR(SdaiList,TypeH)();*/								\
	  /** @nodoc */							\
	  public:SDAIAGGR(SdaiList,TypeH)(unsigned size_min = 0, unsigned size_max=INT_MAX, SdaiRoot::COWSupport cowable = SdaiRoot::NoCOW);			\
	  /** @nodoc */							\
	  public:SDAIAGGR(SdaiList,TypeH)(const CATSdaiAggrPrototype * def, SdaiRoot::COWSupport cowable = SdaiRoot::NoCOW);				\
	  /** @nodoc */							\
	  public:SDAIAGGR(SdaiList,TypeH)(const SDAIAGGR(SdaiList,TypeH)&s)				\
	    :SDAIAGGR(SdaiOrderedCollection,TypeH)(s){}							\
	 												\
	/**********    D E S T R U C T O R      **************/						\
	/** @nodoc */							\
	  protected: ~SDAIAGGR(SdaiList,TypeH)();							\
        /********* S D A I    O P E R A T I O N    D E C L A R A T I O N S ***********/			\
               												\
            /* CreateNestedAggrInstance and associates: all done in SdaiAggr, not needed here */	\
            /* IsMember: all done in SdaiAggr, not needed here */					\
            /* GetMemberCount: all done in SdaiAggr, not needed here */					\
            /* IndexedGet: all done in SdaiOrderedCollection, not needed here */			\
            /* IndexedPut: all done in SdaiOrderedCollection, not needed here */			\
            /* IndexedRemove: all done in SdaiOrderedCollection, not needed here */			\
         /* -------------- queueing or stacking-------*/			       			\
		 /** @nodoc */							\
         public: void Prepend(const TypeH& anitem);							\
		 /** @nodoc */							\
         public: void Append (const TypeH& anItem);							\
        /*********** D S    O P E R A T I O N    D E C L A R A T I O N S *************/			\
	  /*public: virtual const SdaiBoolean &  IsKindOf(const SdaiString& typeName)  const;		\
          public: const SdaiString&	GetInstanceTypeName() const;*/					\
        /**** P R I V A T E   D S    O P E R A T I O N    D E C L A R A T I O N S ****/			\
       /** @nodoc */							\
	  public: static SdaiAggrInstanceH CreateAggrOf(const CATSdaiAggrPrototype* def=NULL, SdaiRoot::COWSupport cowable = SdaiRoot::NoCOW)  ;	\
};

#else
/** @nodoc */
#define SDAILIST_HEADER(TypeH,GenericType)								\
class SDAI_AGGR_ExportedBy SDAIAGGR(SdaiList,TypeH): public SDAIAGGR(SdaiOrderedCollection,TypeH)				\
{													\
friend class SdaiIterInstance;										\
friend class SDAIITER(TypeH);										\
friend class SDAIAGGR(SdaiAggr,TypeH);									\
friend class SDAIAGGR(SdaiOrderedCollection,TypeH);							\
													\
        /**********    C O N S T R U C T O R S      **************/					\
	  /*public:SDAIAGGR(SdaiList,TypeH)();*/								\
	  /** @nodoc */							\
	  public:SDAIAGGR(SdaiList,TypeH)(unsigned size_min = 0, unsigned size_max=INT_MAX);			\
	  /** @nodoc */							\
	  public:SDAIAGGR(SdaiList,TypeH)(const CATSdaiAggrPrototype * def);				\
	  /** @nodoc */							\
	  public:SDAIAGGR(SdaiList,TypeH)(const SDAIAGGR(SdaiList,TypeH)&s)				\
	    :SDAIAGGR(SdaiOrderedCollection,TypeH)(s){}							\
	 												\
	/**********    D E S T R U C T O R      **************/						\
	/** @nodoc */							\
	  protected: ~SDAIAGGR(SdaiList,TypeH)();							\
        /********* S D A I    O P E R A T I O N    D E C L A R A T I O N S ***********/			\
               												\
            /* CreateNestedAggrInstance and associates: all done in SdaiAggr, not needed here */	\
            /* IsMember: all done in SdaiAggr, not needed here */					\
            /* GetMemberCount: all done in SdaiAggr, not needed here */					\
            /* IndexedGet: all done in SdaiOrderedCollection, not needed here */			\
            /* IndexedPut: all done in SdaiOrderedCollection, not needed here */			\
            /* IndexedRemove: all done in SdaiOrderedCollection, not needed here */			\
         /* -------------- queueing or stacking-------*/			       			\
		 /** @nodoc */							\
         public: void Prepend(const TypeH& anitem);							\
		 /** @nodoc */							\
         public: void Append (const TypeH& anItem);							\
        /*********** D S    O P E R A T I O N    D E C L A R A T I O N S *************/			\
	  /*public: virtual const SdaiBoolean &  IsKindOf(const SdaiString& typeName)  const;		\
          public: const SdaiString&	GetInstanceTypeName() const;*/					\
        /**** P R I V A T E   D S    O P E R A T I O N    D E C L A R A T I O N S ****/			\
       /** @nodoc */							\
	  public: static SdaiAggrInstanceH CreateAggrOf(const CATSdaiAggrPrototype* def=NULL)  ;	\
};
#endif

#endif



