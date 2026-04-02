// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef _SDAI_ORDERED_COLLECTION_H_
#define _SDAI_ORDERED_COLLECTION_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiOrderedCollection
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


#include <SdaiMacro.h>
#include <SdaiAggr.h>

// ------------------------------------------------------------------------------------------------
// Definition :
//
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	ENTITY   ordered_collection
//
//		ABSTRACT SUPERTYPE OF (
//                       ONEOF (array_instance, list_instance) ) ;
//
//              SUBTYPE OF (aggregate_instance) ;    
//
//	END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------
// References :
//	Definition de la norme SDAI ISO 10303-22, paragraphe 8.4.14, p. 41
//	Operations de la norme SDAI ISO 10303-22, paragraphe 9.10.12, p. 90
//	Binding C++ de la norme SDAI ISO 10303-22, paragraphe D.11.4.*, p. 377 a 379
// ------------------------------------------------------------------------------------------------

/* Stupid */
/** @nodoc */
#define INDEXEDCREATENESTED_SIMPLE(TypeH)    /* nothing */
/** @nodoc */
#define INDEXEDCREATENESTED_ENUM(TypeH)    /* nothing */
/** @nodoc */
#define INDEXEDCREATENESTED_SELECT(TypeH)    /* nothing */
/** @nodoc */
#define INDEXEDCREATENESTED_INSTANCE(TypeH)  /* nothing */
                                      /* Not conform to the norm, but to conform to common sense */
                                      /* Not virtual and not null : will be instanciated on createNeste..*/
/** @nodoc */
#define INDEXEDCREATENESTED_AGGREGATE(TypeH) \
/* inserts at (not after) position ind */			\
public:TypeH IndexedCreateNestedAggrInstance(SdaiInteger ind) ;

/** macro to define SdaiOrderedCollection */
/** @nodoc */
#define SDAIORDERED_HEADER(TypeH,GenericType)								\
class SDAI_AGGR_ExportedBy SDAIAGGR(SdaiOrderedCollection,TypeH): public SDAIAGGR(SdaiAggr,TypeH)				\
{													\
friend class SdaiIterInstance;										\
friend class SDAIITER(TypeH);										\
friend class SDAIAGGR(SdaiAggr,TypeH);									\
friend class SDAIAGGR(SdaiArray,TypeH);									\
friend class SDAIAGGR(SdaiList,TypeH);									\
													\
        /**********    C O N S T R U C T O R S      **************/					\
		/** @nodoc */							\
	  protected:SDAIAGGR(SdaiOrderedCollection,TypeH)()						\
	  /** @nodoc */							\
	  :SDAIAGGR(SdaiAggr,TypeH)(){}									\
	  /** @nodoc */							\
	  protected:SDAIAGGR(SdaiOrderedCollection,TypeH)(const SDAIAGGR(SdaiOrderedCollection,TypeH)&s) \
	  :SDAIAGGR(SdaiAggr,TypeH)(s){}								\
	/**********    D E S T R U C T O R      **************/						\
	/** @nodoc */							\
	  protected: ~SDAIAGGR(SdaiOrderedCollection,TypeH)();						\
        /********* S D A I    O P E R A T I O N    D E C L A R A T I O N S ***********/			\
         												\
            /* CreateNestedAggrInstance : all done in SdaiAggr, not needed here */			\
            /* IsMember: all done in SdaiAggr, not needed here */					\
          /* -------------- Indexedxx : Non virtual, Non Null, implemented here -------*/		\
                      /* I add some const that are missing in the norm           */			\
	/** @nodoc */							\
	  public: TypeH IndexedGet(const SdaiInteger ind) const;					\
	  /** @nodoc */							\
	  public: void  IndexedPut(const TypeH& ele, const SdaiInteger ind);				\
	  /** @nodoc */							\
          public: void	IndexedRemove ( const SdaiInteger ind );					\
           												\
          /* -------------- I am with Stupid -------*/							\
		  /** @nodoc */							\
          INDEXEDCREATENESTED_##GenericType(TypeH)							\
            												\
        /*********** D S    O P E R A T I O N    D E C L A R A T I O N S *************/			\
	  /*public: virtual const SdaiBoolean  &  IsKindOf(const SdaiString& typeName)  const;*/		\
};
#endif


