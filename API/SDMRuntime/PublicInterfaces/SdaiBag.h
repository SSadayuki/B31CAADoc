/**
 * @quickReview LDI 02:06:21
 */
// COPYRIGHT DASSAULT SYSTEMES  2001
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
#ifndef _SDAI_BAG_H_
#define _SDAI_BAG_H_
// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiBag -- Header
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
#include <SdaiUnorderedCollection.h>
#include <limits.h>
class CATSdaiAggrPrototype;
// ------------------------------------------------------------------------------------------------
// Definition :
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	ENTITY   bag_instance
//
//		SUBTYPE OF ( unordered_collection ) ;
//
//		datatype	: bag_type ;
//		contents	: BAG OF primitive ;
//
//	END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------
// References :
//	Definition de la norme SDAI ISO 10303-22, paragraphe 8.4.13, p. 40
//	Operations de la norme SDAI ISO 10303-22, paragraphe 9.10.11, p. 89
//	Binding C++ de la norme SDAI ISO 10303-22, paragraphe D.11.9.*, p. 388 a 389
// ------------------------------------------------------------------------------------------------

#ifdef SDAI_MULTI_TRANS_BCC
#define SDAIBAG_HEADER(TypeH,GenericType)								\
class SDAI_AGGR_ExportedBy SDAIAGGR(SdaiBag,TypeH): public SDAIAGGR(SdaiUnorderedCollection,TypeH)				\
{													\
friend class SdaiIterInstance;										\
friend class SDAIITER(TypeH);										\
friend class SDAIAGGR(SdaiAggr,TypeH);									\
friend class SDAIAGGR(SdaiUnorderedCollection,TypeH);							\
													\
        /**********    C O N S T R U C T O R S      **************/					\
	  public:SDAIAGGR(SdaiBag,TypeH)(unsigned size_min =0, unsigned size_max=INT_MAX, SdaiRoot::COWSupport cowable = SdaiRoot::NoCOW);			\
	  public:SDAIAGGR(SdaiBag,TypeH)(const SDAIAGGR(SdaiBag,TypeH)&s)				\
	  :SDAIAGGR(SdaiUnorderedCollection,TypeH)(s){}							\
	  public:SDAIAGGR(SdaiBag,TypeH)(const CATSdaiAggrPrototype* def, SdaiRoot::COWSupport cowable = SdaiRoot::NoCOW);				\
	  												\
	/**********    D E S T R U C T O R      **************/						\
	  protected: ~SDAIAGGR(SdaiBag,TypeH)();							\
        /********* S D A I    O P E R A T I O N    D E C L A R A T I O N S ***********/			\
            /* CreateNestedAggrInstance and associates: all done in SdaiUnordered, not needed here */	\
            /* IsMember: all done in SdaiAggr, not needed here */					\
            /* GetMemberCount: all done in SdaiAggr, not needed here */					\
            /* Add: all done in SdaiUno, not needed here */						\
 	 												\
      /*********** D S    O P E R A T I O N    D E C L A R A T I O N S *************/			\
	  /*public: virtual const SdaiBoolean & IsKindOf(const SdaiString& typeName)  const;		\
          public: const SdaiString&	GetInstanceTypeName() const;*/					\
 	 												\
      /**** P R I V A T E   D S    O P E R A T I O N    D E C L A R A T I O N S ****/			\
	  public: static SdaiAggrInstanceH CreateAggrOf(const CATSdaiAggrPrototype* def=NULL, SdaiRoot::COWSupport cowable = SdaiRoot::NoCOW)  ;	\
};
#else
#define SDAIBAG_HEADER(TypeH,GenericType)								\
class SDAI_AGGR_ExportedBy SDAIAGGR(SdaiBag,TypeH): public SDAIAGGR(SdaiUnorderedCollection,TypeH)				\
{													\
friend class SdaiIterInstance;										\
friend class SDAIITER(TypeH);										\
friend class SDAIAGGR(SdaiAggr,TypeH);									\
friend class SDAIAGGR(SdaiUnorderedCollection,TypeH);							\
													\
        /**********    C O N S T R U C T O R S      **************/					\
	  public:SDAIAGGR(SdaiBag,TypeH)(unsigned size_min =0, unsigned size_max=INT_MAX);			\
	  public:SDAIAGGR(SdaiBag,TypeH)(const SDAIAGGR(SdaiBag,TypeH)&s)				\
	  :SDAIAGGR(SdaiUnorderedCollection,TypeH)(s){}							\
	  public:SDAIAGGR(SdaiBag,TypeH)(const CATSdaiAggrPrototype* def);				\
	  												\
	/**********    D E S T R U C T O R      **************/						\
	  protected: ~SDAIAGGR(SdaiBag,TypeH)();							\
        /********* S D A I    O P E R A T I O N    D E C L A R A T I O N S ***********/			\
            /* CreateNestedAggrInstance and associates: all done in SdaiUnordered, not needed here */	\
            /* IsMember: all done in SdaiAggr, not needed here */					\
            /* GetMemberCount: all done in SdaiAggr, not needed here */					\
            /* Add: all done in SdaiUno, not needed here */						\
 	 												\
      /*********** D S    O P E R A T I O N    D E C L A R A T I O N S *************/			\
	  /*public: virtual const SdaiBoolean & IsKindOf(const SdaiString& typeName)  const;		\
          public: const SdaiString&	GetInstanceTypeName() const;*/					\
 	 												\
      /**** P R I V A T E   D S    O P E R A T I O N    D E C L A R A T I O N S ****/			\
	  public: static SdaiAggrInstanceH CreateAggrOf(const CATSdaiAggrPrototype* def=NULL)  ;	\
};
#endif

#endif	/* _SDAI_BAG_H_ */
