/* -*-c++-*- */
#ifndef sequence_CATBaseUnknown_ptr_h
#define sequence_CATBaseUnknown_ptr_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

#include  "CATOMY.h"
class CATListPtrCATBaseUnknown;

// sequences 
#include "sequence.h"
#include "CATBaseUnknown.h"


/**
* Class to define sequence of CATBaseUnknown_ptr.
*/

class ExportedByCATOMY _SEQUENCE_CATBaseUnknown_ptr : public sequence 
{ 
public:
	/**
	* Constructs an empty sequence of CATBaseUnknown_ptr.
	*/
  _SEQUENCE_CATBaseUnknown_ptr ();
  virtual ~_SEQUENCE_CATBaseUnknown_ptr ();
  /**
  * Constructs an empty sequence of CATBaseUnknown_ptr of a given size.
  */
  _SEQUENCE_CATBaseUnknown_ptr (CATLONG32 iMax);
  /**
  * Constructs a sequence of CATBaseUnknown_ptr of a given size from a data .
  */
  _SEQUENCE_CATBaseUnknown_ptr (CATLONG32 iMax, void* iData);
  /**
  * Initializes a sequence of CATBaseUnknown_ptr of a given size with a given first element.
  */
  _SEQUENCE_CATBaseUnknown_ptr (CATLONG32 iMax, CATBaseUnknown_ptr iFirstItem ...);
	/**
	* Copy Constructor.
	* @param iFrom
	*        sequence to copy.
	*/
  _SEQUENCE_CATBaseUnknown_ptr (const _SEQUENCE_CATBaseUnknown_ptr& iFrom);
 /**
  * Assignment operator.
  * @param iFrom
  *   the sequence to assign to the current one
  * @return 
  *   The sequence resulting from the assignment
  */
  _SEQUENCE_CATBaseUnknown_ptr& operator= (const _SEQUENCE_CATBaseUnknown_ptr& iFrom);

  /** @nodoc */
  CATLONG32 length() const { return length_ ; } 
  /** @nodoc */
  CATLONG32 length(CATLONG32 newLength) { return sequence::length(newLength) ; } 
  /** @nodoc */
  CATLONG32 max() const { return max_ ; } 
   /** @nodoc */
 CATLONG32 max(CATLONG32 newMax) { return sequence::max (newMax, sizeof(CATBaseUnknown_ptr)) ; }

	/**
	* Subscripting operator.	
    */
  CATBaseUnknown_ptr& operator [] (CATLONG32 i);
	/**
	* Subscripting operator.	
    */
  const CATBaseUnknown_ptr& operator [] (CATLONG32 i) const;

  /**
  * Constructs a sequence of CATBaseUnknown_ptr from a CATListP.
  */
  _SEQUENCE_CATBaseUnknown_ptr (const CATListPtrCATBaseUnknown& iList) ;
 /**
  * Assignment operator.
  * @param iFrom
  *   the list of pointers to assign to the current sequence
  * @return 
  *   The sequence resulting from the assignment
  */
  _SEQUENCE_CATBaseUnknown_ptr& operator= (const CATListPtrCATBaseUnknown& ) ;
};


#include  <CATListPV.h>

/**
* Class to define a list of interface pointers and list operations on it.
*/
class  ExportedByCATOMY CATListPtrCATBaseUnknown 
{
  public :
  /** @nodoc */ 
  CATListPtrCATBaseUnknown ( int iInitAlloc = 0 ) ;
  /** @nodoc */ 
  CATListPtrCATBaseUnknown ( const CATListPtrCATBaseUnknown& iCopy ) ;
  /** @nodoc */ 
  virtual ~CATListPtrCATBaseUnknown () ;

  /** @nodoc */ 
  CATListPtrCATBaseUnknown& operator= ( const CATListPtrCATBaseUnknown& iCopy ) ; 

  /** 
  * Returns the ieme element.
  * @param iPos
  */ 
  CATBaseUnknown*& operator[] ( int iPos ) ;
  /** @nodoc */ 
  CATBaseUnknown*  operator[] ( int iPos ) const ;
  
  // Les plus de monsieur OMPlus
  /** @nodoc */ 
  int operator == ( const CATListPtrCATBaseUnknown& iL ) const ;
  /** @nodoc */ 
  int operator != ( const CATListPtrCATBaseUnknown& iL ) const ;
  /** 
  * Returns the list size.
  * @return 
  *  The size of the list
  */
  int  Size () const ;

  /** @nodoc */ 
  // #define	CATLISTP_CtorFromArrayPtrs
  CATListPtrCATBaseUnknown ( CATBaseUnknown*  iArray , int iSize ) ;
  /** @nodoc */ 
  CATListPtrCATBaseUnknown ( CATBaseUnknown** iArray , int iSize ) ;

  // #define	CATLISTP_Append
  /**
  *  Adds an element in the list.
  * @param iAdd
  *   The element to add
  */
  void Append ( CATBaseUnknown* iAdd ) ;  

  /** @nodoc */ 
  // #define	CATLISTP_AppendList
  void Append ( const CATListPtrCATBaseUnknown& iConcat ) ;
    
  // #define	CATLISTP_InsertAt
  /**
  * Inserts an elemnt in the list at a position.
  * @param iPos
  *  The position to add the element
  * @param iAdd
  *  The element to add.
  */
  void InsertAt ( int iPos , CATBaseUnknown* iAdd ) ;

  // #define	CATLISTP_ReSize
  /** @nodoc */
  void Size ( int iSize );

  // #define	CATLISTP_Locate
  /**
  * Searchs for an element.
  * @param iLocate
  * @param iFrom
  */
  int  Locate ( CATBaseUnknown* iLocate , int iFrom = 1 ) const ;
  
  // #define	CATLISTP_RemoveValue
  /**
  * Removes an element.
  * @param iRemove
  *   The element to remove
  * @return 
  *
  */
  int  RemoveValue ( CATBaseUnknown* iRemove ) ;

  /** @nodoc */ 
  // #define	CATLISTP_RemoveList
  int  Remove ( const CATListPtrCATBaseUnknown& iSubstract ) ;

  // #define	CATLISTP_RemovePosition
  /**
  * Removes the iem  element.
  * @param iPos
  */ 
  void RemovePosition ( int iPos ) ;

  // #define	CATLISTP_RemoveAll
  /**
  * Removes all element of the list.
  * @param iMH
  *
  */
  void RemoveAll ( CATCollec::MemoryHandling iMH = CATCollec::ReleaseAllocation ) ;

  /** @nodoc */ 
  // #define	CATLISTP_RemoveNulls
  int  RemoveNulls () ;

  /** @nodoc */ 
  // #define	CATLISTP_RemoveDuplicates
  int  RemoveDuplicates ( CATListPtrCATBaseUnknown*	ioExtract = NULL ) ;
  
  /** @nodoc */ 
  // #define	CATLISTP_Swap
  void Swap ( int iPos1 , int iPos2 ) ;

  /** @nodoc */ 
  // #define	CATLISTP_QuickSort
  void QuickSort ( int (*iPFCompare) ( CATBaseUnknown* , CATBaseUnknown* ) ) ;

  /** @nodoc */ 
  // #define	CATLISTP_NbOccur
  int  NbOccur ( CATBaseUnknown* iTest ) ;
  
  /** @nodoc */ 
  // #define	CATLISTP_FillArrayPtrs
  void FillArray ( CATBaseUnknown** iArray , int iMaxSize ) const ;

  /** @nodoc */ 
  // #define	CATLISTP_Compare
  static int  Compare ( const CATListPtrCATBaseUnknown& iL1 , 
                        const CATListPtrCATBaseUnknown& iL2 , 
                        int (*iPFCompare) ( CATBaseUnknown* , CATBaseUnknown* ) ) ;

  /** @nodoc */ 
  // #define	CATLISTP_Intersection
  static void Intersection ( const CATListPtrCATBaseUnknown& iL1 , 
                             const CATListPtrCATBaseUnknown& iL2 , 

                             CATListPtrCATBaseUnknown&       ioResult ) ;
  /** @nodoc */ 
  typedef int ( CATBaseUnknown:: *PtrMbrFunct) () ;
  /** @nodoc */ 
  typedef int ( CATBaseUnknown:: *PtrMbrFunctConst) () const ;
  /** @nodoc */ 
  typedef int ( *PtrGlbFunct ) ( CATBaseUnknown* ) ;
  
  /** @nodoc */ 
  int ApplyMemberFunct ( PtrMbrFunct          iPF , 
                         int                  iFrom  = 1 , 
                         int                  iTo    = 0 , 
                         CATBaseUnknown** iPLast = 0 , 
                         int*                 iPRC   = 0 ) const ;

  /** @nodoc */ 
  int ApplyMemberFunctConst ( PtrMbrFunctConst     iPF , 
                              int                  iFrom  = 1 , 
                              int                  iTo    = 0 , 
                              CATBaseUnknown** iPLast = 0 , 
                              int*                 iPRC   = 0 ) const ;
  
  private : 
  CATListPV* _Lptr ;  

  // methodes ajoutees a la mimine pour echange sequence <-> CATListP
  // rad, 23/07/96
  public:
  /** @nodoc */ 
  CATListPtrCATBaseUnknown (const _SEQUENCE_CATBaseUnknown_ptr& ) ;
  /** @nodoc */ 
  CATListPtrCATBaseUnknown& operator= (const _SEQUENCE_CATBaseUnknown_ptr& ) ;
}; 







#endif


