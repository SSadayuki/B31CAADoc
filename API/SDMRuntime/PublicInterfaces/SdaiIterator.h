// COPYRIGHT DASSAULT SYSTEMES  2001
// ------------------------------------------------------------------------------------------------
//  SDAI -- C++ Language Binding -- SdaiIterator
// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiIterInstance -- Header
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

#ifndef	_SDAI_ITERATOR_H_
#define	_SDAI_ITERATOR_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include <SdaiMacro.h>
#include  <SdaiIterInstance.h>

class SdaiLogical;

/** @nodoc */
#define SDAIITER_HEADER(TypeH,GenericType)						\
 											\
class SDAIAGGR(SdaiAggr,TypeH);								\
class SDAIAGGR(SdaiOrderedCollection,TypeH);						\
class SDAIAGGR(SdaiUnorderedCollection,TypeH);						\
class SDAIAGGR(SdaiSet,TypeH);								\
class SDAIAGGR(SdaiArray,TypeH);							\
class SDAIAGGR(SdaiBag,TypeH);								\
class SDAIAGGR(SdaiList,TypeH);								\
											\
class SDAI_AGGR_ExportedBy SDAIITER(TypeH): public SdaiIterInstance						\
{											\
friend class SdaiAggrInstance;								\
friend class SDAIAGGR(SdaiAggr,TypeH);							\
friend class SDAIAGGR(SdaiOrderedCollection,TypeH);					\
friend class SDAIAGGR(SdaiUnorderedCollection,TypeH);					\
friend class SDAIAGGR(SdaiSet,TypeH);							\
friend class SDAIAGGR(SdaiArray,TypeH);							\
friend class SDAIAGGR(SdaiBag,TypeH);							\
friend class SDAIAGGR(SdaiList,TypeH);							\
											\
        /**********    C O N S T R U C T O R S      **************/			\
        public: SDAIITER(TypeH)(){}							\
        public: SDAIITER(TypeH)(const SDAIITER(TypeH)&s):SdaiIterInstance(s){}					\
        public: SDAIITER(TypeH)(SDAIAGGRH(SdaiAggr, TypeH) anAggr);			\
           /* Not standard but allows the scanning of const aggregate */		\
        public: SDAIITER(TypeH)(const SDAIAGGRH(SdaiAggr, TypeH) anAggr, const SdaiAccessMode);\
        										\
        /**********    D E S T R U C T O R      **************/				\
        public: virtual  ~SDAIITER(TypeH)();						\
        										\
        /********* S D A I    O P E R A T I O N    D E C L A R A T I O N S ***********/	\
	public: const SDAIAGGRH(SdaiAggr,TypeH)	Subject() const				\
		{ return (SDAIAGGRH(SdaiAggr,TypeH)) SdaiIterInstance::Subject();}	\
	public: /* const SdaiBoolean &	        TestSubject() const;*/			\
	public: int	 Subject(SDAIAGGRH(SdaiAggr, TypeH) anAggr)			\
		{return SdaiIterInstance::Subject((SdaiAggrInstanceH)anAggr);}				\
      											\
	public: TypeH		GetCurrentMember() const;				\
 	public: int		PutCurrentMember(const TypeH& anItem);				\
 	public: TypeH		RemoveCurrentMember();					\
	public: int		InsertBeforeCurrent(const TypeH& anItem);			\
	public: int		InsertAfterCurrent(const TypeH& anItem);			\
};

#endif /* _SDAI_ITERATOR_H_ */
