/**
 * @quickReview LDI 02:06:21
 */
// COPYRIGHT DASSAULT SYSTEMES  2001
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
#ifndef _SDAI_ARRAY_H_
#define _SDAI_ARRAY_H_
// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiArray -- Header
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


class CATSdaiAggrPrototype;


// ------------------------------------------------------------------------------------------------
// Definition :
//
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	ENTITY   array_instance
//
//		SUBTYPE OF (ordered_collection) ;
//
//              datatype	: array_type ;
//              contents	: ARRAY[datatype.lower : datatype.upper] OF primitive ; 
//
//	END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------
// References :
//	Definition de la norme SDAI ISO 10303-22, paragraphe 8.4.16, p. 42
//	Operations de la norme SDAI ISO 10303-22, paragraphe 9.10.12.6, p. 95
//	Binding C++ de la norme SDAI ISO 10303-22, paragraphe D.11.5.*, p. 380 a 382
// ------------------------------------------------------------------------------------------------
#ifdef SDAI_MULTI_TRANS_BCC

#define SDAIARRAY_HEADER(TypeH,GenericType)								\
class SDAI_AGGR_ExportedBy SDAIAGGR(SdaiArray,TypeH): public SDAIAGGR(SdaiOrderedCollection,TypeH)				\
{													\
friend class SdaiIterInstance;										\
friend class SDAIITER(TypeH);										\
friend class SDAIAGGR(SdaiAggr,TypeH);									\
friend class SDAIAGGR(SdaiOrderedCollection,TypeH);							\
													\
        /**********    C O N S T R U C T O R S      **************/					\
	  /*public:SDAIAGGR(SdaiArray,TypeH)();*/								\
	  public:SDAIAGGR(SdaiArray,TypeH)(const int Index_min = 0,const  unsigned size = 10, SdaiRoot::COWSupport cowable = SdaiRoot::NoCOW);			\
	  public:SDAIAGGR(SdaiArray,TypeH)(const CATSdaiAggrPrototype* def, SdaiRoot::COWSupport cowable = SdaiRoot::NoCOW);				\
	  public:SDAIAGGR(SdaiArray,TypeH)(const SDAIAGGR(SdaiArray,TypeH)&s)				\
	    :SDAIAGGR(SdaiOrderedCollection,TypeH)(s){}							\
	 												\
	/**********    D E S T R U C T O R      **************/						\
	  protected: ~SDAIAGGR(SdaiArray,TypeH)();							\
        /********* S D A I    O P E R A T I O N    D E C L A R A T I O N S ***********/			\
               												\
            /* CreateNestedAggrInstance and associates: all done in SdaiAggr, not needed here */	\
            /* IsMember: all done in SdaiAggr, not needed here */					\
            /* GetMemberCount: all done in SdaiAggr, not needed here */					\
            /* IndexedGet: all done in SdaiOrderedCollection, not needed here */			\
            /* IndexedPut: all done in SdaiOrderedCollection, not needed here */			\
            /* IndexedRemove: all done in SdaiOrderedCollection, not needed here */			\
          /* -------------- Indexed Test and Unset -------*/						\
                      /* I add some const that are missing in the norm           */			\
           public: const SdaiBoolean & IndexedTestValue (const SdaiInteger ind) const			\
				       { return SdaiAggrInstance::IndexedTest(ind);} 			\
           public: inline void         IndexedUnsetValue(const SdaiInteger ind){IndexedRemove (ind );}  \
           public: const SdaiBoolean & IteratorTestValue(const SDAIITER(TypeH)& anIter) const		\
                                       {return IndexedTestValue (anIter.Position());}			\
           public: void        		IteratorUnsetValue(const SDAIITER(TypeH)& anIter)		\
                                       {RemoveMember(anIter);}						\
           public: SdaiInteger  GetIndexMin() const ;			\
            												\
        /*********** D S    O P E R A T I O N    D E C L A R A T I O N S *************/			\
	  /*public: virtual const SdaiBoolean & IsKindOf(const SdaiString& typeName)  const;*/		\
          /*public: const SdaiString&	GetInstanceTypeName() const;*/					\
            												\
        /**** P R I V A T E   D S    O P E R A T I O N    D E C L A R A T I O N S ****/			\
	  public: static SdaiAggrInstanceH CreateAggrOf(const CATSdaiAggrPrototype* def=NULL, SdaiRoot::COWSupport cowable = SdaiRoot::NoCOW)  ;	\
};
#else

#define SDAIARRAY_HEADER(TypeH,GenericType)								\
class SDAI_AGGR_ExportedBy SDAIAGGR(SdaiArray,TypeH): public SDAIAGGR(SdaiOrderedCollection,TypeH)				\
{													\
friend class SdaiIterInstance;										\
friend class SDAIITER(TypeH);										\
friend class SDAIAGGR(SdaiAggr,TypeH);									\
friend class SDAIAGGR(SdaiOrderedCollection,TypeH);							\
													\
        /**********    C O N S T R U C T O R S      **************/					\
	  /*public:SDAIAGGR(SdaiArray,TypeH)();*/								\
	  public:SDAIAGGR(SdaiArray,TypeH)(const int Index_min = 0,const  unsigned size = 10);			\
	  public:SDAIAGGR(SdaiArray,TypeH)(const CATSdaiAggrPrototype* def);				\
	  public:SDAIAGGR(SdaiArray,TypeH)(const SDAIAGGR(SdaiArray,TypeH)&s)				\
	    :SDAIAGGR(SdaiOrderedCollection,TypeH)(s){}							\
	 												\
	/**********    D E S T R U C T O R      **************/						\
	  protected: ~SDAIAGGR(SdaiArray,TypeH)();							\
        /********* S D A I    O P E R A T I O N    D E C L A R A T I O N S ***********/			\
               												\
            /* CreateNestedAggrInstance and associates: all done in SdaiAggr, not needed here */	\
            /* IsMember: all done in SdaiAggr, not needed here */					\
            /* GetMemberCount: all done in SdaiAggr, not needed here */					\
            /* IndexedGet: all done in SdaiOrderedCollection, not needed here */			\
            /* IndexedPut: all done in SdaiOrderedCollection, not needed here */			\
            /* IndexedRemove: all done in SdaiOrderedCollection, not needed here */			\
          /* -------------- Indexed Test and Unset -------*/						\
                      /* I add some const that are missing in the norm           */			\
           public: const SdaiBoolean & IndexedTestValue (const SdaiInteger ind) const			\
				       { return SdaiAggrInstance::IndexedTest(ind);} 			\
           public: inline void         IndexedUnsetValue(const SdaiInteger ind){IndexedRemove (ind );}  \
           public: const SdaiBoolean & IteratorTestValue(const SDAIITER(TypeH)& anIter) const		\
                                       {return IndexedTestValue (anIter.Position());}			\
           public: void        		IteratorUnsetValue(const SDAIITER(TypeH)& anIter)		\
                                       {RemoveMember(anIter);}						\
           public: SdaiInteger  GetIndexMin() const ;			\
            												\
        /*********** D S    O P E R A T I O N    D E C L A R A T I O N S *************/			\
	  /*public: virtual const SdaiBoolean & IsKindOf(const SdaiString& typeName)  const;*/		\
          /*public: const SdaiString&	GetInstanceTypeName() const;*/					\
            												\
        /**** P R I V A T E   D S    O P E R A T I O N    D E C L A R A T I O N S ****/			\
	  public: static SdaiAggrInstanceH CreateAggrOf(const CATSdaiAggrPrototype* def=NULL)  ;	\
};
#endif
#endif	/* _SDAI_ARRAY_H_ */




