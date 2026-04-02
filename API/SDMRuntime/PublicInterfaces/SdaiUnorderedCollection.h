// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef _SDAI_UNORDERED_COLLECTION_H_
#define _SDAI_UNORDERED_COLLECTION_H_

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
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	ENTITY   unordered_collection
//
//		ABSTRACT SUPERTYPE OF 	(
//			ONEOF ( bag_instance, set_instance ) ) ; 
//		SUBTYPE OF ( aggregate_instance ) ;
//
//	END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------
// References :
//	Definition de la norme SDAI ISO 10303-22, paragraphe 8.4.11, p. 40
//	Operations de la norme SDAI ISO 10303-22, paragraphe 9.10.11, p. 89
//	Binding C++ de la norme SDAI ISO 10303-22, paragraphe D.11.7.*, p. 385 a 387
// ------------------------------------------------------------------------------------------------
/* Not so Stupid */
/** @nodoc */ 
#define FREECREATENESTED_SIMPLE(TypeH)    /* nothing */
/** @nodoc */
#define FREECREATENESTED_ENUM(TypeH)    /* nothing */
/** @nodoc */
#define FREECREATENESTED_SELECT(TypeH)    /* nothing */
/** @nodoc */
#define FREECREATENESTED_INSTANCE(TypeH)  /* nothing */
                                      /* Not conform to the norm, but to conform to common sense */
                                      /* Not virtual and not null : will be instanciated in Unord...*/
/** @nodoc */
#define FREECREATENESTED_AGGREGATE(TypeH) \
	TypeH CreateNestedAggrInstance() ; \
	TypeH CreateNestedAggrInstance(SDAIITER(TypeH)& anIter) \
	{	\
		return SDAIAGGR(SdaiAggr,TypeH)::CreateNestedAggrInstance(anIter); \
	}	\

/** macro to define SdaiUnorderedCollection */
/** @nodoc */
#define SDAIUNORDERED_HEADER(TypeH,GenericType)								\
class SDAI_AGGR_ExportedBy SDAIAGGR(SdaiUnorderedCollection,TypeH): public SDAIAGGR(SdaiAggr,TypeH)				\
{													\
friend class SdaiIterInstance;										\
friend class SDAIITER(TypeH);										\
friend class SDAIAGGR(SdaiAggr,TypeH);									\
friend class SDAIAGGR(SdaiBag,TypeH);									\
friend class SDAIAGGR(SdaiSet,TypeH);									\
													\
        /**********    C O N S T R U C T O R S      **************/					\
		/** @nodoc */							\
	  protected:SDAIAGGR(SdaiUnorderedCollection,TypeH)()						\
	  /** @nodoc */							\
	  :SDAIAGGR(SdaiAggr,TypeH)(){}									\
	  /** @nodoc */							\
	  protected:SDAIAGGR(SdaiUnorderedCollection,TypeH)(const SDAIAGGR(SdaiUnorderedCollection,TypeH)&s) \
	  :SDAIAGGR(SdaiAggr,TypeH)(s){}								\
	/**********    D E S T R U C T O R      **************/						\
	/** @nodoc */							\
	  protected: ~SDAIAGGR(SdaiUnorderedCollection,TypeH)();					\
        /********* S D A I    O P E R A T I O N    D E C L A R A T I O N S ***********/			\
         												\
            /* CreateNestedAggrInstance : all done in SdaiAggr, not needed here */			\
            /* IsMember: all done in SdaiAggr, not needed here */					\
          /* -------------- Add   --------------*/							\
		  /** @nodoc */							\
	  public: const SdaiBoolean & Add(const TypeH& anitem) ;					\
	  /** @nodoc */							\
	  public: const SdaiBoolean& Remove ( const TypeH& to_del );					\
           												\
          /* -------------- I am with Not So Stupid -------*/						\
		  /** @nodoc */							\
          public:FREECREATENESTED_##GenericType(TypeH)							\
	           											\
        /*********** D S    O P E R A T I O N    D E C L A R A T I O N S *************/			\
	  /*public: virtual const SdaiBoolean  &  IsKindOf(const SdaiString& typeName)  const;*/		\
};

#endif



















